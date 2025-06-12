#include <vector>
#include <iostream>

using namespace std;

long long sum_dif (long long inp) {
    long long sum_sq;
    long long sq_sum;
    sq_sum = inp*(inp + 1)*(2*inp + 1)/6;
    sum_sq = (inp*(inp + 1)/2)*(inp*(inp + 1)/2);
    return sum_sq - sq_sum;
}

int main(){
    int n;
    cin >> n;
    vector<long long> inps(n);
    for (int i = 0; i < n; i++) {
        cin >> inps[i];
    }
    for (int i = 0; i < n; i++) {
       cout << sum_dif(inps[i]) << '\n';
    }
    return 0;
}