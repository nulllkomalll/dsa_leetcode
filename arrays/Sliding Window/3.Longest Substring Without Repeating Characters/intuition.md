# Longest Substring Without Repeating Characters

## Intuition

Question longest substring without repeating characters maang raha hai.

Example:

```text
abcabcbb
```

Longest valid substring:

```text
abc
```

Length = 3

Brute force mein har substring generate karke check kar sakte hain, but bahut repeated work hoga.

Observe:

```text
abc
```

tak sab valid hai.

Ab next character add karte hain:

```text
abca
```

Duplicate aa gaya.

Ab poora restart karne ki zarurat nahi hai.

Bas left side se characters remove karo jab tak duplicate hat nahi jaata.

```text
abca
↓
bca
```

Window firse valid ho gayi.

Yahi Sliding Window hai.

---

## Window Meaning

Current window hamesha ek valid substring represent karegi.

Valid = koi duplicate character nahi.

---

## Approach

- `right` pointer se window expand karo.
- Agar current character already window mein present hai, toh `left` move karke window shrink karo.
- Duplicate hatne ke baad current character add karo.
- Har valid window par answer update karo.

---

## Important Line

```cpp
while(st.count(s[right]))
{
    st.erase(s[left]);
    left++;
}
```

Meaning:

Current character already window mein hai.

Jab tak duplicate exist karta hai,
left side se characters remove karte raho.

---

## Template

```cpp
for(right)
{
    while(window invalid)
    {
        shrink
    }

    update answer
}
```

For this problem:

```text
window invalid = duplicate character exists
```

---

## Time Complexity

```text
O(n)
```

Har character maximum ek baar window mein aata hai aur ek baar hi remove hota hai.

## Space Complexity

```text
O(k)
```

k = unique characters in current window.
