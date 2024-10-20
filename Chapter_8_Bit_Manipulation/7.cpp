// xor of numbers in range

class Solution{	
	private:
		int xorTillN(int n) {
			if (n%4 == 1) return 1;
			if (n%4 == 2) return n+1;
			if (n%4 == 3) return 0;
			return n;
		}
	public:
		int findRangeXOR(int l,int r){
			//your code goes here
			// time O(r-l)
			// int ans = l;
			// for (int i = l+1; i<=r; i++) {
			// 	ans = ans ^ i;
			// }
			// return ans;
			// n%4 == 1, ans is 1 ie, if n is 1, 5, 9 (in steps of 4)
			// n%4 == 2, ans is n+1, ie, if n is 2, 6, 10 (in steps of 4)
			// n%4 == 3, ans is 0, ie, if n is 3, 7, 11 (in steps of 4)
			// n%4 == 0, ans is n, ie, if n is a multiple of 4
			return xorTillN(l-1)^xorTillN(r);
		}
};