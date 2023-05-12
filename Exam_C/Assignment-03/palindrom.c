

#include <stdio.h>
#include <string.h>


int is_palindrome(char string[])
{


    int i, flag=0, length = strlen(string);


    for(i=0; i < length ; i++)
    {
        if(string[i] != string[length-i-1])
        {
            flag = 1;
            break;
        }
    }
    return flag;


}


int main()
{
    int result;
    char string[10];


    printf("Enter a string: ");
    gets(string);


    result = is_palindrome(string);


    if (result)
    {
        printf("Not Palindrome");
    }
    else
    {
        printf("Palindrome");
    }


    return 0;
}
