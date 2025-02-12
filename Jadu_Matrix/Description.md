# Jadu Matrix

You will be given a matrix of size N * M. You need to tell if it is Jadu Matrix or not.

Note: A Jadu Matrix is a square matrix, where the values of primary diagonal and secondary diagonal are 1. Rest of the cell will contain only 0.

##### Input Format

- First line will contain N, the row and M, the column of the matrix.
- Then the N * M sized matrix will be given.

```bash
Constraints

1 <= N, M <= 100
0 <= Values <= 100
```
##### Output Format

- Ouput "YES" if the matrix is Jadu Matrix, otherwise output "NO" without the quotation marks.

```bash
Sample Input

5 5
1 0 0 0 1
0 1 0 1 0
0 0 1 0 0
0 1 0 1 0
1 0 0 0 1

Sample Output

YES
```
```bash
Sample Input

5 5
1 0 0 0 1
0 1 0 1 0
0 0 0 0 0
0 1 0 1 0
1 0 0 0 1

Sample Output

NO
```
```bash
Sample Input

5 5
1 0 0 0 1
0 1 0 1 0
0 0 1 0 1
0 1 0 1 0
1 0 0 0 1

Sample Output

NO
```
```bash
Sample Input

6 6
1 0 0 0 0 1 
0 1 0 0 1 0 
0 0 1 1 0 0 
0 0 1 1 0 0 
0 1 0 0 1 0 
1 0 0 0 0 1 

Sample Output

YES
```
### Topic

##### Bacic C Programming, Loop, Array, Matrix