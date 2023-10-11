#### 1. Distinct Candies

Alice has n candies, where the ith candy is of type candyType[i]. Alice noticed that she started to gain weight, so she visited a doctor.

The doctor advised Alice to only eat n / 2 of the candies she has (n is always even). Alice likes her candies very much, and she wants to eat the maximum number of different types of candies while still following the doctor's advice.

Given the integer array candyType of length n, return the maximum number of different types of candies she can eat if she only eats n / 2 of them.

sample input: candyType = [1,1,2,2,3,3]

sample output: 3

Explanation: Alice can only eat 6 / 2 = 3 candies. Since there are only 3 types, she can eat one of each type.

Constraints:

n == candyType.length

2 <= n <= 10^4

n is even.

-10^5 <= candyType[i] <= 10^5

---

#### 2. One Integer

You are given a list of integers nums. You can reduce the length of nums by taking any two integers, removing them, and appending their sum to the end. The cost of doing this is the sum of the two integers you removed.

Print the minimum total cost of reducing nums to one integer.

sample input: nums = [1, 2, 3, 4, 5]

sample output: 33

Explanation:
We take 1 and 2 out to get [3, 4, 5, 3]
We take 3 and 3 out to get [4, 5, 6]
We take 4 and 5 out to get [6, 9]
We take 6 and 9 out to get [15]
The sum is 33 = 1 + 2 + 3 + 3 + 4 + 5 + 6 + 9

Constraints:

1 <= n <= 10^5

---

#### 3. First Unique Character in a String

Given a string s, find the first non-repeating character in it and print its index. If it does not exist, print -1.

sample input: s = "geeksforgeeks"
sample output: 5

sample input: s = "aabb"
sample output: -1

---

#### 4. [ Bulls and Cows](https://leetcode.com/problems/bulls-and-cows/description/)

---
