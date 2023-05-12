
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
        for(col=1; col<=row; col++)
        {
            printf("%d", row);
        }
        printf("\n");
    }
    return 0;
}
