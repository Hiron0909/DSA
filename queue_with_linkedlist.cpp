#include<bits/stdc++.h>
using namespace std;

struct node
{
  int data;
  struct node *next;
};

void enqueue(node *s)
{
  int x;
  cout << "Enter value to be enqueued : ";
  cin >> x;

  while(s -> next != NULL)
  {
    s = s -> next;
  }
  s -> next = (node *)malloc(sizeof(node));
  s -> next -> data = x;
  s -> next -> next = NULL;

}

void dequeue(node *s)
{
  if(s -> next == NULL )
  cout << "Already Queue is Empty" << endl;
  else
  {
    s -> next = s -> next -> next;
  }
}


void display(node *s)
{
  if(s -> next == NULL)
  {
    cout << "Already Empty" << endl;
    return ;
  }
  
 while(s -> next != NULL)
 {
   cout << s -> next -> data << " ";
   s = s-> next;
 } 
}

void peek(node *s)
{
  if(s -> next == NULL)
  cout << "Already Empty" << endl;
  else
  cout << "Top element is " << s -> next -> data << endl;
  
}


int main()
{

node *first = (node *)malloc(sizeof(node));
first -> next = NULL;

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
    enqueue(first);
    break;
   case(2):
    dequeue(first);
    break;
   case(3):
    peek(first);
    break;
   case(4):
    display(first);
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
