#include <iostream>
using namespace std;

int BinarySearch(int arr[], int n, int key ) {
    int loc = 0, beg = 0, end = n - 1;
    int mid;
    while ( beg <= end ) {
        mid = (beg + end) / 2;
        
        if(key < arr[mid]) {
            
            end = mid - 1;
            
        } else if (key > arr[mid]) {
            beg = mid + 1;
        } else {
            loc = mid + 1;
            cout << "found at position " << loc << endl;
            
            return loc;
        }
    }
    
    cout << "Item is not in the line" << endl;
    
    return 0;
    
}

int main() {

   int n,key;
   
   cout << "Enter the array value: " << endl; // Must be sorted
   cin >> n;
   
   int arr[n];
   
   for(int i = 0; i<n; i++) {
       cin >> arr[i];
   }
   

  cout << "Enter the key value : " << endl;
  
  cin >> key;
  
  BinarySearch(arr,n,key);


    return 0;
}