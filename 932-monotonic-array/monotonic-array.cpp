class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int n = nums.size();
        if ( n == 1){
            return true;
        }
        bool flag1 = true;
        bool flag2 = true;
        for(int i = 1; i < n; i++){
            if(!flag1 && !flag2){
                return false;
            }
            if( nums[i] < nums[i-1]){
                flag1 = false;
            }
            if (nums[i] > nums[i-1]){
                flag2 = false;
            }
            
        }
            return flag1 || flag2 ;
    }
};