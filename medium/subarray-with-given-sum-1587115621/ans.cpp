vector<int> subarraySum(vector<int> arr, int n, long long s)
{
    int start = 0;
    int curr = 0;
    for (int i = 0; i < n; i++)
    {
        curr += arr[i];
        while (curr > s && start < i)
        {
            curr -= arr[start];
            start++;
        }
        if (curr == s)
        {
            return {start + 1, i + 1};
        }
    }
    return {-1};
}
