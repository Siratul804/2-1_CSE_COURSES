#include <iostream>
using namespace std;


int main() {
    int n;

    cin >> n;

    int arr[n];


    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }


   if( n % 2 == 0 ) {

     for (int i = 0; i < n - 1; i++) {
        int minIndex = i;

     for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
     }

    } else {

    for(int i =1; i<n ; i++) {
        int current = i;
    }

    }

     for (int i = 0; i < n; i++) {
        cout << arr[i];
    }


    return 0;
}