
// A C++ program to generate palindromic numbers 
// less than n. 
#include <iostream> 
using namespace std; 
  
// A utility for creating palindrome 
int createPalindrome(int input, int b, bool isOdd) 
{ 
    int n = input; 
    int palin = input; 
  
    // checks if number of digits is odd or even 
    // if odd then neglect the last digit of input in 
    // finding reverse as in case of odd number of 
    // digits middle element occur once 
    if (isOdd) 
        n /= b; 
  
    // Creates palindrome by just appending reverse 
    // of number to itself 
    while (n > 0) 
    { 
        palin = palin * b + (n % b); 
        n /= b; 
    } 
    return palin; 
} 
  
// Function to print decimal palindromic number 
void generatePalindromes(int n) 
{ 
    int number; 
  
    // Run two times for odd and even length palindromes 
    for (int j = 0; j < 2; j++) 
    { 
        // Creates palindrome numbers with first half as i.  
        // Value of j decided whether we need an odd length 
        // of even length palindrome. 
        int i = 1; 
        while ((number = createPalindrome(i, 10, j % 2)) < n) 
        { 
            cout << number << " "; 
            i++; 
        } 
    } 
} 
  
// Driver Program to test above function 
int main() 
{ 
    int n = 104; 
    generatePalindromes(n); 
    return 0; 
} 
