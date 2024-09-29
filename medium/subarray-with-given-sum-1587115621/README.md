# Analysis

Given the nature of the problem (finding a contiguous sub-array with a specific sum), an efficient solution is to use a sliding window.

## Insight

A sliding window will work nicely when dealing with non-negative integers because if the current sub-array sum exceeds the target sum, we can safely shrink the window from the left without the risk of missing the solution. This avoids the need for nested loops, giving us a linear time complexity:

1. If the sum exceeds `s`, shrink the window from the left until the sum is less than or equal to `s`
2. If the sum equals `s`, record the current start and end indices and return them as the result
3. If we exhaust the entire array and no such sub-array is found, return `-1`

## Approach and Checklist

1. Initialize pointers `start = 0` and `current_sum = 0`
2. For each element, add the current element to `current_sum`
   - While `current_sum > s` and `start <= end`, shrink the window from the left
3. If `current_sum == s`, return `[start + 1, end + 1]` (convert to 1-based indexing)
4. If no such sub-array is found, return `-1`

- [x] Running sum through a single traversal (`O(n)`)
- [x] No additional data structures used (`O(1)`)
- [x] Handles edge cases where `s` is 0 or larger than the sum of the entire array
