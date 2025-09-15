#include <iostream>
using namespace std;
int main()
{
    int N;
    cout<<"Enter the Size of Matrix:";
    cin >> N;

    int mat[50][50];
    int val = 1;
    // input Matrix

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            mat[i][j] = val++;
        }
    }

    // Resultant Matrix set as 0
    int resMat[30][30];
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            resMat[i][j] = 0;
        }
    }
    // asks pattern
    char pattern;
    cout << "Enter Pattern:";
    cin >> pattern;
    int sum=0;
    switch (pattern)
    {
        case 'D':
         // column prints
    for (int i = 0; i < N; i++)
    {
        resMat[i][N / 2] = mat[i][N / 2];
        sum+=mat[i][N / 2];
    }
    // arc prints
    for (int i = 1; i < N - 1; i++)
    {

        resMat[i][N / 2 + 1] = mat[i][N / 2 + 1];
        sum+=mat[i][N / 2 + 1];
    }
    break;
    case 'X':

        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                if (i == j || (j == N - 1 - i))
                {
                    resMat[i][j] = mat[i][j];
                    sum+=mat[i][j];
                }
            }
        }
        break;

    case 'Z':
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                if (i == 0 || (j == N - 1 - i) || i == N - 1)
                {
                    resMat[i][j] = mat[i][j];
                    sum+=mat[i][j];
                }
            }
        }
        break;
    case 'A':
        //prints legs
    for(int i=1;i<N;i++){

        resMat[i][N/2-1]=mat[i][N/2-1];
        sum+=mat[i][N/2-1];
        resMat[i][N/2+1]=mat[i][N/2+1];
        sum+=mat[i][N/2+1];
        

    }
    //prints middle elem
         resMat[N/2][N/2]=mat[N/2][N/2];
         sum+=mat[N/2][N/2];
 
        //prints top elem
        resMat[0][N/2]=mat[0][N/2];
        sum+=mat[0][N/2];    
    }
    //Print Result;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout << resMat[i][j] << "      ";
        }
        cout << endl;
    }
        cout << endl;
    
    //prints Sum of elements
    cout<<"The Sum of Elements is: "<<sum;

    return 0;
}

