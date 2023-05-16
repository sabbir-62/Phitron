/*
Problem Statement:
There are N army people standing in a line. Their major ordered them to make a line in asceding order according to their age. And then the major called the person stading in the middle. If there are two people in the middle then he will call both of them. Can you tell the age of the middle man or men?

Note: If N is odd then the middle person will be (N+1)/2 otherwise there will be two person in the middle, and they are (N/2) and (N/2)+1.

Input Format:
First line will contain N, the number of army people.
Second line will contain N number which are the ages of those people.

Constraints:
1 <= N <= 100
0 <= Age <= 1000

Output Format:
Output the age or ages of the middle man or men.

Sample Input 0:
6
20 30 10 50 40 60

Sample Output 0:
30 40

Explanation 0:
After sorting in ascending order, the ages will look like -> 10 20 30 40 50 60
Here there are two values in the middle which are 30 and 40.

Sample Input 1:
5
40 20 50 10 30

Sample Output 1:
30

Explanation 1:
After sorting in ascending order, the ages will look like -> 10 20 30 40 50.
Here the age in the middle is 30.
*/


#include<stdio.h>
int* sort(int arr[], int n)
{
    int i, temp;
    for(i=0; i<n-1; i++){
       for(int j=i+1; j<n; j++){
         if(arr[i]>arr[j]){
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
       }
    }

    return arr;

}

int main()
{

    int n, i;
    scanf("%d", &n);
    int arr[n];

    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int* sortedData = sort(arr, n);

    if(n%2==0){
        int mid1 = n/2;
        int mid2 = (n/2) + 1;
        printf("%d %d", sortedData[mid1-1], sortedData[mid2-1]);
    }
     else{
        int mid3 = (n+1) / 2;
        printf("%d", sortedData[mid3-1]);
    }



    return 0;
}
