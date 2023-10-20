#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> powerSet;

void generate(vector<int> &nums, int i, vector<int> &curSubset)
{

  if (i == nums.size())
  {
    powerSet.push_back(curSubset);
    return;
  }
  // include ith element
  curSubset.push_back(nums[i]);
  generate(nums, i + 1, curSubset);
  curSubset.pop_back();

  // exclude ith element
  generate(nums, i + 1, curSubset);
}

int main()
{
  int n;
  cin >> n;
  vector<int> nums(n);
  for (int i = 0; i < n; i++)
  {
    cin >> nums[i];
  }
  vector<int> curSubset;
  generate(nums, 0, curSubset);

  sort(powerSet.begin(), powerSet.end());

  for (vector<int> subset : powerSet)
  {
    for (int x : subset)
    {
      cout << x << ' ';
    }
    cout << endl;
  }

  return 0;
}