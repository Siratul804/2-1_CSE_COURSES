#include <iostream>
using namespace std;

int main() {
    int q;
    cout << "Enter queue size: ";
    cin >> q;

    int queue[q]; 
    for (int i = 0; i < q; i++) {
        queue[i] = -1; 
    }

    int front = -1, rear = -1;

    while (true) {
        int option;
        cout << "\nSelect an option: \n";
        cout << "1: Enqueue\n";
        cout << "2: Dequeue\n";
        cout << "3: Check if Empty\n";
        cout << "4: Check if Full\n";
        cout << "0: Exit\n";
        cout << "Enter your choice: ";
        cin >> option;

        if (option == 1) { 
            if (front == 0 && rear == q - 1 || rear + 1 == front) {
                cout << "Overflow: The queue is full.\n";
            } else {
                int item;
                cout << "Enter value to enqueue: ";
                cin >> item;

                if (front == -1) { 
                    front = rear = 0;
                } else if (rear == q - 1) { // If rear is at the end, wrap around
                    rear = 0;
                } else { 
                    rear++;
                }

                queue[rear] = item;

               
                cout << "Queue after Enqueue: ";
                if (front <= rear) {
                    for (int i = front; i <= rear; i++) {
                        cout << queue[i] << " ";
                    }
                } else {
                    for (int i = front; i < q; i++) {
                        cout << queue[i] << " ";
                    }
                    for (int i = 0; i <= rear; i++) {
                        cout << queue[i] << " ";
                    }
                }
                cout << endl;
            }

        } else if (option == 2) {
            if (front == -1) {
                cout << "Underflow: The queue is empty.\n";
            } else {
                cout << "Dequeued item: " << queue[front] << endl;
                queue[front] = -1; 

                if (front == rear) { 
                    front = rear = -1;
                } else if (front == q - 1) { // If front is at the end, wrap around
                    front = 0;
                } else { 
                    front++;
                }

                
                cout << "Queue after Dequeue: ";
                if (front == -1) {
                    cout << "Queue is empty\n";
                } else if (front <= rear) {
                    for (int i = front; i <= rear; i++) {
                        cout << queue[i] << " ";
                    }
                } else {
                    for (int i = front; i < q; i++) {
                        cout << queue[i] << " ";
                    }
                    for (int i = 0; i <= rear; i++) {
                        cout << queue[i] << " ";
                    }
                }
                cout << endl;
            }

        } else if (option == 3) { 
            if (front == -1) {
                cout << "Queue is empty.\n";
            } else {
                cout << "Queue is not empty.\n";
            }

        } else if (option == 4) { 
            if (front == 0 && rear == q - 1 || rear + 1 == front) {
                cout << "Queue is full.\n";
            } else {
                cout << "Queue is not full.\n";
            }

        } else if (option == 0) { 
            cout << "Exiting program.\n";
            break;
        } else {
            cout << "Invalid input. Please try again.\n";
        }
    }

    return 0;
}