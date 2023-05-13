/*
Problem Statement
You will be given a string S consisting of small alphabets, capital alphabets and spaces. You need to count number of small alphabets, capital alphabets and spaces in the string S.

Input Format:
Input will contain a string S.

Constraints:
1 <= |S| <= 1000; Here |S| means the length of S.

Output Format:
Output in the format given in the sample output.

Sample Input 0:
Hello Everyone

Sample Output 0:
Capital - 2
Small - 11
Spaces - 1

Sample Input 1:
I Hope You Have Been Enjoying

Sample Output 1:
Capital - 6
Small - 18
Spaces - 5
*/


#include<stdio.h>

void count(char* str, int* c, int* s, int* sp)
{

    for(int i=0; str[i] != '\0'; i++)
    {
        if(str[i]>='A' && str[i]<='Z')
        {
            (*c)++;
        }
        else if(str[i]>='a' && str[i]<='z')
        {
            (*s)++;
        }
        else if(str[i]==' ')
        {
            (*sp)++;
        }
    }
}


int main()
{

    int i, c=0, s=0, sp=0;
    char str[1001];

    fgets(str, sizeof(str), stdin);

    count(str, &c, &s, &sp);

    printf("Capital - %d\n", c);
    printf("Small - %d\n", s);
    printf("Spaces - %d\n", sp);




    return 0;
}
