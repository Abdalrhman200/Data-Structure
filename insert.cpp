#include <iostream>
using namespace std;
 
int insert(int arr[], int n, int key, int size)
{
 
  
  
    if (n >= size)
        return n;
 
    arr[n] = key;
 
    return (n + 1);
}
 
int main()
{
    int x = 15;
    int arr[x] = { 11,13,15,49.18,7 };
    int n = 7;
    int key = 29;
 
    cout << "\n Before Insertion: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
 
    n = insert(arr, n, key, sizeof(arr) / sizeof(arr[0]));
 
    cout << "\n After Insertion: ";
    for (int j = 0; j < n; j++)
        cout << arr[j] << " ";
 
    return 0;
}