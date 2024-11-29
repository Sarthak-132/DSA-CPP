// Number of 1 bits 

// Given a positive integer n, write a function that returns the number of 
// set bits in its binary representation (also known as the Hamming weight).

// suppose int a = 8; it's binary represantation 1000 (so number of 1 bit is = 1)
// or int b = 5; binary represantation 101 (so number of 1 bit is = 2)

// Given an integer number n, return the difference between the product of its digits and the sum of its digits.
// Example 1:
// Input: n = 234
// Output: 15 
// Explanation: 
// Product of digits = 2 * 3 * 4 = 24 
// Sum of digits = 2 + 3 + 4 = 9 
// Result = 24 - 9 = 15

class Solution {
public:
    int count = 0;
    int hammingWeight(int n) {
        while(n!=0){
            if(n&1){
                count++;
            }
            n = n>>1;
        }
        return count;
    }
};
