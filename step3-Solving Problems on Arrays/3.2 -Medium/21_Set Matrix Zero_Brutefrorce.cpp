/*
  Problem Statement: Given a matrix if an element in the matrix is 0 then you will have to set its entire column and row to 0 and then return the matrix.
  Examples 1:

Input: matrix=[[1,1,1],[1,0,1],[1,1,1]]

Output: [[1,0,1],[0,0,0],[1,0,1]]

Explanation: Since matrix[2][2]=0.Therfore the 2nd column and 2nd row wil be set to 0.
 
Input: matrix=[[0,1,2,0],[3,4,5,2],[1,3,1,5]]

Output:[[0,0,0,0],[0,4,5,0],[0,3,1,0]]

Explanation:Since matrix[0][0]=0 and matrix[0][3]=0. Therefore 1st row, 1st column and 4th column will be set to 0
*/


#include<bits/stdc++.h>
using namespace std;

void mark_row(int i, int matrix[][100], int n, int m)
{
    for(int j=0; j<m; j++)
    {
        if(matrix[i][j] != 0)
        {
            matrix[i][j] = -1;
        }
    }
}

void mark_col(int j, int matrix[][100], int n, int m)
{
    for(int i=0; i<n; i++)
    {
        if(matrix[i][j] != 0)
        {
            matrix[i][j] = -1;
        }
    }
}

void sr_sol(int matrix[][100], int n, int m)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(matrix[i][j] == 0)
            {
                mark_row(i, matrix, n, m);
                mark_col(j, matrix, n, m);
            }
        }
    }

    // finally set -1 as 0
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(matrix[i][j] == -1)
            {
                matrix[i][j] = 0;
            }
        }
    }

    // print the matrix:
    cout<<  "The given matrix is : "<<endl;
    
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int n, m;
    cin >> n >> m;

    int matrix[100][100];  // assuming a maximum size for the matrix

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin >> matrix[i][j];
        }
    }

    sr_sol(matrix, n, m);

    return 0;
}
