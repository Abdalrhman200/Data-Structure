#include <iostream>
using namespace std;

int search(int arr[], int n, int key)
{
    int i;
    for (i = 0; i < n; i++)
        if (arr[i] == key)
            return i;

    return -1;
}

int main()
{
    int arr[] = { 11,13,15,49.18,7 };
    int n = sizeof(arr) / sizeof(arr[0]);

    int key = 29;

    int position = search(arr, n, key);

    if (position == -1)
        cout << "Element not Found!";
    else
        cout << "Element Found at Position: "
        << position + 1;

    return 0;
}