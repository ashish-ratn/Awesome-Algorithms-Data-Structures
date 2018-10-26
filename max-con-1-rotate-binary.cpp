// C++ program to calculate maximum contiguous 
// ones in string 
#include <bits/stdc++.h> 
using namespace std; 
  
// function to calculate maximum contiguous ones 
int maxContiguousOnes(string s, int k) 
{ 
  
    int i, j, a, b, count; 
  
    // multiset is used to store frequency  of  
    // 1's of each portion of contiguous 1 in  
    // string in decreasing order 
    multiset<int, greater<int> > m; 
  
    // this loop calculate all the frequency 
    // and stores them in multiset 
    for (i = 0; i < s.length(); i++) { 
        if (s[i] == '1') { 
            count = 0; 
            j = i; 
            while (s[j] == '1' && j < s.length()) { 
                count++; 
                j++; 
            } 
            m.insert(count); 
            i = j - 1; 
        } 
    } 
  
    // if their is no 1 in string, then return 0 
    if (m.size() == 0) 
        return 0; 
  
    // calculates maximum contiguous 1's on 
    // doing rotations 
    while (k > 0 && m.size() != 1) { 
  
        // Delete largest two elements 
        a = *(m.begin());  
        m.erase(m.begin());  
        b = *(m.begin());  
        m.erase(m.begin());  
  
        // insert their sum back into the multiset 
        m.insert(a + b);  
        k--; 
    } 
  
    // return maximum contiguous ones  
    // possible after k rotations 
    return *(m.begin()); 
} 
  
// Driver code 
int main() 
{ 
    string s = "10011110011"; 
    int k = 1; 
    cout << maxContiguousOnes(s, k); 
    return 0; 
} 

