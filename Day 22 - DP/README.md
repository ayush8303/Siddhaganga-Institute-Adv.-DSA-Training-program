#### 1. Ladder Problem

Given a ladder of size N, and an integer K, write a program to compute numbers
ways to climb the ladder if you can take a jump of atmost k at every step.

Input:
N = 1

Output: 1

Input:
N = 0

Output: 1

---

#### 2. Rod cutting

Given a rod of length N and array prices of length n denoting the cost of pieces of the rod of length 1 to N. find the maximum amount that can be made if the rod is cut up optimally.

Input:
N = 4, prices[] = [1, 1, 1, 4]

Output: 4

---

#### 3. [ Vacation ](https://atcoder.jp/contests/dp/tasks/dp_cs)

---

#### 4. [ H - Grid 1 ](https://atcoder.jp/contests/dp/tasks/dp_h)

---

#### 5. [ K - Stones ](https://atcoder.jp/contests/dp/tasks/dp_k)

---

#### 6. [ L - Deque ](https://atcoder.jp/contests/dp/tasks/dp_l)

---

#### 7. [ 0/1Knapsack ](https://www.spoj.com/problems/KNAPSACK/)

---

#### 8. Paint House

There are a row of N houses, each can be painted with one of the three colors: RED,
GREEN, BlUE. The cost of painting each house with a certain color is different.
You have to paint all the houses such that no two adjacent houses have the same color.
The cost of painting each house with a certain color is represent by a 3 X N cost matrix.
For example, costs[0][0] is the cost of painting house 0 with color RED;
costs[1][0] is the cost of painting house 0 with color GREEN and so on.
Find the minimum cost to paint all the houses.

Input:
N = 3

14 11 14

2 14 3

11 5 10

Output: 10 = 2 + 5 + 3

---

#### 9. [ Make The Fence Great Again ](https://codeforces.com/problemset/problem/1221/D)

---

#### 10. Optimal Selection

We are given the prices of K products over N days, and we want to buy each product exactly once. However, we are allowed to buy at most one product in a day. What is the minimum total price?

Input:

K=3, N = 8

6 9 5 2 8 9 1 6

8 2 6 2 7 5 7 2

5 3 9 7 3 5 1 4

Output: 5

The Optimal Selection is:

product 0 on day 3 at price 2,

product 1 on day 1 at price 2,

product 2 on days 6 at price 1.

which gives us the total of 5.

---

#### 11. [ Alphacode ](https://www.spoj.com/problems/ACODE/)

---

#### 12. Subset Sum Problem

Given a integer SUM and an array of non-negative integers. Determine if subset of array exists with sum equal SUM.

Constraints :

N <= 1000

SUM <= 1000

Sample input =

N = 5

SUM = 12

array [ ] = [2, 7, 4, 15, 19]

Sample output : 0

Sample input =

N = 5

SUM = 11

array [ ] = [2, 7, 4, 15, 19]

Sample output : 1 ({7,4})
