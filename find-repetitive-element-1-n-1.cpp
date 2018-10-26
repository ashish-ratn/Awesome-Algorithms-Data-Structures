
// CPP program to find the only repeating 
// element in an array where elements are 
// from 1 to n-1. 
#include <bits/stdc++.h> 
using namespace std; 
  
int findRepeating(int arr[], int n) 
{ 
   unordered_set<int> s; 
   for (int i=0; i<n; i++) 
   { 
      if (s.find(arr[i]) != s.end()) 
         return arr[i]; 
      s.insert(arr[i]); 
   } 
     
   // If input is correct, we should  
   // never reach here 
   return -1; 
} 
  
// driver code 
int main() 
{    
    int arr[] = { 9, 8, 2, 6, 1, 8, 5, 3, 4, 7 }; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    cout << findRepeating(arr, n); 
    return 0; 
} 
