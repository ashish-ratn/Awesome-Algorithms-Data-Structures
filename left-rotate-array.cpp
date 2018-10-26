
// CPP implementation of left rotation of 
// an array K number of times 
#include <bits/stdc++.h> 
using namespace std; 
  
// Function to leftRotate array multiple times 
void leftRotate(int arr[], int n, int k) 
{ 
    /* To get the starting point of rotated array */
    int mod = k % n; 
  
    // Prints the rotated array from start position 
    for (int i = 0; i < n; i++) 
        cout << (arr[(mod + i) % n]) << " "; 
  
    cout << "\n"; 
} 
  
// Driver program 
int main() 
{ 
    int arr[] = { 1, 3, 5, 7, 9 }; 
    int n = sizeof(arr) / sizeof(arr[0]); 
  
    int k = 2; 
    leftRotate(arr, n, k); 
  
    k = 3; 
    leftRotate(arr, n, k); 
  
    k = 4; 
    leftRotate(arr, n, k); 
  
    return 0; 
} 

