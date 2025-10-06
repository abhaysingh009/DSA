// Q16. The Ancient Scroll 
// Search for a scroll ID in the archive. 
// ● Input: arr=[2,5,7,8], key=7 
// ● Output: 2
#include<iostream>
int findt(int arr[],int f,int l,int t){
    if(f>l){
        return -1;
    }
    if(arr[f]==t){
        return f;
    }
    else{
        return findt(arr,f+1,l,t);
    }
}
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int t;
    cin>>t;
    cout<<findt(arr,0,n-1,t);
    return 0;
}