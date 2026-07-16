class Solution {
public:
    bool isPalindrome(string s) {
        string ans;

        for(char c : s){
            if(isalnum(c)){
                ans += tolower(c);
            }
        }
        int first = 0;
        int last = ans.size()-1;


        while(first < last){
            if(ans[first] != ans[last]){
                return false;
            }
            first++;
            last--;
        }
        return true;
    }
};