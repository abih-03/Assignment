// Write a program of to sort the array using templates.

#include <iostream>
using namespace std;

template <typename T>
void bubbleSort(T arr[], int n)
{
    for (int i = 0; i < n - 1; i++) 
    {
        for (int j = 0; j < n - i - 1; j++) 
        {
            if (arr[j] > arr[j + 1]) 
            {
                T temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

template <typename T>
void printArray(T arr[], int n) 
{
    for (int i = 0; i < n; i++) 
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int intArray[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(intArray) / sizeof(intArray[0]);
    cout << "Unsorted integer array: ";
    printArray(intArray, n);

    bubbleSort(intArray, n);
    cout << "Sorted integer array: ";
    printArray(intArray, n);

    double doubleArray[] = {64.5, 34.2, 25.1, 12.3, 22.4, 11.6, 90.7};
    int m = sizeof(doubleArray) / sizeof(doubleArray[0]);
    cout << "Unsorted double array: ";
    printArray(doubleArray, m);

    bubbleSort(doubleArray, m);
    cout << "Sorted double array: ";
    printArray(doubleArray, m);
}
