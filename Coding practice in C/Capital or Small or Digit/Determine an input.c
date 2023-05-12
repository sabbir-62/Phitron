
#include <stdio.h>

int main()
{
    char x;
    scanf("%c", &x);

    if(x >= 48 && x <= 57){
        printf("IS DIGIT\n");
    }

    else if(x >= 65 && x <= 91){
        printf("ALPHA\nIS CAPITAL");
    }

    else if(x >= 97 && x <= 123){
        printf("ALPHA\nIS SMALL");
    }

    return 0;
}




// We can determine the given input is Capital letter or Small letter Or a digit
