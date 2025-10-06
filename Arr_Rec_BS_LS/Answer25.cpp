// Q25. The Treasure Map (Linear Search) 
// A treasure map is represented as a grid n x m. Each cell contains a number. 
// The King wants to know if the treasure (target) exists on the map. 
// ● Input: 
// n=3, m=3   
// matrix = [[1,2,3], [4,5,6], [7,8,9]]   
// target = 5
// Output: Yes 
// ● Constraints: 1 ≤ n,m ≤ 500, -10^6 ≤ matrix[i][j] ≤ 10^6
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
    bool pr=false;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
           if(arr[i][j]==t){
            pr=true;
            break;
            
           }
        }
        if(pr){
            break;
        }
    }
    if(pr){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
    return 0;
}