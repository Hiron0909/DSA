#include<bits/stdc++.h>
using namespace std;

int N ;
void print(vector<string> &board)
{
  for(int i = 0 ; i < N; i++)
  {
    cout << board[i] << endl;
  }
  cout << endl;
}


bool issafe(vector<string> &board, int row, int col)
{
  // Checking Up Down  
  for(int i = 0 ; i < row; i++)
  {
    if(board[i][col] == 'Q')
    return false;
  }

  //checking left diagonal
  for(int i = row - 1, j = col - 1; i >= 0 && j >= 0; i--, j--)
  {
    if(board[i][j] == 'Q')
    return false;
  }

  // checking right diagonal
  for(int i = row - 1, j = col + 1; i >= 0 and j <= N; i--, j++)
  {
    if(board[i][j] == 'Q')
    return false;
  }
  
  return true;

}


void solve(vector<string> &board, int row)
{
  if(row == N)
  print(board);


  for(int col = 0; col < N; col++)
  {
    if(issafe(board, row, col))
    {
      board[row][col] = 'Q';
      solve(board, row + 1);
      board[row][col] = '.';
    }
  }
}


int main()
{

cout << "Enter the number of Queen : ";
cin >> N;

cout << "Here is the chese board of " << N << "Queen : " << endl;

vector<string> board(N, string(N,'.'));
solve(board, 0);



return 0;    
}
