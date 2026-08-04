class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int min = *min_element(nums.begin(),nums.end());
        int max = *max_element(nums.begin(),nums.end());
        
        unordered_set<int> u(nums.begin(),nums.end());
        vector<int> ans;

        for(int i = min; i <= max; i++){
            if(u.find(i) == u.end()){
                ans.push_back(i);
            }
        }

        return ans;
    }
};