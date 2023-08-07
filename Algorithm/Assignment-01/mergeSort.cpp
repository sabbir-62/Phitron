#include<bits/stdc++.h>
using namespace std;


void mergeSort(int arr[], int left, int mid, int right)
{
    int n1 = mid - left + 1;
    int n2 = right - mid;

    int leftArr[n1], rightArr[n2];

    for(int i = 0; i < n1; i++)
    {
        leftArr[i] = arr[left + i];
    }

    for(int j = 0; j < n2; j++)
    {
        rightArr[j] = arr[mid + 1 + j];
    }

    int i = 0, j = 0, k = left;

    while(i < n1 && j < n2)
    {
        if(leftArr[i] >= rightArr[j])
        {
            arr[k] = leftArr[i];
            i++;
        }
        else
        {
            arr[k] = rightArr[j];
            j++;
        }
        k++;
    }

    while(i < n1)
    {
        arr[k] = leftArr[i];
        i++;
        k++;
    }

    while(j < n2)
    {
        arr[k] = rightArr[j];
        j++;
        k++;
    }
}


void divideArr(int arr[], int left, int right)
{

    if(left >= right)
    {
        return;
    }
    else
    {
        int mid = left + (right - left) / 2;

        divideArr(arr, left, mid);
        divideArr(arr, mid + 1, right);

        mergeSort(arr, left, mid, right);
    }
}

int main()
{
    int n;
    cin >> n;
    int numbers[n];

    for (int i = 0; i < n; i++)
    {
        cin >> numbers[i];
    }

    divideArr(numbers, 0, n - 1);

    for(int i = 0; i < n; i++)
    {
        cout << numbers[i] << " ";
    }

    cout << endl;

    return 0;
}
