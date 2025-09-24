//find nth term of fibbonacci series
#include<iostream>
using namespace std;
int  fibb(int n){
    if(n==0||n==1){
        return n;
    }
    else{
        return fibb(n-1)+fibb(n-2);
    }
}
int main(){
    int n;
    cin>>n;
    cout<<fibb(n);

}