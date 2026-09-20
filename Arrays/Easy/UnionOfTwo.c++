#include <iostream>
using namespace std;

void PrintArray(int arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int UnionArray(int arr1[], int n, int arr2[], int m, int ans[])
{
    int i = 0;
    int j = 0;
    int k = 0;

    while(i < n && j < m)
    {
        if(arr1[i] < arr2[j])
        {
            ans[k] = arr1[i];
            k++;
            i++;
        }
        else if(arr2[j] < arr1[i])
        {
            ans[k] = arr2[j];
            k++;
            j++;
        }
        else
        {
            ans[k] = arr1[i];
            k++;
            i++;
            j++;
        }
    }

    while(i < n)
    {
        ans[k] = arr1[i];
        k++;
        i++;
    }

    while(j < m)
    {
        ans[k] = arr2[j];
        k++;
        j++;
    }

    return k;
}

int main()
{
    int arr1[] = {1, 2, 3, 4};
    int arr2[] = {2, 3, 5, 6};

    int n = sizeof(arr1) / sizeof(int);
    int m = sizeof(arr2) / sizeof(int);

    int ans[n+m];

    int size = UnionArray(arr1, n, arr2, m, ans);

    PrintArray(ans, size);

    return 0;
}