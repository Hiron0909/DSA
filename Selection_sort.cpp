#include<bits/stdc++.h>
using namespace std;

int display(int arr[], int n)
{
  for(int i = 0 ; i < n; i++)
  cout << arr[i] << " ";

  cout << endl;
}

void selection_sort(int arr[],int n)
{
  for(int i = 0; i< n-1; i++)
  {
    for(int j = i+1; j < n; j++)
    {
      if(arr[i] > arr[j])
      swap(arr[i],arr[j]);
    }
  }
}

int main()
{

int n;
cout << "Enter the size : ";
cin >> n;

int arr[n];


for(int i = 0 ; i < n; i++)
cin >> arr[i];

cout << "Original Array : \n";

display(arr,n);


selection_sort(arr, n);
cout << "Sorted Array : \n";
display(arr,n);


return 0;    
}
