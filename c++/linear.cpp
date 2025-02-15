#include <iostream>  // Include input-output library
using namespace std;

int main() {
    int n, key, loc = -1;  // 'n' for size, 'key' for search value, 'loc' stores found index

    cout << "Enter the number of elements: ";
    cin >> n;  // Take array size input

    int arr[n];  // Declare an array of size 'n'

    // Taking array input from the user
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];  // Store elements in the array
    }

    cout << "Enter the value to search: ";
    cin >> key;  // Take the key to search

    // Linear Search Algorithm
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {  // Check if current element matches the key
            loc = i + 1;  // Store position (1-based index)
            break;  // Stop searching after finding the key
        }
    }

    // Output the result
    if (loc != -1) {
        cout << "Item found at position: " << loc << endl;
    } else {
        cout << "Item is not in the list" << endl;
    }

    return 0;  // Indicate successful program execution
}
