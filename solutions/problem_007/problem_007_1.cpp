#include <vector>
#include <iostream>
#include<cmath>
using namespace std;

int MAX = 1e5;


bool is_prime (long long n) {
    long long sq = floor(sqrt(n));
    bool output = true;
    if (n % 2 == 0 && n != 2) {
        output = false;
    }
    else {
        for(long long i = 3; i <= sq; i += 2) {
            if (n % i == 0) {
                output = false;
                break;
            }
        }
    }
    return output;   
}

vector<long long> prime(int n) {
    vector<long long> primes;
    long long curr_prime = 2;
    while((int)primes.size() <= n) {
        if (is_prime(curr_prime)) {
            primes.push_back(curr_prime);
        }
        curr_prime++;
    }
    return primes;
}
int main(){
    int n;
    cin >> n;
    vector<long long> inps(n);
    for (int i = 0; i < n; i++) {
        cin >> inps[i];
    }
    vector<long long> out = prime(MAX);
    for (int i = 0; i < n; i++) {
       cout << out[inps[i] - 1] << '\n';
    }
}