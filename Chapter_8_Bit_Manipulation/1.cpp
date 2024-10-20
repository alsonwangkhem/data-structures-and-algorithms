// Minimum Bit Flips to Convert Number

// Given two integers start and goal. Flip the minimum number of bits of start integer to convert it into goal integer.
// A bits flip in the number val is to choose any bit in binary representation of val and flipping it from either 0 to 1 or 1 to 0.

class Solution{   
public:    
    int minBitsFlip(int start, int goal) { 
        //Your code goes here
        int ans = start ^ goal;
        // now we just need to count the number of set bits
        int count = 0;
        while (ans != 0) {
            if (ans & 1) { // if the last bit is set
                count++;
            }
            ans = ans >> 1; // right shift to eliminate the last bit
        }
        return count;
    }
};