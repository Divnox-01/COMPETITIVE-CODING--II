class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
       int low = 0 ;
       int sum = 0 ;
        int targetsize = INT_MAX;
        for (int high = 0 ; high <nums.size(); high ++)
        {
            sum += nums[high];
            while (sum >= target )
            {
              targetsize = min(targetsize , high - low + 1);

              sum -= nums[low];
              low ++;

            }
        }
            if  (targetsize == INT_MAX)
            {
                 return 0 ;
            }
            

        
        return targetsize;
    }
};