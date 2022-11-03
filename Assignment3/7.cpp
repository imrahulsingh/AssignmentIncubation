// Write a program to a accept a list of N integers. Find the largest and the smallest number in the list and their respective positions in the list.
#include<iostream>
using namespace std;
int main ()
{
    int arr[10], n, i, max, min;
    cout << "Enter the size of the list : ";
    cin >> n;
    cout << "Enter the elements of the list : ";
    for (i = 0; i < n; i++)
        cin >> arr[i];
    max = arr[0];
    for (i = 0; i < n; i++)
    {
        if (max < arr[i])
            max = arr[i];
    }
    min = arr[0];
    for (i = 0; i < n; i++)
    {
        if (min > arr[i])
            min = arr[i];
    }
    cout << "Largest element : " << max;
    cout << "\n Smallest element : " << min;
    return 0;
}