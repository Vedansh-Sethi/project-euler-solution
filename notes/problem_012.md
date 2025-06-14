# Problem 12
link to problem :- [Highly divisible triangular number](https://www.hackerrank.com/contests/projecteuler/challenges/euler012/problem?isFullScreen=true)

# 🧮 Highly divisible triangular number

This C++ program aims to find the smallest triangular number, such that the number of divisors of it are equal to a certain number N.

# solution 1 :
- The first solution was the standard brute forcing with a sneaky optmization.
- It used a function to factorize the number and store the factors in a vector.
- Then it used another function to iterate through triangular numbers and check if the number of elements in divisor is equal to required number.
- But it failed due to TLE.

# solution 2:
- The final solution uses a function that calculates only the number of divisors and not the divisors itself.
- Then we use this to calculate the divisors of triangular numbers, we optimise the calculations using the fact that consecutive numbers are always co-prime, so the number of divisors of their multiplication is product of divisors of both
- Then we compare it with the required number of divisors.
- Hence this solution finally checks out removing the TLE.
## (code for both the approaches are provided in the folder in solutions directory)

## 📦 How to Use

```bash
g++ problem_12_1.cpp -o Highly_divisible_triangular_number_1
./Highly_divisible_triangular_number_1