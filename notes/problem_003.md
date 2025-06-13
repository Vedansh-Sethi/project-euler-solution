# Problem 3
link to problem :- [largest prime factor](https://www.hackerrank.com/contests/projecteuler/challenges/euler003/problem?isFullScreen=true)

# 🧮 Largest Prime Factor Finder

This C++ program efficiently computes the largest prime factor of given integers using an optimized trial division algorithm.

## 💡 Problem Insight

> Why not check every number up to `n`? Because math. Here's the breakdown:

- **Even factors (2)** are removed first to simplify things.
- After that, only **odd numbers** are checked up to `√n`, since any composite factor `> √n` must already have had a smaller factor.
- If anything's left after this process, it’s the **largest prime factor**.

### 🧠 Example: 3465

Steps:
1. Divide out 3 → 385
2. Divide out 5 → 77
3. Divide out 7 → 11
4. 11 is prime, and no smaller factors left. Answer: `11`.

## 📦 How to Use

```bash
g++ prime_factor.cpp -o prime_factor
./prime_factor