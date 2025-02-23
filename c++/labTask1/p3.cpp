#include <iostream>
using namespace std;


int binarySearch(int arr[], int n, int x) {
    int left = 0, right = n - 1; // define boundaries

    while (left <= right) {
        int mid = left + (right - left) / 2; // storing the middle index into the variable

        if (arr[mid] == x) { // if the target value is same as the mid value then
            return mid + 1; // return mid + 1 (mid value index)
        }
        else if (arr[mid] < x) { // if target value is greater than arr's mid value 
            left = mid + 1; // search in the right half (+ 1)
        }
        else {
            right = mid - 1; // search in the left half (- 1)
        }
    }
    return -1; // return -1 when x is not found
}

int main() {
    int n, x;
    cin >> n; // number of elements (n) 

    int arr[n]; 
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cin >> x; // target value (x)

    int result = binarySearch(arr, n, x); 

    cout << result << endl; 

    return 0;
}
