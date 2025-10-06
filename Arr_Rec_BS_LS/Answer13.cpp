// Q14. The Dragon’s Roar 
// Print numbers 1 to n using recursion. 
// ● Input: n=5 
// ● Output: 1 2 3 4 5 
#include<iostream>
using namespace std;
void print(int n){
    if(n==0){
        return ;
    }
    else{
    print(n-1);
    cout<<n<<" ";
    }

}
int main(){
    int n;
    cin>>n;
    print (n);

}