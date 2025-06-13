#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
// this function finds the pythagorean triplets (numbers of which sum to N)
// then it calcualtes the product of those numbers is greatear than the current max product
int prod(int n) {
    int max_prod = -1;
    int a, b, c;
    // the limit m*m < n is just a smart way to avoid excess cycles to some extent.
    for (int m = 2; m*m < n; m++) {
        for (int k = 1; k < m; k++) {
            int prod = 1;
            a = m*m - k*k;
            b = 2*m*k;
            c = m*m + k*k;
            if(n % (a+b+c) == 0) {
                int j = n / (a+b+c);
                prod = pow(j, 3) * a* b*c;
                if(prod > max_prod) {
                    max_prod = prod;
                }
            } 
            }
        }
    return max_prod;
}
int main(){
    // this is just for fastening the program
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> inps(n);
    for ( int i = 0; i < n; i++) {
        cin >> inps[i];
    }
    for (int i = 0; i < n; i++) {
        cout << prod(inps[i]) << "\n";
    }
    return 0;
}