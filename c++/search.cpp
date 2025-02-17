#include <iostream>
using namespace std;


int main() {

    int n;
    
    cin >> n;
  
    int arr[n];
   
     
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int target;

    cin >> target;

    int low = 0;
    int high = n-1;
    int mid = low + (target - arr[low] ) / (arr[high] - arr[low]) * (high-low);

   cout << mid;

    return 0;
}