#include <iostream>
using namespace std;


int selectionSortSwaps(int arr[], int n) {
    int swaps = 0; //  swaps count initialing define as 0;

    for (int i = 0; i < n - 1; i++) { // loop continue till the last value
        int minIndex = i; // define the minIndex as the smallest element 

        // finding the index of the minimum element in the remaining unsorted part
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        // swap if the minimum element is not already at the correct position
        if (minIndex != i) {
            swap(arr[i], arr[minIndex]);
            swaps++; // incrementing swap counter by addition
        }
    }

    return swaps; // returning swaps for preview
}

int main() {
    int n;
    cin >> n; // number of elements (n) 

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i]; // storing item ids
    }

    int result = selectionSortSwaps(arr, n); 

    cout << result << endl; // Output: Minimum number of swaps required

    return 0;
}
