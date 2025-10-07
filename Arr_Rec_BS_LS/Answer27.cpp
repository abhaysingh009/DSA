// Q27. The Battle Formation (Binary Search - Flattened) 
// Soldiers stand in a grid formation. Their strengths are sorted row-wise and the first 
// element of each row is greater than the last of the previous row. 
// The commander wants to know if a soldier with strength x exists. 
// ● Input: 
// matrix = [[1,3,5], [7,10,11], [16,20,30]]   
// target = 10 
// ● Output: True 
// ● Constraints: 1 ≤ n,m ≤ 300 
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
    int f=0;
    int l=m*n-1;
    bool pr=false;
    while(f<=l){
        int mid=f+(l-f)/2;
        int r=mid/n;
        int c=mid%n;
        if(arr[r][c]==t){
            pr=true;
            break;

        }
        else if(arr[r][c]<t){
            f=mid+1;

        }
        else{
            l=mid-1;
        }
    }
    if(pr){
        cout<<"True";
    }
    else{
        cout<<"False";

    }

return 0;
}