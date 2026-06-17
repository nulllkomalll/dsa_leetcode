# 3Sum

## Intuition

Brute force mein 3 numbers try karenge, which is `O(n³)`.

Instead:

1. Sort the array.
2. Fix one number `nums[i]`.
3. Now find two numbers whose sum is `-nums[i]`.
4. Since array is sorted, use two pointers (`left`, `right`) to find them efficiently.

### Why Sorting?

After sorting:

* If sum is too small → move `left` rightwards.
* If sum is too large → move `right` leftwards.
* If sum becomes `0` → triplet found.

### Pattern

```text
Sort
↓
Fix one element
↓
Apply Two Sum using Two Pointers
```

### Time Complexity

```text
O(n²)
```

### Key Insight

Convert:

```text
3Sum
```

into

```text
Fix one number
+
2Sum
```

and solve the remaining part using two pointers.
