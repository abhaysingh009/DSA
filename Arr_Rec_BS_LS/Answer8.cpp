// Q8. The Royal Diagonal 
//  In a royal hall represented as a square, find sum of both diagonals. 
// Input: 
 
//  3 3 
// 1 2 3 
// 4 5 6 
// 7 8 9 
// ● Output: 1+5+9 =15, 3+5+7 = 15
#include<iostream>
using namespace std;
int main(){
    
    int m;
   
    cin>>m;

    int arr[m][m];
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];


        }
}
int sumMain=0;
int sumSec=0;
for(int i=0;i<m;i++){
    sumMain+=arr[i][i];
    sumSec+=arr[i][m-1-i];

}
cout<<sumMain<<" "<<sumSec;
    return 0;
}