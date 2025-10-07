// Q26. The Magical Scrolls (Linear Search Return Index) 
// In the royal library, scrolls are arranged in a 2D cabinet of size n x m. 
// Find the row and column of the scroll with ID = target. If not found, return (-1,-1). 
// ● Input: 
// matrix = [[10,20,30], [40,50,60], [70,80,90]]   
// target = 60 
// ● Output: (1,2) 
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
    int f=-1;
    int s=-1;
    bool pr=false;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
           if(arr[i][j]==t){
            f=i;
            s=j;
            pr=true;
            break;
            
           }
        }
        if(pr){
            break;
        }
    }
    cout<<f<<","<<s;
    return 0;
}