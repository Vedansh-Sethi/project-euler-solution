# Problem 7
link to problem :- [10001st prime](https://www.hackerrank.com/contests/projecteuler/challenges/euler007/problem?isFullScreen=true)

# 🧮 10001st prime

This C++ program aims to find the Nth prime.

# solution 1 :
- The first solution I thought for this problem was to bruteforce my way through all the number upto a certain number MAX, then make an array of all the primes upto MAX, then using simple search to get the Nth prime.
- It works for small numbers well, but for optimisation, I stumbled upon a 4th grade relic, Sieve of Eratosthenes.

# solution 2:
- My final solution uses the wonder of sieve or of Eratosthenes to quickly cancel out all the further multiples of the prime once a prime is found.
- We made a vector which turns true at all primes and itslef turns to false on the multiples ahead, so mathematically it is consistently keeping check of primes as it moves forward.
- This is faster and more elegant than manually checking primality.
- This is a new weapon in the arsenal like we got in problem 3 for finding the largest prime.

## (code for both the approaches are provided in the folder in solutions directory)

## 📦 How to Use

```bash
g++ problem_7_1.cpp -o 10001st_prime_1
./10001st_prime_1