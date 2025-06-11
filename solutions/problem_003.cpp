#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

// this function calculates the biggest prime factor
long long largest_prime (long long inp) {
    long long prime;
    // setting largest prime factor to 2
    prime =2;
    long long n = floor(sqrt(inp));
    //dividing inp until it is not divisible by 2
    while (inp % 2 == 0) {
        inp /= 2;
    }
    // doing the same for all the odd numbers
    for (long long i = 3; i <= n; i += 2) {
        while(inp % i == 0) {
            prime = i;
            inp /= i;
        }
    }
    if (inp > 2) {prime = inp;}
    return prime;
}

int main() {
    int n;
    cin >> n;
    vector<long long> inps(n);
    for (int i = 0; i < n; i++) {
        cin >> inps[i];
    }
    for (int i = 0; i < n; i++) {
        cout << largest_prime(inps[i]) << '\n';
    }
}