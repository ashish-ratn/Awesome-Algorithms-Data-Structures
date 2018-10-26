
// C++ program to Generating numbers that  
// are divisor of their right-rotations  
  
#include <bits/stdc++.h> 
using namespace std; 
  
    
// Function to check if N is a  
// divisor of its right-rotation  
  
bool rightRotationDivisor(int N) 
{ 
    int lastDigit = N % 10; 
    int rightRotation = (lastDigit * pow(10 ,int(log10(N))))  
                    + floor(N / 10);  
    return (rightRotation % N == 0); 
} 
    
// Function to generate m-digit  
// numbers which are divisor of  
// their right-rotation  
void generateNumbers(int m) 
{ 
    for (int i=pow(10,(m - 1));i<pow(10 , m);i++)  
        if (rightRotationDivisor(i)) 
            cout<<i<<endl; 
 } 
   
// Driver code  
int main() 
{ 
int m = 3; 
generateNumbers(m); 
} 
