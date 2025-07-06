#include<bits/stdc++.h>
using namespace std;

struct node
{
  int data;
  struct node * next;  
};

void push(node *s)
{
  int data;
  cout << "Enter element to be pushed : ";
  cin >> data;
  node *nwnode = (node*) malloc(sizeof(node));
  nwnode -> data = data;
  nwnode -> next = s -> next;
  s -> next = nwnode;
}

void pop(node * s)
{
  if(s -> next == NULL)
  cout << "Underflow Condition" << endl;
  else  
  s -> next = s -> next -> next;
}


void peek(node * s)
{
  if(s -> next == NULL)
  cout << "Stack is Empty" << endl;
  else
  cout << "Top Element is : " << s -> next -> data << endl;
}


void display(node *s)
{
  if(s -> next == NULL)
  cout << "Stack is Empty" << endl;
  else
  {
    s = s->next; // Skip dummy node
    while(s != NULL)
    {
     cout << s->data << endl;
     s = s->next;
    }
  }  
  
}



int main()
{
node * first= (node*)malloc(sizeof(node));
first -> next = NULL;


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
     push(first);
     break;
    case 2:
     pop(first);
     break;
    case 3:
     peek(first);
     break;
    case 4:
     display(first);
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
