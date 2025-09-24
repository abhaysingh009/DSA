//sum of array using recursion
#include <iostream>
using namespace std;
int fun(int arr[], int first, int last)
{
    if (first > last)
    {
        return 0;
    }
    else
    {
        return fun(arr, first + 1, last) + arr[first];
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout<<fun(arr, 0, n - 1);
}