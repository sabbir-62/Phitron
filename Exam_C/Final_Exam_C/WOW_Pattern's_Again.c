/*
Problem Statement:
Write a C program that will take an integer N and creates this pattern for the corresponding inputs.

For example,
If N=3, the pattern look like this,
image

If N=6, the pattern look like this,
image

Input Format:
You will be given a positive integer N as input.

Constraints:
1 <= N <= 20

Output Format:
Output the pattern

Sample Input 0:
1

Sample Output 0:
^

Sample Input 1:
3

Sample Output 1:
  ^
 ***
^^^^^

Sample Input 2:
6

Sample Output 2:
     ^
    ***
   ^^^^^
  *******
 ^^^^^^^^^
***********

*/


#include<stdio.h>
int main()
{

    int i, j, k, n;

    scanf("%d", &n);

    int sp = n-1, st = 1;

    for(i=0; i<n; i++)
    {
        for(j=0; j<sp; j++)
        {
            printf(" ");
        }
        for(k=0; k<st; k++)
        {
            if(i%2==0)
            {
                printf("^");
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
        sp--;
        st += 2;
    }

    return 0;
}
