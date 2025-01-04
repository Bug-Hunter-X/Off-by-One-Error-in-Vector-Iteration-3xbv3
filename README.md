# Off-by-One Error in C++ Vector Iteration

This repository demonstrates a common off-by-one error that occurs when iterating over a `std::vector` in C++.  The error arises from incorrectly handling the upper bound of the loop index.

The `bug.cpp` file contains the erroneous code, while `bugSolution.cpp` provides the corrected version.

**Key takeaway:** Always use `<` when iterating up to the size of the vector and `<=` when iterating from 0 to a size -1.