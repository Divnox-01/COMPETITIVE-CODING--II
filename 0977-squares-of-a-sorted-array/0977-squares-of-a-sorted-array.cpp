class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector <int>ans(n);
        int i = 0 ;
        int j = n-1;
        int k = n-1;

        while (i<=j)
        {
        int one = (nums[i] * nums[i]);
        int sec = (nums[j] * nums[j]);
            if (one >sec )
            {
            ans[k] = one ;
            i++;
            }
            else 
            {
                ans[k] = sec ;
                j--;
            }
         k--;
        }
        return ans ;
    }
};