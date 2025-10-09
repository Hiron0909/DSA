#include <iostream>
using namespace std;

int n, target;
int arr[20], subset[20];

void subsetSum(int index, int currentSum, int subIndex) {
    // If current sum equals target, print subset
    if (currentSum == target) {
        cout << "Subset found: ";
        for (int i = 0; i < subIndex; i++)
            cout << subset[i] << " ";
        cout << endl;
        return;
    }

    // If we reached end or sum exceeds target
    if (index == n || currentSum > target)
    return;


    // Include current element
    subset[subIndex] = arr[index];
    subsetSum(index + 1, currentSum + arr[index], subIndex + 1);

    // Exclude current element
    subsetSum(index + 1, currentSum, subIndex);
}

int main() {
    cout << "Enter number of elements: ";
    cin >> n;
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << "Enter target sum: ";
    cin >> target;

    subsetSum(0, 0, 0);
    return 0;
}
