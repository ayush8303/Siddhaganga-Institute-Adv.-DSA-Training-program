#include <bits/stdc++.h>
using namespace std;
#define int long long int
const int N = 3000;
const int inf = 1e15;


int a[N];
// 1 -> taro's turn
// 0 -> Jiro's turn
int memo[N][N][2];


int recur(int i, int j, int turn) {
    if (i == j) {
        if (turn == 1) return a[i];
        else return 0;
    }
    int &ans = memo[i][j][turn];
    if (ans != inf) {
        return ans;
    }

    // taro's turn
    if (turn == 1) {
        ans = max(a[i] + recur(i + 1, j, 0), a[j] + recur(i, j - 1, 0));
    }
    else {
        // jiro's turn
        ans = min(recur(i + 1, j, 1), recur(i, j - 1, 1));
    }
    return ans;
}



int32_t main()
{
    int n;
    cin >> n;
    int sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            for (int turn = 0; turn <= 1; turn++) {
                memo[i][j][turn] = inf;
            }
        }
    }
    int max_X = recur(0, n - 1, 1);
    int max_Y = sum - max_X;
    cout << max_X - max_Y << endl;

    return 0;
}