
// Q13. The Sorcerer’s Spell 
// Reverse a string using recursion. 
// ● Input: abc 
// ● Output: cba
#include<iostream>
using namespace std;
void rev(string &s,int start,int n){
    if(start>=n){
        return;
    }
    else{
        swap(s[start],s[n]);
        return rev(s,start+1,n-1);

    }

}
int main(){
    string s;
    cin>>s;
    int n=s.length()-1;
    rev(s,0,n);
    cout<<s;
    return 0;
}