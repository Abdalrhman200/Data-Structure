#include <iostream>
using namespace std;

int FindElement(int arr[], int n, int key);
int DeleteElement(int arr[], int n, int key)
{
    int pos = FindElement(arr, n, key);
    if (pos == -1) {
        cout << "Element not found";
        return n;
    }
    int i;
    for (i = pos; i < n - 1; i++)
        arr[i] = arr[i + 1];
    return n - 1;
}

int FindElement(int arr[], int n, int key)
{
    int i;
    for (i = 0; i < n; i++)
        if (arr[i] == key)
            return i;
    return -1;
}

int main()
{
    int i;
    int arr[] = { 11,13,15,49.18,7 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 29;
    cout << "before deletion\n";
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
    n = DeleteElement(arr, n, key);
    cout << "\n After deletion\n";
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}