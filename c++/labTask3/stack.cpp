#include <iostream> 
using namespace std; 

// declaring node structure for stack elements
struct Node {
    int data;       // storing integer data in node
    Node* next;     // pointer to next node in stack
};

Node* topPtr = nullptr; // pointer to the top of the stack, initially defining as empty or nullptr

// push
void push(int value) {
    Node* newNode = new Node(); // allocating memory for a new node
    newNode->data = value;      // set node data to input value coming from the parameter
    newNode->next = topPtr;     // new node points (next) to the current top 
    topPtr = newNode;           // update top to new node as the new top of the stack

    cout << value << " pushed onto stack.\n"; 
}

// pop
void pop() {
    if (!topPtr) { // check if stack is empty then just return 
        cout << "Stack is empty, cannot pop.\n"; 
        return; 
    }
    Node* temp = topPtr;         // holding the current top node
    topPtr = topPtr->next;       // move top to the next node as the new top
    temp->next = nullptr;        // remove link to the old top 

    cout << temp->data << " popped from stack.\n"; 

    delete temp;                 // free memory of popped node 
}

// display 
void displayStack() {
    Node* temp = topPtr;         // starting from top node 
    cout << "Stack contents: ";
    while (temp) {               // traverse until end of stack
        cout << temp->data << " "; // printing the node data 
        temp = temp->next;       // moving to next node while traversing
        if (temp) {
            cout << "->";        // arrow to separate nodes in output 
        }
        // temp will be nullptr when end of stack reached 
        // and loop will terminate 
    }
    cout << "\n";             
}

int main() {
    int choice, value;           // initializing variables for menu choice and value
    while (true) {              
        cout << "\nMenu:\n";
        cout << "\n1.Push\n2.Pop\n3.Display\n0.Exit\nChoice: ";
        cin >> choice;           // taking user choice
        switch (choice) {       
            case 1:
                cout << "Value to push: "; 
                cin >> value;      
                push(value);      //passing parameter value to push function to store data in stack
                break;
            case 2:
                pop();            // declaring pop function to remove element from stack
                break;
            case 3:
                displayStack();   
                break;
            case 0:
                return 0;         
            default:
                cout << "Invalid choice.\n"; 
        }
    }
}
