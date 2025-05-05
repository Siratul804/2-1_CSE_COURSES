#include <iostream>
using namespace std;

int main() {
    int key, loc = -1; 
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Array: {10, 20, 30, 40, 50}" << endl;
    cout << "Enter the value to search: ";
    cin >> key;  

    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {  
            loc = i; 
            break; 
        }
    }

    if (loc != -1) {
        cout << "Item found at index: " << loc << endl;
    } else {
        cout << "Item is not in the list." << endl;
    }

    return 0; 
}
