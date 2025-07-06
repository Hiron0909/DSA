#include <bits/stdc++.h>
using namespace std;

#define N 20
int myStack[N];  
int top = -1;

void push()
{
    cout << "Enter Value to push : ";
    int x;
    cin >> x;
    if(top == N - 1)
        cout << "Overflow Condition" << endl;
    else
    {
        top++;
        myStack[top] = x;
        cout << x << " pushed to stack." << endl;
    }
}


void pop()
{
  int item;
  if(top == -1)
  cout << "Underflow Condition";
  else
  {
    item = myStack[top];
    top--;
    cout << "Poped Item is : " << item << endl;
  }  
}


void peek()
{
  if(top == -1)
  cout << "Stack is empty" << endl;
  else
  cout << "Top element is " << myStack[top] << endl;  
}



void display()
{
  cout << "Displayed is called and all the elements are : " << endl;  
  for(int i = top; i >= 0; i--)
  {
    cout << myStack[i] << " ";
  }
}

int main()
{
  int choise;

  while(true)
  {
    system("cls");

    cout << "1. Push()" << endl;
    cout << "2. pop()" << endl;
    cout << "3. peek()" << endl;
    cout << "4. display()" << endl;
    cout << "5. Exit" << endl;

    cout << "Enter you choice : ";
    cin >> choise;

    switch(choise)
    {
     case 1:
     push();
     break;
    case 2:
     pop();
     break;
    case 3:
     peek();
     break;
    case 4:
     display();
     break;
    case 5:
     return 0;
    default:
     cout << "Invalid Choise" << endl; 
    }
    
    cout << "\nPress Enter to continue...";
    cin.ignore();
    cin.get();
    
  }

    return 0;    
}
