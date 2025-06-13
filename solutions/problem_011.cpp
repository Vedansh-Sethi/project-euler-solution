#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

class grid {
    private :
    vector<vector<int>> num_grid;  
    public :
    //constructor 
    grid (vector<vector<int>> num_grid_i) {
        num_grid = num_grid_i;
    }
    // this function is for navigating in the grid
    // (i , j) -> coordinates of current element
    // (k,l) -> spaces to move
    // negative k and l mean left and up respectively
    
    int move(int i, int j, int k, int l) {
        if (j + l < 1 || j + l > 20|| i + k < 1|| i + k > 20) {
            return 0;
        }
        else {
            return num_grid[i + k - 1][j + l - 1];
        }
    }
    long long prod_max_for_element(int i, int j) {
        long long max_prod = 1;
        // declaring directions on which we will move
        // this vector's element are directions
        // we make this so we can iterate upon the elements
        // of this vector and then move in required directions fast through loops
        // this is fast and effective
        vector<pair<int , int>> directions = {
            // up direction
            {-1, 0},
            // down direction
            {1, 0},
            // right direction
            {0, 1},
            // left direction
            {0, -1},
            // diagonally down right
            {1 , 1},
            //diagonally down left
            {1, -1},
            //diagonally up right
            {-1, 1},
            //diagonally up left
            {-1, -1}
        };
        // this basically iterates over those directions
        // takes the product of each direction
        // and returns the maximum product
        for (auto& [x, y] : directions) {
            long long prod = 1;
            for (int k = 0; k < 4; k++) {
                prod *= move(i , j, k*x, k*y);
            }
            if (prod > max_prod) {
                max_prod = prod;
            }
        }
        return max_prod;
    }
    
    long long max_prod_for_grid() {
        // this compares the maximum product
        // for each element of the grid and returns
        // the maximum among these maximums of individual elements
        long long max_prod = 1;
        for (int i = 1; i <= 20; i++) {
            for (int j = 1; j <= 20; j++) {
                long long prod = prod_max_for_element(i, j);
                if (prod > max_prod) {
                    max_prod = prod;
                } 
            }
        }
        return max_prod;
    }
};


int main(){
    vector<vector<int>> grid_inp(20,vector<int>(20));
    // stores the grid
    for (int row =  0; row < 20; row++) {
        for (int column = 0; column < 20; column++) {
            cin >> grid_inp[row][column];
        }
    }
    // creates the object
    grid inp(grid_inp);
    // outputs the answer
    cout << inp.max_prod_for_grid();
    
    return 0;
}