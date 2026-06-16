# Pattern Recognition

> Ye Two Pointer kyun hai?

## Because:

- Array sorted hai.
- Duplicates adjacent hain.
- Ek pointer unique portion maintain karta hai.
- Dusra pointer scan karta hai.

## Template:
```
slow -> valid/processed region

fast -> traverse array
```
## Jab bhi question bole:

- remove duplicates
- move zeroes
- compact array
- partition array

### Toh dimaag mein ye pattern aana chahiye:
```
slow = where next valid element jayega
fast = scan karne wala pointer
```
