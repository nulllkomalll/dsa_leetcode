# Dutch National Flag Algorithm

## Intuition

The array contains only three distinct values: `0`, `1`, and `2`.

Instead of sorting the entire array, we maintain three regions:

```text
0s | Unknown | 2s
```

We use three pointers:

* `low` → next position where `0` should be placed
* `mid` → current element being processed
* `high` → next position where `2` should be placed

### Rules

#### Case 1: Current element is `0`

`0` belongs to the left region.

```cpp
swap(nums[low], nums[mid]);
low++;
mid++;
```

#### Case 2: Current element is `1`

`1` already belongs to the middle region.

```cpp
mid++;
```

#### Case 3: Current element is `2`

`2` belongs to the right region.

```cpp
swap(nums[mid], nums[high]);
high--;
```

> Note: Do **not** increment `mid` here because the element swapped from the `high` position has not been processed yet.

---

## Algorithm

```cpp
int low = 0;
int mid = 0;
int high = nums.size() - 1;

while (mid <= high) {

    if (nums[mid] == 0) {
        swap(nums[low], nums[mid]);
        low++;
        mid++;
    }

    else if (nums[mid] == 1) {
        mid++;
    }

    else {
        swap(nums[mid], nums[high]);
        high--;
    }
}
```

---

## Visualization

Initial:

```text
[2,0,2,1,1,0]

0s | Unknown | 2s
```

After processing:

```text
[0,0,1,1,2,2]

0s | 1s | 2s
```

The unknown region keeps shrinking until the entire array is partitioned correctly.

---

## Time & Space Complexity

* **Time Complexity:** `O(n)`
* **Space Complexity:** `O(1)`

---

## Key Insight

We do not sort the array traditionally.

Instead:

* Push all `0`s to the left.
* Push all `2`s to the right.
* Leave all `1`s in the middle.

This is known as the **Dutch National Flag Algorithm**, proposed by Edsger Dijkstra.
