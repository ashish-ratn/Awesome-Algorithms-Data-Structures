// CPP Program to solve queries on Left and Right  
// Circular shift on array 
#include <bits/stdc++.h> 
using namespace std; 
  
// Function to solve query of type 1 x. 
void querytype1(int* toRotate, int times, int n) 
{ 
    // Decreasing the absolute rotation 
    (*toRotate) = ((*toRotate) - times) % n; 
} 
  
// Function to solve query of type 2 y. 
void querytype2(int* toRotate, int times, int n) 
{ 
    // Increasing the absolute rotation. 
    (*toRotate) = ((*toRotate) + times) % n; 
} 
  
// Function to solve queries of type 3 l r. 
void querytype3(int toRotate, int l, int r,  
                      int preSum[], int n) 
{ 
    // Finding absolute l and r. 
    l = (l + toRotate + n) % n; 
    r = (r + toRotate + n) % n; 
  
    // if l is before r. 
    if (l <= r)  
        cout << (preSum[r + 1] - preSum[l]) << endl;     
  
    // If r is before l. 
    else 
        cout << (preSum[n] + preSum[r + 1] - preSum[l]) 
             << endl;     
} 
  
// Wrapper Function solve all queries. 
void wrapper(int a[], int n) 
{ 
    int preSum[n + 1]; 
    preSum[0] = 0; 
  
    // Finding Prefix sum 
    for (int i = 1; i <= n; i++) 
        preSum[i] = preSum[i - 1] + a[i - 1]; 
  
    int toRotate = 0; 
  
    // Solving each query 
    querytype1(&toRotate, 3, n); 
    querytype3(toRotate, 0, 2, preSum, n); 
    querytype2(&toRotate, 1, n); 
    querytype3(toRotate, 1, 4, preSum, n); 
} 
  
// Driver Program 
int main() 
{ 
    int a[] = { 1, 2, 3, 4, 5 }; 
    int n = sizeof(a) / sizeof(a[0]); 
    wrapper(a, n); 
    return 0; 
} 

