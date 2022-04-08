#include <bits/stdc++.h>
using namespace std;

unordered_set<string> st;
char x = 'a' + 5;
void solve(vector<int> v, vector<int> &levels, int t, int i = 0, int currLen = 0, string currString = "")
{
    if (currLen == t)
    {
        st.insert(currString);
    }
    if (i >= levels.size())
    {
        return;
    }
    solve(v, levels, t, i + 1, currLen, currString);
    currString += 'a' + i;
    currString += to_string(v[i]);
    solve(v, levels, t, i + 1, currLen + 1, currString);
    return;
}

long long TotalCombinationsCovered(const vector<vector<int>> &vec, vector<int> &levels, int t)
{
    // For storing ans
    long long ans = 0;
    // Finding total number of rows in our array
    int rows = vec.size();
    for (int i = 0; i < rows; i++)
    {
        solve(vec[i], levels, t, 0, 0, "");
    }

    return ans;
}

int main()
{
    vector<int> levels{2, 2, 2, 2, 2};
    vector<vector<int>> vec{{0, 0, 0, 0, 0}};
    int t = 3;
    int y = TotalCombinationsCovered(vec, levels, t);

    return 0;
}