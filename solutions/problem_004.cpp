#include <cmath>
#include <string>
#include <vector>
#include <iostream>

using namespace std;

// this function checks if a given number is palindrome or not
bool is_palindrome(long long num) {
    string num_i = to_string(num);
    for (int i = 0; i < num_i.size(); i++) {
        if(num_i[i] != num_i[num_i.size()- i - 1]) {
            return false;
        }
    }
    return true;
}

// in this function you give in a number and it gives the largest palindrome less than the limit
long long max_pal(long long limit) {
    // this is a dummy initialisation
    long long max = 101101;
    // we run loops in it for all multiples of 11 between 100 and 1000
    for(int i = 990; i >= 100; i -= 11) {
        // multiplying each one of the multiples of 11 with 3 digit numbers
        for(int j = 999; j >= 100; j--) {
            /** now we set max = i*j if i*j is palindrome, less than limit, and greater than the current max,
            then we break the inner loop for efficiency **/
            if(is_palindrome(i*j) && i*j < limit && i*j > max) {
                max = i*j;
                break;
            }
        }
    }
    return max;
}
int main(){
    int n;
    cin >> n;
    vector<long long> inps(n);
    for(int i = 0; i < n; i++) {
        cin >> inps[i];
    }
    for(int i = 0; i < n; i++) {
        cout << max_pal(inps[i]) << '\n';
    }
}
