// reverse string using recursion  
#include <iostream>

using namespace std;
void fun(string &s,int first,int last)
{
    if(first>=last){
        return;
    }
    else{
        swap(s[first],s[last]);
        fun(s,++first,--last);
    
    }
   
}
int main()
{
    string s;
    cin>>s;
    fun(s,0,s.length()-1);
    cout<<s;
}