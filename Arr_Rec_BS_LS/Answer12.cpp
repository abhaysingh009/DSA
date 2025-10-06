// Q12. The Magical Staircase 
// A child climbs 1 or 2 steps. Find number of ways to reach step n. 
// ● Input: n=4 
// ● Output: 5
//1 1 2 3 5 8
#include<iostream>
using namespace std;
int ways(int n){
if(n==0||n==1){
    return 1;
}
else{
    return ways(n-1)+ways(n-2);
}


}
int main(){
    int n;
    cin>>n;
    cout<<ways(n);
    return 0;

}