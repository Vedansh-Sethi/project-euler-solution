#include <cmath>
#include <vector>
#include <iostream>

using namespace std;

int gcd(int a, int b) {
    // this is for setting up initial values in ascending order
    int max, min;
    if (a >= b) {
        max = a;
        min = b;
    }
    else {
        max = b;
        min  = a;
    }
    // this is basically euler's algorithm for finding gcd
    while (max % min != 0) {
        int temp = min;
        min = max% min;
        max = temp;
    }
    
    return min;
}
// we use the property that gcd(a, b)*lcm(a,b) = a*b in the function all_div 

int all_div(int num) {
    int output = 1;
    for (int i = 1; i <= num; i++) {
        output *= i/gcd(output, i);
    }
    return output;
}

int main() {
    int n;
    cin >> n;
    vector<int> inps(n);
    for (int i = 0; i < n; i++) {
        cin >> inps[i];
    }
    for (int i = 0; i < n; i++) {
        cout << all_div(inps[i]) << '\n';
    }    
}
