#include <stdio.h>

int main()
{

   int n, r;
   scanf("%d", &n);
   r = n / 1000;
   if(r % 2 == 0){
       printf("EVEN\n");
   }
   else{
        printf("ODD\n");
   }
    return 0;
}




// We can get the 1st digit of a given number.

// Note: The number must be have 4 digit. If it has 3 digit then divided by 100. If 2 digit then divided by 10.
