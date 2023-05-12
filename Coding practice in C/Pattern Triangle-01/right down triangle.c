/*
Given a number N. Print a face down right angled triangle that has N rows.

For more clarification see the example below.

Input:
Only one line containing a number N (1 ≤ N ≤ 99).

Output:
Print the answer according to the required above.

Example:
input:
4

output:
****
***
**
*

Note:
Don't print any extra spaces after symbol " * ".
*/


#include<stdio.h>
int main()
{
    int n, i, j;
    scanf("%d", &n);
    int k = n;

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=k; j++)
        {
            printf("*");
        }
        printf("\n");
        k--;
    }

    return 0;
}
