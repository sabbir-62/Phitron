
#include <stdio.h>

int main()
{
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);

    if(x<=y && x<=z && y>=z){
        printf("%d %d\n", x, y);
    }
    else if(x<=y && x<=z && y<=z){
        printf("%d %d\n", x, z);
    }
    else if(y<=x && y<=z && x>=z){
        printf("%d %d\n", y, x);
    }
     else if(y<=x && y<=z && x<=z){
        printf("%d %d\n", y, z);
    }
     else if(z<=x && z<=y && x>=y){
        printf("%d %d\n", z, x);
    }
     else if(z<=x && z<=y && x<=y){
        printf("%d %d\n", z, y);
    }
    return 0;
}




// Input 3 numbers and print the minimum and maximum number
