class Solution {
public:
    int findGCD(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int x = nums[0];
        int y = nums[n-1];
        int gcd = 0;
        for ( int i = 1; i <= nums[n-1]; i++ ){
            if (x % i == 0 && y % i == 0 ){
                gcd = i;
            }
        }
        return gcd;
    }
};