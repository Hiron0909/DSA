#include<bits/stdc++.h>
using namespace std;

int main()
{
int n;
cout << "Enter size of the array : ";
cin >> n;

int arr[n] ;

cout << "Enter Elements in the array : ";

for(int i = 0; i< n; i++)
cin >> arr[i];


sort(arr, arr + n);

cout << "Sorted Array : ";
for(int i = 0 ; i< n; i++)
cout << arr[i] << " ";
cout << endl;

int key ;

cout << "Emter Key element : ";
cin >> key;

int left = 0;
int right = n - 1;
int med = (left + right) / 2;

while(left <= right)
{
  if(arr[med] == key)
  {
    cout << "value found in index no " << med + 1;
    return 0;
  }
  else if(key > arr[med])
  {
    left = med + 1;
    med = (left + right) / 2;
  }
  else
  {
    right = med - 1;
    med = (left + right) / 2;
  }
}

cout << "Element not found\n";


return 0;    
}
