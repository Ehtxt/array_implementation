# Sparse Matrix Implementation (C++)

### Problem
Implement an array-based sparse matrix representation in C++.

### Approach
- I used an array of structures (triplets) also called as the 3-tuple representation of a sparse matrix. to store only non-zero elements.
- Each structure stores `(row, column, value)`.
- And then it provides a function to display the full matrix from sparse representation.