class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
       vector<vector<int>> result;
       sort(nums.begin(), nums.end()); 
       for (int first = 0; first < n - 3; first++) {
           if (first > 0 && nums[first] == nums[first - 1]) continue; 


           for (int second = first + 1; second < n - 2; second++) {
               if (second > first + 1 && nums[second] == nums[second - 1]) continue; 

               long long remainingTarget = (long long)target - nums[first] - nums[second];
               int left = second + 1, right = n - 1;


               while (left < right) {
                   int sum = nums[left] + nums[right];


                   if (sum < remainingTarget) {
                       left++; 
                   } else if (sum > remainingTarget) {
                       right--; 
                   } else {
                       result.push_back({nums[first], nums[second], nums[left], nums[right]});


                       int prevLeft = nums[left], prevRight = nums[right];
                       while (left < right && nums[left] == prevLeft) left++;
                       while (left < right && nums[right] == prevRight) right--;
                   }
               }
           }
       }
       return result;
   }
};