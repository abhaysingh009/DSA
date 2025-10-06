// Q17. The Farmer’s Basket 
// Find if a fruit (number) exists in the basket. 
// ● Input: arr=[10,20,30], key=25 
// ● Output: -1
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
    int index=-1;
    for(int i=0;i<n;i++){
        if(arr[i]==t){
            index=i;
            break;

        }
    }
    cout<<index;
    return 0;
}