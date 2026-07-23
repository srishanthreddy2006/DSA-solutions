class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num == 0 || num == 1) return true;
        int f = 1;
        int l = num;
        while(f <= l){
            long long mid = f + (l-f) / 2;
            long long sq = mid * mid;

            if(sq == num) return true;
            else if(sq > num) l = mid-1;
            else f = mid + 1;
        }
        return false;
    }
};