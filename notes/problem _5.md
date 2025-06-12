# Problem 5
link to problem :- [smallest multple](https://www.hackerrank.com/contests/projecteuler/challenges/euler005/problem?isFullScreen=true)

# 🧮 Smallest multiple

This C++ program aims to find a LCM of numbers from 1 to a certain number N.

## 💡 Problem Insight

-  We first use Euler's algroithm for finding GCD.
- Then we wil find the LCM of numebr sform 1 to N using the property that LCM(a, b) * GCD(a, b) = a * b.

## 📦 How to Use

```bash
g++ problem_5.cpp -o smallest_multiple
./smallest_multiple