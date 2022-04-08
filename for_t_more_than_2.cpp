#include <bits/stdc++.h>
using namespace std;

uint64_t ans = 0;
void findTotalNumberOfComb(int t, vector<int> levels, int currLen = 0, int currAns = 1, int i = 0)
{
    if (currLen == t)
    {
        ans += currAns;
        return;
    }
    if (i >= levels.size())
    {
        return;
    }
    findTotalNumberOfComb(t, levels, currLen, currAns, i + 1);
    currAns *= levels[i];
    findTotalNumberOfComb(t, levels, currLen + 1, currAns, i + 1);
    return;
}

int main()
{
    vector<int> levels{2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5};
    int t = 2;
    findTotalNumberOfComb(t, levels, 0, 1, 0);
    cout << ans << endl;
    return 0;
}