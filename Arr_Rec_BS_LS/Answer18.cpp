// Q18. The Secret Door 
// Doors are numbered in increasing order. Find target door using binary search. 
// ● Input: arr=[1,3,5,7,9], key=7 
// ● Output: 3
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
        if(arr[mid]==t){
            index=mid;
            break;

        }
        else if(arr[mid]<t){
            f=mid+1;

        }
        else{
            l=mid-1;
        }
    }
    cout<<index;
    return 0;
}