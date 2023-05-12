#include<stdio.h>
int main()
{


    int n, row, col, k=0;
    scanf("%d", &n);


    for(row=1; row<=n; row++)
    {
        for(col=1; col<=n-row; col++)
        {
            printf(" ");
        }
        for(col=1; col<=row+k; col++)
        {
            printf("%d", col);
        }
        k++;
        printf("\n");
    }


    k -= 2;


    for(row=n-1; row>=1; row--)
    {
        for(col=1; col<=n-row; col++)
        {
            printf(" ");
        }
        for(col=1; col<=row+k; col++)
        {
            printf("%d", col);
        }
        k--;
        printf("\n");
    }




    return 0;
}
