// Print  1 to N natural number using recursion
#include <iostream>

using namespace std;
void fun(int n)
{
    if (n == 0)
    {

        return;
    }

    fun(n - 1);
    cout << n << " ";
    return;
}
int main()
{
    int n;
    cin>>n;
    fun(n);
}