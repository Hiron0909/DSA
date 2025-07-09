#include<bits/stdc++.h>
using namespace std;

struct node
{
   int coeff;
   int po_x;
   int po_y;
   struct node *next;
};


void insert(node *first)
{
  int c, x, y;
  cout << "Enter coeff, Pow_of_x, Pow_of_y : ";
  cin >> c >> x >> y;

  while(first -> next != NULL)
  first = first -> next;

  struct node *newnode = (node *)malloc(sizeof(node));
  newnode -> coeff = c;
  newnode -> po_x = x;
  newnode -> po_y = y;
  newnode -> next = NULL;

  first -> next= newnode;
}


void display(node *first)
{
  while(first -> next != NULL)
  {
    cout << first -> next -> coeff <<"x^" << first -> next -> po_x << "y^" << first -> next -> po_y;
    if(first -> next -> next != NULL)
    cout << " + " ;
    first = first -> next;
    
  }
}

void peek(node *first)
{
  cout << "Top element is : " << first -> next -> coeff <<"x^" << first -> next -> po_x << "y^" << first -> next -> po_y << endl;
}



void delete_node(node *first)
{
  //It will delete first element
  first -> next = first -> next -> next;
}

int main()
{

struct node *first = (node*)malloc(sizeof(node));
first -> next = NULL;

int ch;

while(true)
{

  system("cls");  
  cout << "1. Insert" << endl;
  cout << "2. Delete" << endl;
  cout << "3. Peek" << endl;
  cout << "4. Display" << endl;
  cout << "5. Exit" << endl;

  cout << "Enter Your Choise : " ;
  cin >> ch;


  switch(ch)
  {
   case(1):
    insert(first);
    break;
   case(2):
    delete_node(first);
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
