#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

vector<bool> sieve(int n) {
    vector <bool> prime_list(n +1, true);
    prime_list[1] = prime_list[0] = false; // as 0 and 1 are not prime
    // now we check which ones are labelled true
    for (int i = 2; i < n+ 1; i++) {
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

vector<int> prime_list(vector<bool> bool_prime) {
    
    // this basically generates the prime list till 10^6
    vector<int> output;
    for (int i = 0; i <  bool_prime.size(); i++) {
    if(bool_prime[i]) {
        output.push_back(i);
    }
    }
    return output;
}

vector<bool> sieved_bool = sieve(2e6);
vector<int> prime_till_lim = prime_list(sieved_bool);

long long sum_till_N(int n) {
    // this extracts the primes less than n, and sums them up
    long long output = 0;
    int i = 0;
    while (prime_till_lim[i] <= n) {
        output += prime_till_lim[i];
        i++;
    }
    return output;
}

int main(){
    int n;
    cin >> n;
    vector<int> inps(n);
    for (int i = 0; i < n; i++) {
        cin >> inps[i];
    }
    for (int i = 0; i < n; i++) {
        cout <<  sum_till_N(inps[i]) << '\n';
    }
}