#include<iostream>
#include <cmath>
#include<vector>
using namespace std;
/* we are creating a class here
this would store the length of number, the allowed numbers in a product window
and the number on which the operation is to occur
then we made a method that would return the max product
(having num[k] - '0' is sneaky trick for making char act like int) */
class query {
    private:
    int num_digit;
    int num_allowed;
    string num;

    public:
    //constructor
    query(int num_digit_i, int num_allowed_i, string num_i) {
        num_digit = num_digit_i;
        num_allowed = num_allowed_i;
        num = num_i;
    }
    // the real methodical juice is here
    int get_prod_max() {
        int max = 0;
        for (int i = 0; i + num_allowed <= num.size(); i++ ) {
            int prod = 1;
            for (int k = i; k < num_allowed + i; k++) {
                prod *= num[k] - '0';
            }
            if(prod > max) {
                max = prod;
            }
        }
        return max;
    }
};


int main(){
    int n;
     cin >> n;
     vector<query> queries; 
     for (int i = 0; i < n; i++) {
        int curr_length;
        int curr_max_allowed;
        string curr_num;
        cin >> curr_length >> curr_max_allowed >> curr_num;
        
        query curr_query(curr_length, curr_max_allowed, curr_num);
        queries.push_back(curr_query);
     }
     for(int i = 0; i < queries.size(); i++) {
        cout << queries[i].get_prod_max() << "\n";
     }
    return 0;
}