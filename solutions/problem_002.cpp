#include <iostream>
#include <vector>
#include <cmath>

using namespace std;
// this function sums even numbers occuring in fiboacci sequence
long long sum_eve_fibonacci (long long limit) {
    long long output = 0;
    long long current = 2, next = 8;
    while (current < limit) {
        output += current; 
        long long temp = next;
        next = 4*next + current;
        current = temp;
    }
    return output;
}

int main(){
    // Disable synchronization between C++ streams and C streams for faster input/output.
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // takes in the number of test cases
    int n;
    cin>> n;
    vector<long long> test_ints(n);
    for (int i = 0; i < n; i++) {
        cin >> test_ints[i];
    }
    
    for (long long& inp : test_ints) {
        cout << sum_eve_fibonacci(inp) << "\n";
    }
    return 0;
}