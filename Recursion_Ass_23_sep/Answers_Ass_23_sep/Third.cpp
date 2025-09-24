// sum of  1 to N natural number using recursion

#include <iostream>

using namespace std;
int fun(int n)
{
    if(n==0){
        return  0;
    }
    
    return n+fun(n-1);
}
int main()
{
    int n;
    cin>>n;
    cout<<fun(n);
}