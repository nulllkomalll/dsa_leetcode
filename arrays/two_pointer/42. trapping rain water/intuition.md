# Trapping Rain Water

## Intuition

Water kisi building ke upar store nahi hota.

Water tab store hota hai jab uske left aur right dono side walls ho.

Example:

```text
3 0 2
```

Middle building (`0`) ke upar water store hoga.

Amount of water depends on the **smaller wall**.

```text
Water Level = min(leftMax, rightMax)
```

For every index:

```text
Water Stored =
min(leftMax, rightMax) - height[i]
```

---

## Key Observation

At each position, we need:

* Tallest wall on the left
* Tallest wall on the right

The smaller of these two decides the water level.

---

## Visualization

```text
Height:

3 0 2

Left Max  = 3
Right Max = 2

Water Level = min(3,2) = 2

Water Stored = 2 - 0 = 2
```

---

## Pattern

```text
For every index:

Find leftMax
Find rightMax

Water =
min(leftMax, rightMax) - height[i]
```

---

## One-Line Intuition

Water at an index is limited by the shorter of the tallest walls on its left and right.
