
#include <stdio.h>

int main()
{
    int n, i, e=0, o=0, p=0, ne=0;
    scanf("%d", &n);
    int arr[n];

    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    for(i=0; i<n; i++){
        if(arr[i] > 0){
            p++;
        }
        if(arr[i] < 0){
            ne++;
        }
        if(arr[i] % 2 == 0){
            e++;
        }
        if(arr[i] % 2 != 0){
            o++;
        }
    }
    printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d\n", e, o, p, ne);


    return 0;
}
