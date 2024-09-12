#include <iostream>
using namespace std;
//1. Declare and Initialise an array in C++
//Array Declaration 
int main()
{
int arr[4];

//Initialize Array with Values in C++
int arr[4] = {1, 2, 3, 4};

    return 0;
}

//2. Initialize a TWO-Dimentional array in C++
int main()
{
int A[3][4] = {
               {8, 2, 6, 5},   // row 0
		       {6, 3, 1, 0},  // row 1
		       {8, 7, 9, 6}  // row 2
               }; 
}

//3. Transversing an array C++ using for loop
void printArray(int* arr, int n)
{
int i;
 
    cout << "Array: ";
    for (i = 0; i < n; i++) 
    {
        cout << arr[i] << "  ";
    }
}
 
// Driver code
int main()
{
    int arr[] = {2, -1, 5, 6, 0, -3};
    int n = sizeof(arr) / sizeof(arr[0]);
 
    printArray(arr, n);
}

//4. Concatenate Two int Arrays into one Larger array
void concatenate(int* arr1, int* arr2, int n, int m) 
{ 
    int k = n + m; 
    // Made Array of size equal to the size of first Array + 
    // Size of second Array 
    int arr3[k]; 
    // Copy element of first array into the larger array 
    for (int i = 0; i < n; i++) { 
        arr3[i] = arr1[i]; 
    } 
    // Copy element of second array into the larger array 
    for (int i = 0; i < m; i++) { 
        arr3[n + i] = arr2[i]; 
    } 
    // Printing element of larger array 
    for (int i = 0; i < k; i++) { 
        cout << arr3[i] << " "; 
    } 
} 
// Driver Code 
int main() 
{ 
    int arr1[] = { 1, 2, 3, 4, 5 }; 
    int arr2[] = { 6, 7, 8, 9, 10, 11, 12, 13, 14 }; 
  
    // Size of first array 
    int n = sizeof(arr1) / sizeof(arr1[0]); 
  
    // Size of second array 
    int m = sizeof(arr2) / sizeof(arr2[0]); 
  
    concatenate(arr1, arr2, n, m);
    return 0;
}