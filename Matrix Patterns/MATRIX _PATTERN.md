This program generates a square matrix of size N × N (filled with numbers 1 to N×N in row-major order) and prints a chosen pattern (A, D, X, or Z) using the matrix values.

Non-pattern positions are replaced with 0.

The program also computes and displays the sum of all numbers used in the pattern.

Input Format : ● First line: A character ch (Z, D, A, X). ● Second line: An integer N (3 ≤ N ≤ 20). Output Format :

● The N × N matrix where only the chosen pattern positions keep their values, all others are 0. ● The sum of all values included in the pattern.

Examples: 1.Input-

Enter the Size of Matrix: 5

Enter Pattern: Z

1.Output-

1 2 3 4 5
0 0 0 9 0
0 0 13 0 0
0 17 0 0 0
21 22 23 24 25

The Sum of Elements is: 120

2.Input-

Enter the Size of Matrix: 5

Enter Pattern: X

2.Output-

1 0 0 0 5
0 7 0 9 0
0 0 13 0 0
0 17 0 19 0
21 0 0 0 25

The Sum of Elements is: 65

3.Input-

Enter the Size of Matrix: 5

Enter Pattern: A

3.Output-

0 0 3 0 0
0 7 0 9 0
0 12 13 14 0
0 17 0 19 0
0 22 0 24 0

The Sum of Elements is: 120

4.Input-

Enter the Size of Matrix: 5

Enter Pattern: D

4.Output-

0 0 3 0 0
0 0 8 9 0
0 0 13 14 0
0 0 18 19 0
0 0 23 0 0

The Sum of Elements is: 107 Constraints: ● 3 ≤ N ≤ 20 ● Pattern is guaranteed to be one of {Z, D, A, X}

Useful for practicing 2D Array Questions,pattern printing.
