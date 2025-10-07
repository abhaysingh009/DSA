// Q30. The Magic Portal (Binary Search 2D) 
// A wizard created portals in a 2D grid sorted in ascending order row-wise and 
// column-wise. To activate a portal, he must find a specific number x. 
// Return "Activated" if found else "Failed". 
// ● Input: 
// matrix = [[1, 2, 8], [3, 6, 10], [7, 9, 12]]   
// target = 9 
// ● Output: Activated 
// ● Constraints: 1 ≤ n,m ≤ 500
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
   cout<< (pr?"Activated":"Failed");
    return 0;
}