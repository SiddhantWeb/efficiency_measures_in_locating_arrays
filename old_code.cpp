int k = 0;
long long TotalCombinationsCovered = 0;
while (k < columns - 1)
{
    for (int i = k + 1; i < columns; i++)
    {
        unordered_map<int, set<int>> mp;
        for (int j = 0; j < rows; j++)
        {
            mp[MainArr[k][j]].insert(MainArr[i][j]);
        }
        for (auto &e : mp)
        {
            TotalCombinationsCovered += e.second.size();
        }
        mp.clear();
    }
    k++;
}
return TotalCombinationsCovered;