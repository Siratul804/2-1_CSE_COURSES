#include <iostream>
using namespace std; 

// Declaring node structure for circular queue elements
struct NodeC {
    int data;        // storing integer data in node
    NodeC* next;    // pointer to next node in queue
};

NodeC* rearC = nullptr; // pointer to the rear of the queue, initially defining as empty or nullptr

// enqueue to circular queue
void enqueueC(int value) {
    NodeC* newNode = new NodeC(); // allocating memory for a new node
    newNode->data = value;         // set node data to input value coming from the parameter
    if (!rearC) {                   // when queue is empty
        newNode->next = newNode;   // point to itself as it is the only one in the queue 
        rearC = newNode;           // rear points to new node as it is the only one in the queue 
    } else {
        newNode->next = rearC->next; // new node points to front node as it is circular queue 
        rearC->next = newNode;       // old rear points to new node as it is circular queue 
        rearC = newNode;             // update rear to new node as it is circular queue 
    }
    cout << value << " enqueued in circular queue.\n";
}

// dequeue from circular queue
void dequeueC() {
    if (!rearC) {                  // if empty
        cout << "Circular queue is empty, cannot dequeue.\n";
        return;                 
    }
    NodeC* front = rearC->next;   // front is next of rear as it is circular queue 
    int value = front->data;      // get data to show value 
    if (front == rearC) {         // only one node in queue
        delete front;             // free memory of front node as it is the only one in the queue 
        rearC = nullptr;          // queue becomes empty as it is the only one in the queue 
    } else {
        rearC->next = front->next; // bypass front node as it is circular queue
        delete front;             // free memory of front node as it is circular queue 
    }
    cout << value << " dequeued from circular queue.\n";
    delete front;         
}

// display 
void displayCircular() {
    if (!rearC) {                  
        cout << "Circular queue is empty.\n";
        return;                  
    }
    NodeC* temp = rearC->next;    // start from front as it is circular queue 
    cout << "Circular queue contents: ";
    do {
        cout << temp->data << " "; // print data of current node as it is circular queue 
        temp = temp->next;        // move to next node as it is circular queue 
    } while (temp != rearC->next); // until we loop back to front as it is circular queue 
    cout << "\n";               // newline after printing all elements as it is circular queue 
}

int main() {
    int choice, value;            // initializing variables for menu choice and value input as it is circular queue 
    while (true) {              
        cout << "\n1.Enqueue\n2.Dequeue\n3.Display\n0.Exit\nChoice: ";
        cin >> choice;          
        switch (choice) {       
            case 1:
                cout << "Value to enqueue: "; 
                cin >> value;  
                enqueueC(value);   // passing parameter value to enqueue function as it is circular queue 
                break;
            case 2:
                dequeueC();        // remove from circular queue as it is circular queue 
                break;
            case 3:
                displayCircular(); 
                break;
            case 0:
                return 0;          
            default:
                cout << "Invalid choice.\n"; 
        }
    }
}
