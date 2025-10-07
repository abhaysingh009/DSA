// Q28. The Queen’s Jewels (Binary Search First Occurrence) 
// The Queen’s jewels are stored in a 2D sorted grid. She wants to find the first position of 
// a jewel type x. 
// ● Input: 
// matrix = [[1,2,2], [3,4,4], [5,6,7]]   
// target = 4 
// ● Output: (1,1) 
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
    int f=0;
    int l=m*n-1;
    int rI=-1;
    int cI=-1;
 
    while(f<=l){
        int mid=f+(l-f)/2;
        int r=mid/n;
        int c=mid%n;
        if(arr[r][c]==t){
            rI=r;
            cI=c;
         
            l=mid-1;

        }
        else if(arr[r][c]<t){
            f=mid+1;

        }
        else if(arr[r][c]>t){
            l=mid-1;
        }
    }
    cout<<rI<<","<<cI;
    

return 0;
}