// Q21.The first index where the element is greater than or equal to the target. 
// ● If element is found → return its first occurrence. 
// ● If not found → return position where it can be inserted. 
// ● If not possible → return n (array size). 
// Example 
// Array = [1, 2, 4, 6, 6, 8], target = 6 
// ● Lower bound = index 3 (first 6). 
// Array = [1, 2, 4, 6, 6, 8], target = 5 
// ● Lower bound = index 3 (as 6 is the first ≥ 5).

#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int t;
    cin >> t;

    int f = 0;
    int l = n - 1;
    int index = n;

    while(f <= l){
        int mid = f + (l - f) / 2;

        if(arr[mid] >= t){
            index = mid;   
            l = mid - 1;   
        }
        else{
            f = mid + 1; 
        }
    }

    cout << index;
    return 0;
}
