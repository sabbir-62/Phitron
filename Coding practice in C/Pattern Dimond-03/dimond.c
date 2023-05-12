/*
Given a number N. Print a diamond that has 2N rows.

For more clarification see the example below.

Input
Only one line containing number N (1 ≤ N ≤ 99).

Output
Print the answer according to the required above.

Example
inputCopy
4
outputCopy
   *
  ***
 *****
*******
*******
 *****
  ***
   *
Note
Don't print any extra spaces after symbol " * ".
*/



#include<stdio.h>
int main()
{

    int n, i, j, k, s, l;

    scanf("%d", &n);
    l = n;
    s = n;
    k = 1;

    for(i=1; i<=2*n; i++)
    {
        if(i<=n)
        {
            for(j=1; j<=l; j++)
            {
                if(j<s)
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
            l++;
        }

        else
        {
            for(j=1; j<l; j++)
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
            s++;
            l--;
        }
    }


    return 0;
}
