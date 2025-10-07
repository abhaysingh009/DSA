// Q24. The largest element ≤ target. 
// ● If no such element exists → return -1. 
// Example 
// Array = [1, 2, 4, 6, 6, 8], target = 5 
// ● Floor = 4. 
// Array = [1, 2, 4, 6, 6, 8], target = 0 
// ● Floor = -1 (no element ≤ 0

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
        if(arr[mid]<=t){
            index=arr[mid];
            f=mid+1;
        }
        else{
            l=mid-1;
        }
    }
    cout<<index;
    return 0;
}