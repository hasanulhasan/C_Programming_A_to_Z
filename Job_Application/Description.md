# Job Application

In your company you have been given a task to sort out the job applications acording to the candidates experience.

- If experience is less than 1, it's "Entry-level candidate".
- If experience is between 1 and 3 (inclusive), it's "Junior candidate".
- If experience is between 4 and 7 (inclusive), it's "Mid-level candidate".
- If experience is greater than 7, it's "Senior candidate".

You will be given list of N candidates experience. For each of them print what kind of candidate he/she is according the the experience.

##### Input Format

- The first line will contain an integer N, the number of candidates.
- The next line will contain N numbers, the experiences of the candidates.

```bash
Constraints

1 <= N <= 10^5
```
##### Output Format

- For each experience, print one of these strings (without quotes) "Entry-level candidate", "Junior candidate", "Mid-level candidate" and "Senior candidate" according to the catagory.

```bash
Sample Input

4
4
0
3
8

Sample Output

Mid-level candidate
Entry-level candidate
Junior candidate
Senior candidate
```
### Topic

##### Bacic C Programming, Loop, Array, String