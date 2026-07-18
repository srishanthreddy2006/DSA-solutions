class Solution {
public:
    int findGCD(vector<int>& nums) {
        int n = nums.size();
        int min = 10001, max = 0;
        for (int i = 0; i< n; i++){
            if(nums[i] < min) min = nums[i];
            if(nums[i] > max) max = nums[i];


        }
        return gcd(min,max);
    }
};