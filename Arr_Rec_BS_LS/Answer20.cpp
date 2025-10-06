// Q20. The Treasure Chest 
// Find the last occurrence of a key using binary search. 
// ● Input: arr=[1,2,2,2,3], key=2 
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
            if(mid==(n-1)||arr[mid+1]!=t){
                index=mid;
                break;
            }
            else{
                f=mid+1;
            }
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