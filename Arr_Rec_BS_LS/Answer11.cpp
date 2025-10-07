// Q11. Tower of Temples (Hanoi) 
//  Temples have n golden disks. Move them from source → destination using helper 
// temple. Return moves. 
// ● Input: n=3 
// ● Output: 7
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cin>> n;
    int res=pow(2,n)-1;
    cout<<res;
    
    
    return 0;
}