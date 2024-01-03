#include <bits/stdc++.h>
using namespace std;
int N;
const int n = 100;
int x[n];
bool Place(int col, int row)
{
    // if(row == N) return false;    ////////////// How Backtracking is Working///////////
    //  int vec[N][N] = {};    // for(int i= 1;i<N;i++){
    //   vec[i][x[i]] = 1;    // }
    //  vec[row][col]=1;    // for(int i=1;i<N;i++){
    //   for(int j=1;j<N;j++){    //      cout << vec[i][j] <<" ";
    //   }    //  cout << endl;
    //  }    //////////////////////////////////////////////////
    for (int i = 1; i < N; i++)
    {
        if (x[i] == 0)
            continue;
        if (x[i] == col || abs(x[i] - col) == abs(i - row))
        { // cout << row <<" " << col <<  endl;
            // cout <<"False" << endl;            return false;
        }
    }
    // cout << "True" << endl;    return true;
}

void NQueens(int row, int N)
{
    for (int i = 1; i < N; i++)
    {
        if (Place(i, row))
        {
            x[row] = i;
            if (row == N - 1)
            {
                cout << "Solution[x] : ";
                for (int i = 1; i < N; i++)
                {
                    cout << x[i] << " | ";
                }
                cout << endl;
            }
            NQueens(row + 1, N);
            x[row] = 0;
        }
    }
}

int main()
{
    cout << "Enter N :";
    cin >> N;
    N++;
    cout << "Index is Column and value is row" << endl;
    NQueens(1, N);
}