// Divide two numbers without multiplication and division

// Given the two integers, dividend and divisor. Divide without using the mod, division, or multiplication operators and return the quotient.

// The fractional portion of the integer division should be lost as it truncates toward zero.

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int divide(int dividend, int divisor) {
        //your code goes here
        // brute add up from 0 till dividend 
        // optimal - bit manipulation
        // logN for outer loop and logN for inner loop approx
        // time O(logN)^2 and space O(1)
        if (dividend == divisor) return 1;
        bool sign = true;
        if (dividend < 0 && divisor > 0) sign = false;
        if (dividend >= 0 && divisor < 0) sign = false;
        long n = abs(dividend);
        long d = abs(divisor);
        int answer = 0;
        while (n >= d) {
            int count = 0;
            while (n >= (d << (count+1))) {
                count++;
            }
            answer += 1<<count;
            n -= d*(1<<count);
        }
        if (answer > INT_MAX && sign== false) {
            return INT_MIN;
        } else if (answer > INT_MAX && sign == true) {
            return INT_MAX;
        }
        return sign? answer : (-1*answer);
    }
};