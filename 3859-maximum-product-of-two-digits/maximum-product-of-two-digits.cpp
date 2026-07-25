class Solution {
public:
    int maxProduct(int n) {
        // int max1 = 0, max2 = 0;

        // while(n != 0){
        //     int d = n % 10;
        //     if(d > max1){
        //         max2 = max1;
        //         max1 = d;
        //     }
        //     else if(d > max2){
        //         max2 = d;
        //     }
        //     n = n / 10;
        // }
        // return max1 * max2;
        vector<int> ans;

        while(n != 0){
            ans.push_back(n%10);
            n = n/10;
        } 

        sort(ans.begin(),ans.end());

        return ans[ans.size()-1] * ans[ans.size()-2];
    }
};