// Print  1 to N natural number in reverse order using recursion
#include <iostream>

using namespace std;
void fun(int n)
{
    if (n == 0)
    {

        return;
    }

    cout << n << " ";
    fun(n - 1);
    return;
}
int main()
{
    int n;
    cin >> n;
    fun(n);
}