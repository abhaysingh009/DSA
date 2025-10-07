// Q23.The smallest element ≥ target (actual value, not index). 
// ● If no such element exists → return -1. 
// Example 
// Array = [1, 2, 4, 6, 6, 8], target = 5 
// ● Ceil = 6. 
// Array = [1, 2, 4, 6, 6, 8], target = 9 
// ● Ceil = -1 (no element ≥ 9).
#include<iostream>
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
    int f=0;
    int l=n-1;
    int index=-1;
    while(f<=l){
        int mid=f+(l-f)/2;
        if(arr[mid]>=t){
            index=arr[mid];
            l=mid-1;
        }
        else{
            f=mid+1;
        }
    }
    cout<<index;
    return 0;
}