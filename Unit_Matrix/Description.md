# Unit Matrix
Given a matrix of size N * N. You need to tell if it is unit matrix or not.

Note: A matrix is called a unit matrix if all the primary diagonal elements are 1 and all the non-diagonal elements are 0.

##### Input Format

- First line will contain N, the row and column of the square matrix.
- Then the N * N sized matrix will be given where the values are integer only.

```bash
Constraints

1 <= N <= 100
0 <= Values <= 100
```
##### Output Format

- Ouput "YES" if the matrix is unit matrix, otherwise output "NO" without the quotation marks.

```bash
Sample Input 1

3
1 0 0
0 1 0
0 0 1

Sample Output 1

YES

Sample Input 2

5
1 0 0 0 0
0 1 0 0 0
0 0 1 0 1
0 0 0 1 0
0 0 0 0 1

Sample Output 2

NO