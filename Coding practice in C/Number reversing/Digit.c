#include<stdio.h>
int main(){

    int n, i;
    scanf("%d", &n);

    for(i=0; i<n; i++){
        int a, rem;
        scanf("%d", &a);

        do{
            rem = a % 10;
            a = a / 10;
            printf("%d ", rem);
        }while(a != 0);

        printf("\n");
    }


return 0;
}


// Input: 4
//        345
//        765
//        876
//        543

// Output:
//        5 4 3
//        5 6 7
//        6 7 8
//        3 4 5
