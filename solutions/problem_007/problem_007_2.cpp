#include <vector>
#include <iostream>
#include<cmath>
using namespace std;

int MAX = 2e5;

vector<bool> sieve(int n) {
    vector <bool> prime_list(n +1, true);
    prime_list[1] = prime_list[0] = false; // as 0 and 1 are not prime
    // now we check which ones are labelled true
    for (int i = 2; i <= n+ 1; i++) {
        if(prime_list[i]) {
            /**
             if one of the entries is labelled true, 
             then we label each one of its multiples false (except the original one)
             this way, math handles the primality itself
             **/
            for (int j = 2; j*i < n+1; j++) {
                prime_list[i*j] = false;
            }
        }
    }
    return prime_list;
}

int main() {
    int n;
    cin >> n;
    vector<int> test_ints;
    for (int i = 0; i < n; i++) {
        int j;
        cin >> j;
        test_ints.push_back(j);
    }
    vector<bool> prime_lim = sieve(MAX);
    // after marking out the primes till max as true
    // we take the serial no. of entry which is true, and the vector now contains primes
    vector<long long> primes;
    for (int i = 0; i < prime_lim.size(); i++) {
        if(prime_lim[i]) {
            primes.push_back(i);
        }
    }
    for (int i = 0; i < n; i++) {
        cout << primes[test_ints[i] - 1] << '\n';
    }
    return 0;
}
