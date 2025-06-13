# Problem 9
link to problem :- [Special Pythagorean triple](https://www.hackerrank.com/contests/projecteuler/challenges/euler009/problem?isFullScreen=true)

# 🧮 Special Pythagorean triple

Given an integer N, it finds the pythagorean triples (a, b, c) for which a+b+c = N, it finally computes the maximum value of a * b * c
# Key insights 

- This program uses the euclidean pythogorean triplet generator.
- In that a = m<sup>2</sup> - k<sup>2</sup>, b = 2mk, c = m<sup>2</sup> + k<sup>2</sup>
- we will start a for loop from m = 2 to m = floor(sqrt(N))
- Inside the first for loop, we start another loop from k = 1 to k = m, and we calculate the values of a, b, c
- Then we check if N is divisible by sum of a, b, c, if it is, then we store N/sum as j
- we use this J to calculate the product
- If the product of current pythagorean triplet's product is greater than the previous max value, we assign the new product to max.
- This way we find the maximum value of the product.

## 📦 How to Use

```bash
g++ problem_9.cpp -o Special_pythagorean_triple
./Special_pythagorean_triple