#include<iostream>
// using template function to print array
template<typename T>
void BubbleSort(T arr[], int n)// n - size of arr
{
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                T cur = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = cur;
            }
        }
    }
}

// using template function to print array
template<typename T>
void PrintArray(T arr[], int n)// n - size of arr[]
{
    for (int i = 0; i < n; ++i)
        std::cout << arr[i] << " ";
    std::cout << "\n";
}

int main()
{

    int arr[] = { 9, 45, 59, 7, 12, 411, -9, 14, 3, 8, -5, 17 };//create array
    int n = sizeof(arr) / sizeof(int);
    BubbleSort(arr, n);

    std::cout << "Sorting array: " << std::endl;
    PrintArray(arr, n);
}