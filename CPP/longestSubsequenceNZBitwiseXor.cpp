class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int n = nums.size();
        int xr = 0;
        for(int i=0; i<n; i++)xr^=nums[i];
        if(xr!=0)return n;
        bool allZero = true;
        for (int x : nums) {
            if (x != 0) { allZero = false; break; }
        }

        if (allZero) return 0;
        return n - 1;
    }
};
