// Q7. The Spiral Library 
//  The King built a library where books are kept in spiral shelves. Print them in spiral 
// order. 
// Input: 
 
//  3 3 
// 1 2 3 
// 4 5 6 
// 7 8 9 
// ● Output: [1,2,3,6,9,8,7,4,5]
#include<iostream>
#include<vector>
using namespace std;
int main()
{
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
int fr=0;
int lr=m-1;
int fc=0;
int lc=n-1;
vector<int>res;
while(fr<=lr and fc<=lc){
    //top 
    for(int j=fc;j<=lc;j++){
        res.push_back(arr[fr][j]);

    }
    fr++;

    //right
    for(int i=fr;i<=lr;i++){
        res.push_back(arr[i][lc]);
    }
    lc--;

    //bottom
    if(fr<=lr){
    for(int j=lc;j>=fc;j--){
        res.push_back(arr[lr][j]);
    }
    lr--;
}

    //left
    if(fc<=lc){
    for(int i=lr;i>=fr;i--){
        res.push_back(arr[i][fc]);
    }
    fc++;
}
}
for(int e:res){
    cout<<e<<" ";
}

    return 0;
    
} 
