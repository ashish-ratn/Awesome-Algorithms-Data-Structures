
// Simple CPP program to find first non- 
// repeating element. 
#include <bits/stdc++.h> 
using namespace std; 
  
int firstNonRepeating(int arr[], int n) 
{ 
    for (int i = 0; i < n; i++) { 
        int j; 
        for (j=0; j<n; j++) 
            if (i != j && arr[i] == arr[j]) 
                break; 
        if (j == n) 
            return arr[i]; 
    } 
    return -1; 
} 
  
// Driver code 
int main() 
{ 
    int arr[] = { 9, 4, 9, 6, 7, 4 }; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    cout << firstNonRepeating(arr, n); 
    return 0; 
} 
