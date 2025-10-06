// Q4. The Secret Message 
// A spy wrote a secret message as numbers. To decode it, reverse the array. 
// ● Input: arr=[1,2,3,4] 
// ● Output: [4,3,2,1]
#include<iostream>
using namespace std;
void rev(int arr[],int n){
    for(int i=0;i<n/2;i++){
        swap(arr[i],arr[n-1-i]);

    }

}
int main(){
     int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    rev(arr,n);
    for(int e:arr){
        cout<<e<<" ";
    }
    return 0;
}