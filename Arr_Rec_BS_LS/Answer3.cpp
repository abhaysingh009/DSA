// 3. Potion Mixing (Two Sum)
// A wizard wants to mix two potions whose strengths add up to target.
// ● Input: n=4, arr=[3,2,4,7], target=6
// ● Output: Indices (1,2)
// ● Constraints: 1 ≤ n ≤ 10^5, -10^9 ≤ arr[i] ≤ 10^9
#include <iostream>
#include <vector>
using namespace std;

vector<int> tSum(int arr[], int n, int t)
{
    vector<int> res = {-1, -1};
    for (int i = 0; i < n - 1; i++)
    {

        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] + arr[i] == t)
            {
                res[0] = i;
                res[1] = j;
                return res;
            }
        }
    }
    return res;
}

int main()
{
    int m;
    cin >> m;
    int arr[m];
    for (int i = 0; i < m; i++)
    {
        cin >> arr[i];
    }
    int t;
    cin >> t;
    vector<int> res = tSum(arr, m, t);
    for(int e:res){
        cout<<e<<" ";
    }

    return 0;
}