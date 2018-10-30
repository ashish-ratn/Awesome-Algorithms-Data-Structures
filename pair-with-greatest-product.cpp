
// C++ program to find a pair with product 
// in given array. 
#include<bits/stdc++.h> 
using namespace std; 
  
// Function to find greatest number that us 
int findGreatest( int arr[] , int n) 
{ 
    int result = -1; 
    for (int i = 0; i < n ; i++) 
        for (int j = 0; j < n-1; j++) 
            for (int k = j+1 ; k < n  ; k++) 
                if (arr[j] * arr[k] == arr[i]) 
                    result = max(result, arr[i]); 
    return result; 
} 
  
// Driver code 
int main() 
{ 
    // Your C++ Code 
    int arr[] = {30, 10, 9, 3, 35}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
  
    cout << findGreatest(arr, n); 
  
    return 0; 
} 
