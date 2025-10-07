// Q10. The Rainwater Pond 
//  Count the number of water ponds in a village (1 = water, 0 = land). 
// Input: 
 
//  3 3 
// 1 0 1 
// 0 1 0 
// 1 0 1 
// ● Output: 5
#include<iostream>
using namespace std;
int main(){
   int m;
    int n;
    cin>>m;
    cin>>n;
    int arr[m][n];
    int count =0;

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
            if(arr[i][j]==1){
                count++;

            }
        }
    }
    cout<<count;
    return 0;
}