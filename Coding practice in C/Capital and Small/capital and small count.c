/*
Problem Statement:
You will be given a string S. The string will contain both small and capital English alphabets only. You need to tell how many of them are capital alphabets and how many are small alphabets.

Input Format:
Input will contain only S.

Constraints:
1 <= |S| <= 1000; Here |S| means the length of S.

Output Format:
Output the count of capital alphabets first, then the count of small alphabets

Sample Input 0:
tHeBRoWnFoX

Sample Output 0:
6 5

Sample Input 1:
MADAM

Sample Output 1:
5 0

Sample Input 2:
hello

Sample Output 2:
0 5
*/

#include<stdio.h>
#include<string.h>
int main()
{
    char ch[1001];
    int i, small=0, capital=0;

    scanf("%s", &ch);

    for(i=0; i<strlen(ch); i++){
        if(ch[i]>=97 && ch[i]<=122){
            small++;
        }
        else if(ch[i]>=65 && ch[i]<=90){
            capital++;
        }
    }
    printf("%d %d\n", capital, small);

    return 0;
}
