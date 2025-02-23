#include <iostream>
using namespace std;


int findFirstOccurrence(int arr[], int n, int x) {
   for (int i = 0; i < n; i++) {  // loop for checking every islands
      
       if (arr[i] == x) { // if matches with the targeted island then
           return i + 1; // return index (i + 1)
       }
   }
   return -1; // return -1 if (x) is not found
}


int main() {
   int n, x;
   cin >> n; // number of islands (n)


   int islands[n];
   for (int i = 0; i < n; i++) {
       cin >> islands[i]; //  storing island's (n) numbers (i)
   }


   cin >> x; //  target island number (x)


   int result = findFirstOccurrence(islands, n, x);


   cout << result << endl;


   return 0;
}
