#include<bits/stdc++.h>
using namespace std;

#define N 5
int que[N];
int front = -1;
int rear = -1;

void enqueue()
{
  int x;
  cout << "Enter element to be enqueue : ";
  cin >> x;
  
  if(rear == N-1)
  cout << "Overflow Condtion" << endl;
  else if(front == -1 && rear == -1)
  {
    front = rear = 0;
    que[rear] = x;
  }
  else
  {
    rear++;
    que[rear] = x;
  }
}


void dequeue()
{
  if(front == -1 && rear == -1)
  cout << "Queue is already empty" << endl;
  else if(rear == front)
  {
    cout << "Deleted element is " << que[front] << endl;
    rear = front = -1;
  }
  else
  {
   cout << "Deleted element is " << que[front] << endl;
   front++;
  }
}

//8 9 7 6
void display()
{
  if(front == -1 && rear == -1)
  cout << "Queue is Empty" << endl;
  else
  {
    for(int i = front; i <= rear; i++)
    cout << que[i] << " ";
  }
}


void peek()
{
  if(front == -1 && rear == -1)
  cout << "Queue is Empty" << endl;
  else
  {
    cout << que[front] << endl;
  }
}


int main()
{

int ch;

while(true)
{

  system("cls");  
  cout << "1. Enquee" << endl;
  cout << "2. Dequee" << endl;
  cout << "3. Peek" << endl;
  cout << "4. Display" << endl;
  cout << "5. Exit" << endl;

  cout << "Enter Your Choise : " ;
  cin >> ch;


  switch(ch)
  {
   case(1):
    enqueue();
    break;
   case(2):
    dequeue();
    break;
   case(3):
    peek();
    break;
   case(4):
    display();
    break;
   case(5):
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
