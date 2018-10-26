// C++ program to find max value of i*arr[i] 
#include <iostream> 
using namespace std; 
  
// Returns max possible value of i*arr[i] 
int maxSum(int arr[], int n) 
{ 
    // Find array sum and i*arr[i] with no rotation 
    int arrSum = 0;  // Stores sum of arr[i] 
    int currVal = 0;  // Stores sum of i*arr[i] 
    for (int i=0; i<n; i++) 
    { 
        arrSum = arrSum + arr[i]; 
        currVal = currVal+(i*arr[i]); 
    } 
  
    // Initialize result as 0 rotation sum 
    int maxVal = currVal; 
  
    // Try all rotations one by one and find 
    // the maximum rotation sum. 
    for (int j=1; j<n; j++) 
    { 
        currVal = currVal + arrSum-n*arr[n-j]; 
        if (currVal > maxVal) 
            maxVal = currVal; 
    } 
  
    // Return result 
    return maxVal; 
} 
  
// Driver program 
int main(void) 
{ 
    int arr[] = {10, 1, 2, 3, 4, 5, 6, 7, 8, 9}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    cout << "\nMax sum is " << maxSum(arr, n); 
    return 0; 
} 

