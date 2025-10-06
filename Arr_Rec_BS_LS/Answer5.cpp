// Q5. The King’s Parade 
// Soldiers stand in line. Check if their heights are sorted in non-decreasing order. 
// ● Input: arr=[1,3,5,7] → Output: true 
// ● Input: arr=[3,2,1] → Output: false
#include<iostream>
using namespace std;
bool sorted(int arr[],int n){
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<sorted(arr,n);
    return 0;

}