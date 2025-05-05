#include <iostream>
using namespace std;

int main() {
    int stack[100], top = -1, option, push, max_size;

    cout << "Enter the size of the stack: ";
    cin >> max_size;

    while(true) {
        cout << "\n\nPlease Select one : \n1 to push\n2 to pop\n3 to check if the stack is Empty\n4 to check if the stack is Full\n0 to exit\n";
        cin >> option;

        if(option == 1) {
           
            if(top == max_size - 1) {
                cout << "Overflow: Stack is full.\n";
            } else {
              
                cout << "Enter value to push: ";
                cin >> push;

               
                stack[++top] = push;

           
                cout << "Stack after push: ";
                for(int i = 0; i <= top; i++) {
                    cout << stack[i] << " ";
                }
                cout << endl;
            }
        }
        else if(option == 2) {
        
            if(top == -1) {
                cout << "Underflow: Stack is empty.\n";
            } else {
               
                cout << "Popped value: " << stack[top--] << endl;

                
                cout << "Stack after pop: ";
                for(int i = 0; i <= top; i++) {
                    cout << stack[i] << " ";
                }
                cout << endl;
            }
        }
        else if(option == 3) {
           
            if(top == -1) {
                cout << "Stack is Empty.\n";
            } else {
                cout << "Stack is not Empty.\n";
            }
        }
        else if(option == 4) {
           
            if(top == max_size - 1) {
                cout << "Stack is Full.\n";
            } else {
                cout << "Stack is not Full.\n";
            }
        }
        else if(option == 0) {
            break;  
        } else {
            cout << "Invalid input.\n";
        }
    }

    return 0;
}