#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

long long Sumup(int& limit, int d) {
    int n = floor((limit- 1)/d);
    return 1LL * n * (2*d + (n-1)*d)/2 ;
}

int main(){
    int n;
    cin >> n;
    vector<int> test_ints;
    for (int i = 0; i < n; i++) {
        int j;
        cin >> j;
        test_ints.push_back(j);
    }
    
    for (int& test : test_ints) {
        cout << Sumup(test, 5) + Sumup(test, 3) - Sumup(test, 15)  << "\n";
    }
    return 0;
}