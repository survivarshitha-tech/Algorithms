1. Binary Search
How it works: Searches for an element in a sorted array by repeatedly dividing the search interval in half.

Example:

Array: [2, 5, 8, 12, 16, 23, 38, 45, 56, 67, 78]

Find: 23


Step 1: Check middle (16) → 23 > 16, search right half

Step 2: Check middle of right half (56) → 23 < 56, search left half

Step 3: Check middle (23) → Found!
