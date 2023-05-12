/*
Given a number N. Print a pyramid that has N rows.

For more clarification see the example below.

Input:
Only one line containing a number N (1 ≤ N ≤ 99).

Output:
Print the answer according to the required above.

Example:
input:
4

output:
   *
  ***
 *****
*******

Note:
Don't print any extra spaces after symbol " * ".
*/

#include<stdio.h>
int main()
{

    int n, i, j, k, s, l;

    scanf("%d", &n);
    l = n;
    s = n-1;
    k = 1;

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=l; j++)
        {
            if(j<=s)
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
        s--;
        k++;
        l++;
    }


    return 0;
}
