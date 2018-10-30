
// C++ implementation of simple method to find count of 
// pairs with given sum. 
#include <bits/stdc++.h> 
using namespace std; 
  
// Returns number of pairs in arr[0..n-1] with sum equal 
// to 'sum' 
int getPairsCount(int arr[], int n, int sum) 
{ 
    int count = 0; // Initialize result 
  
    // Consider all possible pairs and check their sums 
    for (int i=0; i<n; i++) 
        for (int j=i+1; j<n; j++) 
            if (arr[i]+arr[j] == sum) 
                count++; 
  
    return count; 
} 
  
// Driver function to test the above function 
int main() 
{ 
    int arr[] = {1, 5, 7, -1, 5} ; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    int sum = 6; 
    cout << "Count of pairs is " 
         << getPairsCount(arr, n, sum); 
    return 0; 
} 
