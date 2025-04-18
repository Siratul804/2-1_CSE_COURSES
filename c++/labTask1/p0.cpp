#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key)
            return i;
    }
    return -1;
}

int binarySearch(int arr[], int size, int key) {
    int low = 0, high = size - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == key)
            return mid;
        else if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

int main() {
    int n;
    cout << "array size : ";
    cin >> n;

    int arr[n];
    cout << "enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int mid = n / 2;
    int key1, key2;

    cout << "enter key to search first half (linier): ";
    cin >> key1;
    cout << "enter key to search second half (binary): ";
    cin >> key2;

    int ans1 = linearSearch(arr, mid, key1);
    int ans2 = binarySearch(arr + mid, n - mid, key2);

    if (ans1 == -1)
        cout << "key " << key1 << " not in the first half.\n";
    else
        cout << "key " << key1 << " found at index " << ans1 << " (first half) \n";

    if (ans2 == -1)
        cout << "key " << key2 << " not in the second half.\n";
    else
        cout << "key " << key2 << " found at index " << (ans2 + mid) << " (second half)\n";

    return 0;
}
