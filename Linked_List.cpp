#include<bits/stdc++.h>
using namespace std;

struct node
{
  int data;
  struct node *next;
};

void insert(node * s, int data)
{
  while(s -> next != NULL)
  {
    s = s -> next;
  }
  s -> next = (node *)malloc(sizeof(node));
  s -> next -> data = data;
  s -> next -> next = NULL;
}


void insertt(node *s, int data, int position) // insert at specification position
{
  int index = 0;
  while(index != position)
  {
    s = s -> next;
    index++;
  }
  node *nwnode = (node*) malloc(sizeof(node));
  nwnode -> data = data;
  nwnode -> next = s -> next;
  s -> next = nwnode;
}

void display(node * s)
{
  while(s -> next != NULL)
  {
    cout << s -> next -> data << "  ";
    s = s -> next;
  }
}

void search(node *s, int data)
{
  int count = 0;
  while(s -> next != NULL)
  {
    if(s -> next -> data == data)
    count++;

    s = s -> next;
  }
  cout << "Desired Element is " << count << " th time" << endl;
}

void deleteNode(node *s, int data)
{
  while(s -> next != NULL)
  {
    if(s -> next -> data == data)
    {
      s -> next =   s -> next -> next;
      return ;
    }
    s = s -> next;
  }
}


int travarsal(node *s)
{
  int num = 0;
  while(s -> next != NULL)
  {
    s = s -> next;
    num++;
  }
  //cout << "Total node : "<< num << endl;
  return num;
}

int main()
{
node * first= (node*)malloc(sizeof(node));
first -> next = NULL;

int n;
cout << "How much element you want to store : " ;
cin >> n;

for(int i = 1; i<= n; i++)
{
  int x; 
  cin >> x;
  insert(first, x);
}

int cc = travarsal(first);
cout << "Total node : " << cc << endl;

insertt(first, 0, cc);

display(first);

return 0;    
}
