long long trappingWater(vector<int> &arr)
{
    int n = arr.size();
    if (n < 3)
    {
        return 0;
    }
    int left_max[n], right_max[n];
    left_max[0] = arr[0];
    right_max[n - 1] = arr[n - 1];
    for (int i = 1; i < n; i++)
    {
        left_max[i] = max(left_max[i - 1], arr[i]);
    }
    for (int i = n - 2; i >= 0; i--)
    {
        right_max[i] = max(right_max[i + 1], arr[i]);
    }
    long long ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans += max(0, min(left_max[i], right_max[i]) - arr[i]);
    }
    return ans;
}
