#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int div_num(long long n) {
    int output = 0;
    int lim = floor(sqrt(n));
    for (int i = 1; i <= lim; i++) {
        if(n%i == 0) {
            output++;
            if(i != n/i) {
                output++;
            }
        }
    }
    return output;
}

long long least_triangular_number(int n) {
    int i = 1;
    while(div_num(i*(i+1)/2)  <= n) {
        i++;
    }
    return i*(i+1)/2;
}


int main() {
     int n;
     cin >> n;
     vector<int> inps(n);
     for (int i = 0; i < n; i++) {
        cin >> inps[i];
     }
     for (int i = 0; i < n; i++) {
        cout << least_triangular_number(inps[i]) << '\n';
     }
     return 0;
}