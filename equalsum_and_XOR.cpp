#include <bits/stdc++.h> 
using namespace std; 
  
// Defining ull to unsigned long long int 
typedef unsigned long long int ull; 
  
// Function to calculate power of 3 
ull calculate(int bit_cnt) 
{ 
    ull res = 1; 
    while (bit_cnt--) { 
        res = res * 3; 
    } 
  
    return res; 
} 
  
// Function to return the count of the 
// unset bit ( zeros ) 
int unset_bit_count(ull n) 
{ 
    int count = 0; 
    while (n) { 
  
        // Check the bit is 0 or not 
        if ((n & 1) == 0) 
            count++; 
        // Right shifting ( dividing by 2 ) 
        n = n >> 1; 
    } 
    return count; 
} 
  
// Driver Code 
int main() 
{ 
    ull n; 
    n = 2; 
  
    int count = unset_bit_count(n); 
  
    ull ans = calculate(count); 
  
    cout << ans << endl; 
  
    return 0; 
} 
