#include <iostream>
using namespace std;

int interpolationSearch(int arr[], int n, int x) {
    int left = 0, right = n - 1; // define boundaries

    while (left <= right && x >= arr[left] && x <= arr[right]) { // while loop continues when search range is valid and the targeted value (x) is within bounds
        // based on boundaries using interpolation formula
        int pos = left + ((x - arr[left]) * (right - left) / (arr[right] - arr[left]));

        if (arr[pos] == x) { // if pos index value is equal to target value then
            return pos + 1; // return 1 based index  
        }
        else if (arr[pos] < x) { // if pos index value is smaller then targeted value then
            left = pos + 1; // search in the right half of the arr
        }
        else { // if both condition fails then
            right = pos - 1; //  search in the left half of the arr
        }
    }
    return -1; // return -1 when x is not found
}

int main() {
    int n, x;
    cin >> n ; // number of elements (n) 

    int arr[n]; 
    for (int i = 0; i < n; i++) {
        cin >> arr[i]; 
    }

    cin >> x; // target value (x)

    int result = interpolationSearch(arr, n, x); 

    cout << result << endl; 

    return 0;
}
