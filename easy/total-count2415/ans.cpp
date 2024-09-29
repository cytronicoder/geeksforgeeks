int totalCount(int k, vector<int> &arr)
{
    int ans = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        int parts = (arr[i] + k - 1) / k;
        ans += parts;
    }
    return ans;
}