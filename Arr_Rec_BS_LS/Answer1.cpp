// Q1. The King’s Feast
// The King has n plates of food, each with a certain quantity. He wants to know the
// maximum food plate.
// ● Input: n=5, arr=[2,7,1,9,5]
// ● Output: 9
// ● Constraints: 1 ≤ n ≤ 10^5, -10^9 ≤ arr[i] ≤ 10^9
#include <iostream>

using namespace std;
int main()
{
    int m;
    cin >> m;
    int arr[m];
    for (int i = 0; i < m; i++)
    {
        cin >> arr[i];
    }
    int maximum = arr[0];
    for (int i = 0; i < m; i++)
    {
        if (arr[i] > maximum)
        {
            maximum = arr[i];
        }
    }
    cout << maximum;
    return 0;
}