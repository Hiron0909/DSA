#include<bits/stdc++.h>
using namespace std;

struct node
{
  int data;
  struct node *next;
};

struct node *front = 0;
struct node *rear = 0;

void enque()
{
  int x;
  cout << "Enter value to be enqued : ";
  cin >> x;  
  struct node *newnode = (node*)malloc(sizeof(node));
  newnode -> data = x;
  newnode -> next = 0;

  if(front == 0 && rear == 0)
  {
    rear = front = newnode;
    rear -> next = front;
  }
  else
  {
    rear -> next = newnode;
    rear = newnode;
    rear -> next = front;

  }

}


void dequee()
{
  struct node *temp;
  temp = front;

  if(front == 0 && rear == 0)
  cout << "Queue is Empty" << endl;
  else if(front == rear)
  {
    front = rear = 0;
    free(temp);
  }
  else
  {
    front = front -> next;
    rear -> next = front;
    free(temp);
  }
}

void peek()
{
  if(front == 0 && rear == 0)
  cout << "Queue is already empty" << endl;
  else
  {
    cout << "Top element is " << front -> data << endl;
  }
}


void display()
{
  if(front == 0 && rear == 0)
  cout << "Queue is already empty" << endl;
  else
  {
    struct node * temp;
    temp = front;
    while(temp -> next != front)
    {
      cout << temp -> data << " ";
      temp = temp -> next;
    }
    cout << temp -> data;
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
    enque();
    break;
   case(2):
    dequee();
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
