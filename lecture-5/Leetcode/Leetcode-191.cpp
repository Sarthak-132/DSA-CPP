// Number of 1 bits 

// Given a positive integer n, write a function that returns the number of 
// set bits in its binary representation (also known as the Hamming weight).

// suppose int a = 8; it's binary represantation 1000 (so number of 1 bit is = 1)
// or int b = 5; binary represantation 101 (so number of 1 bit is = 2)


// Given a positive integer n, write a function that returns the number of 
// set bits
//  in its binary representation (also known as the Hamming weight).


// Example 1:

// Input: n = 11

// Output: 3

// Explanation:

// The input binary string 1011 has a total of three set bits.


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
