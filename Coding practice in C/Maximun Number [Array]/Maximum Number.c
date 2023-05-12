
#include <stdio.h>

int main()
{
    int n, i;
    scanf("%d", &n);
    int arr[n];

    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int max = arr[0];

    for(i=0; i<n; i++)
    {
        if(i == n-1)
        {
            break;
        }

        if(max <= arr[i+1])
        {
            max = arr[i+1];
        }
    }
    printf("%d", max);

    return 0;
}




// Take an input by users which is the size of array. Then input the numbers and put them the array.
// At first we set the 1st index value as a maximum value. Now we continue a loop and check it with the other values which is greater and set the greater value as a maximum value.
// Finally Print the maximum value.
