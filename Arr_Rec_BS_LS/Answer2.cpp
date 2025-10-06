// Q2. The Lost Soldier
// In the battlefield, soldiers are numbered 0…n. One soldier is missing. Find him.
// ● Input: n=5, arr=[0,1,2,4,5]
// ● Output: 3
// ● Constraints: O(n) or O(log n) solution required.
#include <iostream>

using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
  
    int f = 0;
    int l = n - 1;
    int element=n;
    //  n=5, arr=[0,1,2,3,4]
                //0,1,2,3,4
    while (f <= l)
    {
        int mid = f + (l - f) / 2;
        if(arr[mid]!=mid){
            element=mid;
            l=mid-1;
        }
        else{
            f=mid+1;
        }

        
        
    }
    cout<<element;

    return 0;
}