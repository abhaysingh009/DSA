// Q6. The Treasure Island 
//  Each island grid has gold. Find the island row with maximum gold. 
// Input: 
 
//  3 3 
// 1 2 3 
// 4 5 6 
// 7 8 9 
// ● Output: Row 2 (sum=24)
#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
    int m;
    int n;
    cin>>m;
    cin>>n;
    vector<vector<int>> arr(m,vector<int>(n));
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){

            cin>>arr[i][j];
        }
    }
    int maxi=INT_MIN;
    int row=-1;
   for(int i=0;i<m;i++){
        int sum=0;
        for(int j=0;j<n;j++){
            sum+=arr[i][j];

        }
        if(sum>maxi){
            maxi=sum;
            row=i;
        }
      
    }
    cout<<"Row "<<row<<" sum :"<<maxi;
    return 0;

}