#include <iostream>
#include <algorithm> 
using namespace std;

int binarySearch(int arr[], int left, int right, int key) {
    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == key)
            return mid;
        else if (arr[mid] < key)
            left = mid + 1;  
            right = mid - 1; 
    }
    return -1; 
}

int main() {
    int n;
  cout << "Enter the size of the arary: ";
  cin >> n;
  int arr[n];
  cout << "Enter elements in array : ";

  for(int i = 0; i<n; i++)
  {
    cin >> arr[i];
  }
   
  int key;
  cout << "Enter the key element which you want to find : ";
  cin >> key;
    sort(arr, arr + n);

    int result = binarySearch(arr, 0, n - 1, key);

    if (result != -1)
        cout << "Element found at index: " << result << endl;
    else
        cout << "Element not found" << endl;

    return 0;
}
