#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
using namespace std;

// this  function gives the number of divisors of n
int div_num(long long n) {
    int output = 0;
    for (int i = 1; i <= sqrt(n); i++) {
        if(n%i == 0) {
            output++;
            if(i != n/i) {
                output++;
            }
        }
    }
    return output;
}

// this function gives the least triangular number
// which has number of divisors = the argument
long long least_triangular_number(int n) {
    int i = 1;
    int num = 1;
    while(num <= n) {
        // this countsd the total number of divisors
        // ffor a triangular number using the fact that 
        // two consecutive numbers are always co-prime
    if (i % 2 == 0) {
        num = div_num(i/2)* div_num(i+1);
     }
    else {
        num = div_num((i+1)/2)* div_num(i);
     }
     if (num > n) {
        break;
     }
     else {
        i++;
        num = 1;
     }
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
