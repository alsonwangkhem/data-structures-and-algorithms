// Assign cookies
// Consider a scenario where a teacher wants to distribute cookies to students, with each student receiving at most one cookie.
// Given two arrays, Student and Cookie, the ith value in the Student array describes the minimum size of cookie that the ith student can be assigned. The jth value in the Cookie array represents the size of the jth cookie. If Cookie[j] >= Student[i], the jth cookie can be assigned to the ith student. Maximize the number of students assigned with cookies and output the maximum number.
#include<bits/stdc++.h>
using namespace std;

class Solution{    
    public:
    int findMaximumCookieStudents(vector<int>& Student, vector<int>& Cookie){
        //your code goes here
        int n = Student.size();
        int m = Cookie.size();
        int l = 0, r = 0;
        sort(Student.begin(), Student.end());
        sort(Cookie.begin(), Cookie.end());
        while (l < n && r < m) {
            if (Cookie[r] >= Student[l]) {
                l++;
            }
            r++;
        }
        return l;
    }
};