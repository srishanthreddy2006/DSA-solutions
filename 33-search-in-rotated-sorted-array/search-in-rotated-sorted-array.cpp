class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int first = 0,last = n-1;
        while(first <= last){
            int mid = first + (last-first) / 2;
            if ( nums[mid] == target ){
                return mid;
            }
            if(nums[mid] >= nums[first]){
                if(nums[mid] > target && nums[first] <= target){
                    last = mid-1;
                }
                else{
                    first = mid+1;
                }
            }
            else{
                if(nums[mid] < target && nums[last] >= target){
                    first = mid+1;

                }
                else{
                    last = mid - 1;
                }
            }
        }
        return -1;
    }
};