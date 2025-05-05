#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter queue size: ";
    cin >> size;

    int queue[size];
    int front = -1, rear = -1;
    int option;

    while (true) {
        cout << "\n1. Enqueue\n2. Dequeue\n3. Is Empty?\n4. Is Full?\n0. Exit\n";
        cout << "Choose option: ";
        cin >> option;

        if (option == 1) { 
            if (rear == size - 1) {
                cout << "Queue is full!\n";
            } else {
                int value;
                cout << "Enter value: ";
                cin >> value;
                rear++;
                queue[rear] = value;
                if (front == -1) front = 0;
                
                cout << "Queue: ";
                for (int i = front; i <= rear; i++) {
                    cout << queue[i] << " ";
                }
                cout << endl;
            }
        }
        else if (option == 2) { 
            if (front == -1) {
                cout << "Queue is empty!\n";
            } else {
                cout << "Removed: " << queue[front] << endl;
                front++;
                if (front > rear) {
                    front = -1;
                    rear = -1;
                }
                
                cout << "Queue: ";
                if (front == -1) cout << "Empty";
                else {
                    for (int i = front; i <= rear; i++) {
                        cout << queue[i] << " ";
                    }
                }
                cout << endl;
            }
        }
        else if (option == 3) { 
            if (front == -1) cout << "Yes, queue is empty\n";
            else cout << "No, queue is not empty\n";
        }
        else if (option == 4) { 
            if (rear == size - 1) cout << "Yes, queue is full\n";
            else cout << "No, queue is not full\n";
        }
        else if (option == 0) { 
            cout << "Goodbye!\n";
            break;
        }
        else {
            cout << "Wrong choice, try again\n";
        }
    }
    return 0;
}