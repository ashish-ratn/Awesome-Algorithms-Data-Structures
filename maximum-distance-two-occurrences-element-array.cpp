// C++ program to find maximum distance between two 
// same occurrences of a number. 
#include<bits/stdc++.h> 
using namespace std; 
  
// Function to find maximum distance between equal elements 
int maxDistance(int arr[], int n) 
{ 
    // Used to store element to first index mapping 
    unordered_map<int, int> mp; 
  
    // Traverse elements and find maximum distance between 
    // same occurrences with the help of map. 
    int max_dist = 0; 
    for (int i=0; i<n; i++) 
    { 
        // If this is first occurrence of element, insert its 
        // index in map 
        if (mp.find(arr[i]) == mp.end()) 
            mp[arr[i]] = i; 
  
        // Else update max distance 
        else
            max_dist = max(max_dist, i - mp[arr[i]]); 
    } 
  
    return max_dist; 
} 
  
// Driver program to run the case 
int main() 
{ 
    int arr[] = {3, 2, 1, 2, 1, 4, 5, 8, 6, 7, 4, 2}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    cout << maxDistance(arr, n); 
    return 0; 
} 
