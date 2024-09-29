# Analysis

The problem is to compute the amount of water that can be trapped between the blocks after a rainy season. Each element in the array represents the height of a block, and the width of each block is assumed to be 1 unit. We need to find how much water can be stored between these blocks.

## Insight

Firstly, edge cases can be handled. If the array is empty or contains fewer than 3 elements, no water can be trapped. If the array is flat (all elements have the same height), no water can be trapped either.

Then, we need to know the maximum height of blocks to its left and to its right. The water trapped at position `i` will be the difference between the smaller of these two heights and the height at position `i`, if that difference is positive.

Therefore, we need two arrays to store the maximum height of blocks to its left and to its right. Once we have these two arrays, we can calculate the water trapped at each index `i` using the formula:

$$
\text{Water at index } i = \max(0, \min(\text{left\_max}[i], \text{right\_max}[i]) - \text{height}[i])
$$

## Approach and Checklist

1. Initialize `left_max[0]` as `height[0]` and `ans` as 0
2. Traverse the array from left to right, and for each index `i`, set `left_max[i] = max(left_max[i-1], height[i])`
3. Initialize `right_max[n-1]` as `height[n-1]`
4. Traverse the array from right to left, and for each index `i`, set `right_max[i] = max(right_max[i+1], height[i])`
5. For each index `i`, calculate the trapped water as `water += max(0, min(left_max[i], right_max[i]) - height[i])` and add it to `ans`
6. Return `ans`

- [x] `O(N)` as we perform three linear traversals
- [x] `O(N)` due to the `left_max` and `right_max` arrays
- [x] Edge cases considered (e.g., arrays with fewer than 3 elements, flat arrays)
