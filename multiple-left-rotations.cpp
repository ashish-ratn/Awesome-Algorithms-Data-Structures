
// CPP implementation of left rotation of 
// an array K number of times 
#include<bits/stdc++.h> 
using namespace std; 
  
// Fills temp[] with two copies of arr[] 
void preprocess(int arr[], int n, int temp[]) 
{ 
    // Store arr[] elements at i and i + n 
    for (int i = 0; i<n; i++) 
         temp[i] = temp[i + n] = arr[i]; 
} 
  
// Function to left rotate an array k times 
void leftRotate(int arr[], int n, int k, int temp[]) 
{ 
    // Starting position of array after k 
    // rotations in temp[] will be k % n 
    int start = k % n; 
  
    // Print array after k rotations 
    for (int i = start; i < start + n; i++) 
         cout << temp[i] << " "; 
  
    cout << endl; 
} 
  
// Driver program 
int main() 
{ 
    int arr[] = {1, 3, 5, 7, 9}; 
    int n = sizeof(arr) / sizeof(arr[0]); 
  
    int temp[2*n]; 
    preprocess(arr, n, temp); 
  
    int k = 2; 
    leftRotate(arr, n, k, temp); 
  
    k = 3; 
    leftRotate(arr, n, k, temp); 
  
    k = 4; 
    leftRotate(arr, n, k, temp); 
  
    return 0; 
} 
