class Solution
{
public:
  vector<int> findOrder(int numCourses, vector<vector<int>> &prerequisites)
  {
    int n = prerequisites.size();
    vector<int> indegree(numCourses, 0);
    vector<vector<int>> adj(numCourses);
    for (auto arr : prerequisites)
    {
      int a = arr[0];
      int b = arr[1];
      adj[b].push_back(a);
      indegree[a]++;
    }
    queue<int> q;
    vector<int> toposort;
    for (int i = 0; i < numCourses; i++)
    {
      if (indegree[i] == 0)
      {
        q.push(i);
      }
    }
    while (!q.empty())
    {
      int node = q.front();
      q.pop();
      toposort.push_back(node);

      for (int nbr : adj[node])
      {
        indegree[nbr]--;
        if (indegree[nbr] == 0)
        {
          q.push(nbr);
        }
      }
    }
    if (toposort.size() == numCourses)
      return toposort;
    else
      return {};
  }
};