/*
Problem Statement:
Given the sum of four numbers and three of those numbers, find the missing number. All four numbers are positive integers.

Input Format:
The first line will contain T, number of test cases.
For every test case, the input will contain one integer S (the sum of the four numbers), A, B, C (three of those four numbers).

Constraints:
0 < T <= 100
0 <= S, A, B, C <= 2^32

Output Format:
Print the missing number. Don't forget to print a new line after it.

Sample Input 0:
1
10 1 2 3

Sample Output 0:
4

Sample Input 1:
3
20 2 4 1
15 5 5 5
30 10 5 3

Sample Output 1:
13
0
12
*/


#include<stdio.h>

int value(int arr[], int n)
{
    int sum=0;
    for(int i=1; i<n; i++){
        sum = sum+arr[i];
    }
    return arr[0] - sum;
}

int main()
{
    int i, j, n, missing_value;

    scanf("%d", &n);

    int arr[n];

    while(n--)
    {
        for(i=0; i<4; i++)
        {
            scanf("%d", &arr[i]);
        }
        missing_value = value(arr, 4);
        printf("%d\n", missing_value);
    }


    return 0;
}


