// Binary search works at only sorted element

#include <iostream>
#include <algorithm> // For sort()
using namespace std;

int binarySearch(int arr[], int left, int right, int key) {
    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == key)
            return mid;  // Element found

        else if (arr[mid] < key)
            left = mid + 1;  // Search right half
        else
            right = mid - 1; // Search left half
    }
    return -1;  // Element not found
}

int main() {
    int arr[] = {2, 5, 6, 9, 3, 1, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 6;

    sort(arr, arr + n); // Binary search requires sorted array

    int result = binarySearch(arr, 0, n - 1, key);

    if (result != -1)
        cout << "Element found at index: " << result << endl;
    else
        cout << "Element not found" << endl;

    return 0;
}
