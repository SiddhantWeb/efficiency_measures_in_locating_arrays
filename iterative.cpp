#include <bits/stdc++.h>
using namespace std;
unordered_set<string> st;
void solve(vector<vector<int>> vec, int t)
{
    int n = vec[0].size();
    for (int i = 1; i < (1 << n); ++i)
    {

        string subseq;

        for (int j = 0; j < n; ++j)
        {

            if (i & (1 << j))
            {

                subseq += 'a' + j;
                subseq += to_string(vec[0][j]); // generate subsequence
            }
        }
        if (subseq.length() == 2 * t)
        {
            st.insert(subseq);
        }
    };
}

int main()
{
    vector<int> levels{2, 2, 2, 2, 2};
    vector<vector<int>> vec{{0, 0, 0, 0, 0}};
    int t = 3;
    solve(vec, t);
    int y = st.size();
    cout << y << endl;
    for (auto &e : st)
    {
        cout << e << endl;
    }
    return 0;
}