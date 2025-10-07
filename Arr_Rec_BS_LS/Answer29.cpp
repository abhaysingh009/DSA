// Q29. The Hidden Scrolls (Staircase Search) 
// The King hides scrolls in a 2D matrix where rows and columns are sorted. 
// Find if a scroll with ID x exists. Use O(n+m) method (start from top-right corner). 
// ● Input: 
// matrix = [[1,4,7,11], [2,5,8,12], [3,6,9,16], [10,13,14,17]]   
// target = 6 
// ● Output: True 
// ● Constraints: 1 ≤ n,m ≤ 1000
#include<iostream>
using namespace std;
int main(){
    int m;
    int n;
    cin>>m;
    cin>>n;
    int arr[m][n];

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    int t;
    cin>>t;
    int ro=0;
    int col=n-1;
    bool pr=false;
    while(ro<m and col>=0){
        if(arr[ro][col]==t){
            pr=true;
            break;

        }
        else if(arr[ro][col]>t){
            col--;
        }
        else{
            ro++;
        }

    }
   cout<< (pr?"True":"false");
    return 0;
}