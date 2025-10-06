// Q22.The first index where the element is strictly greater than the target. 
// ● If all elements ≤ target → return n. 
// Example 
// Array = [1, 2, 4, 6, 6, 8], target = 6 
// ● Upper bound = index 5 (first element greater than 6 is 8). 
// Array = [1, 2, 4, 6, 6, 8], target = 7 
// ● Upper bound = index 5 (8 is first > 7).
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
    int index=n;
    while(f<=l){
        int mid=f+(l-f)/2;
        if(arr[mid]>t){
            
                index=mid;
                l=mid-1;

            }
    
        else{
            f=mid+1;
        }
        
    }
   cout<<index;
    return 0;
}