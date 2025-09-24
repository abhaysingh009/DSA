//problem statement different but,  basically in code print fibbonacci series nth term acc to starting index 1 
#include <iostream>
using namespace std;

int ways(int n) {
    
    if (n == 0) return 1;  
    if (n < 0) return 0;   
    
    return ways(n - 1) + ways(n - 2);
}

int main() {
    int n;
    cin >> n;
    cout << ways(n);
    return 0;
}
