

#include<stdio.h>
#include<math.h>


// Has Return + Parameter
int hasReturn_hasParameter(int a, int b)
{
    int sum = a+b;
    return sum;
}


// Has Return + No Parameter
int hasReturn_noParameter()
{
    int a, b;
    double result;
    scanf("%d %d", &a, &b);
    result = pow(a,b);
    return result;
}


// No Return + Parameter
void noReturn_hasParameter(int n)
{
    int i;
    for(i=1; i<=10; i++)
    {
        printf("%d * %d = %d", n, i, n*i);
        printf("\n");
    }
}


//No Return + No Parameter
void noReturn_noParameter()
{
    int x, y, z;


    scanf("%d %d %d", &x, &y, &z);


    if(x<=y && x<=z && y>=z)
    {
        printf("%d %d\n", x, y);
    }
    else if(x<=y && x<=z && y<=z)
    {
        printf("%d %d\n", x, z);
    }
    else if(y<=x && y<=z && x>=z)
    {
        printf("%d %d\n", y, x);
    }
    else if(y<=x && y<=z && x<=z)
    {
        printf("%d %d\n", y, z);
    }
    else if(z<=x && z<=y && x>=y)
    {
        printf("%d %d\n", z, x);
    }
    else if(z<=x && z<=y && x<=y)
    {
        printf("%d %d\n", z, y);
    }
}






int main()
{
    int a, b, n, sum, power;


    // Has Return + Parameter
    printf("Enter Two integer and call the hasReturn_hasParameter function, That function add two number: ");
    scanf("%d %d", &a, &b);
    sum = hasReturn_hasParameter(a, b);
    printf("The sum is: %d\n", sum);




    // Has Return + No Parameter
    printf("Calling hasReturn_noParameter function and enter two integer, That function calculater the power: ");
    power = hasReturn_noParameter();
    printf("The power result is: %d\n", power);




    // No Return + Parameter
    printf("Calling noReturn_hasParameter function and enter a integer, that function print the multiplication table: ");
    scanf("%d", &n);
    noReturn_hasParameter(n);




    //No Return + No Parameter
    printf("Calling noReturn_noParameter function and Enter 3 integers, That function find the minimum and maximum: ");
    noReturn_noParameter();


    return 0;
}
