#include <iostream> 
using namespace std;

// declaring node structure for queue elements
struct NodeQ {
    int data;        // storing integer data in node
    NodeQ* next;    // pointer to next node in queue
};

NodeQ* frontPtr = nullptr; // pointer to the front of the queue, initially defining as empty or nullptr
NodeQ* rearPtr = nullptr;  // pointer to the rear of the queue, initially defining as empty or nullptr

// enqueue 
void enqueue(int value) {
    NodeQ* newNode = new NodeQ(); // allocating memory for a new node
    newNode->data = value;         // set node data to input value coming from the parameter
    newNode->next = nullptr;       // new node will be last, so next would be null
    if (!rearPtr) {                // when queue is empty
        frontPtr = rearPtr = newNode; // both front and rear point to new node as it is the only one in the queue
    } else { // when queue is not empty
        rearPtr->next = newNode;  // link old rear to new node as it is the new rear of the queue 
        rearPtr = newNode;        // update rear to new node as it is the new rear of the queue 
    }
    cout << value << " enqueued in queue.\n";
}

// dequeue
void dequeue() {
    if (!frontPtr) {             // when queue is empty
        cout << "Queue is empty, cannot dequeue.\n"; 

    }
    NodeQ* temp = frontPtr;       // holding the current front node in temp
    frontPtr = frontPtr->next;    // move front to next node as it is the new front of the queue 
    if (!frontPtr) rearPtr = nullptr; // if queue becomes empty, reset rear to nullptr 
    delete temp;                  // free memory of removed node 
    cout << temp->data << " dequeued from queue.\n"; // show dequeued value 
    if (!frontPtr) rearPtr = nullptr; // if queue becomes empty, reset rear to nullptr 
    delete temp;                  // free memory of removed node 
}


void displayQueue() {
    NodeQ* temp = frontPtr;       // startint from front 
    cout << "Queue contents: ";
    while (temp) {                // traverse until end of queue 
        cout << temp->data << " "; 
        temp = temp->next;        // move to next node 
    }
    cout << "\n";               // newline
}

int main() {
    int choice, value;            // initializing variables for menu choice and value
    while (true) {                
        cout << "\n1.Enqueue\n2.Dequeue\n3.Display\n0.Exit\nChoice: ";
        cin >> choice;            
        switch (choice) {        
            case 1:
                cout << "Value to enqueue: "; 
                cin >> value;      
                enqueue(value);    // passing parameter value to enqueue function 
                cout << endl;
                break;
            case 2:
                dequeue();        // declaring dequeue function 
                cout << endl;
                break;
            case 3:
                displayQueue();    
                break;
            case 0:
                return 0;          
            default:
                cout << "Invalid choice.\n"; 
        }
    }
}