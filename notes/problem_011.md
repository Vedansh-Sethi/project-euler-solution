# Problem 11  
link to problem :- [Largest product in a grid](https://www.hackerrank.com/contests/projecteuler/challenges/euler011/problem?isFullScreen=true)  

# 🧮 Largest product in a grid  

This program finds the greatest product of four adjacent numbers in the same direction (up, down, left, right, or diagonally) in a 20x20 grid.

# Key insights  

- The grid is stored as a 2D vector of integers, allowing easy access by row and column.  
- We define 8 directions (up, down, left, right, and the 4 diagonals) as pairs of coordinate steps so we can loop through them efficiently.  
- For each cell, we multiply the values of 4 consecutive elements along each direction.  
- The `move` function safely handles boundary checks, returning 0 if we try to go outside the grid — this prevents invalid multiplications.  
- By iterating over every cell and every direction, we track the maximum product found, which is returned as the answer.  
- The solution leverages clean loops and vector usage for readability without sacrificing performance on this fixed-size grid. 

## 📦 How to Use  

```bash
g++ problem_11.cpp -o LargestProductInGrid
./LargestProductInGrid