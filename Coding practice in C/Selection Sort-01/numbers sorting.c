/*
Given a number N and an array A of N numbers. Print the numbers after sorting them.

Note:
Don't use built-in-functions.
try to solve it with bubble sort algorithm or Selection Sort.
for more information watch : https://www.youtube.com/watch?v=EnodMqJuQEo.

Input:
First line contains a number N (0 < N < 103) number of elements.

Second line contains N numbers ( - 100 ≤ Ai ≤ 100).

Output:
Print the numbers after sorting them.

Examples:
input:
3
3 1 2

output:
1 2 3

input:
4
5 2 7 3

output:
2 3 5 7
*/


#include<stdio.h>
int main()
{
    int n, i, j, temp;
    scanf("%d", &n);
    int arr[n];

    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i=0; i<n-1; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(arr[i]>arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for(i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }


    return 0;
}
