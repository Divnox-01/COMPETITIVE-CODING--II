class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        int prev1= 0 ;
        int  prev2 = 0 ;
        int left = 0 ;
     //  int   right = INT_MAX;
          for (int i = 2 ; i<=n ;i++)
          {
            left = prev1 + cost[i-1] ;
             int   right = INT_MAX;
             if (i>1)
             {
                 right = prev2 +  cost[i-2] ;
             }
             int curr = min(left,right);
             prev2 = prev1 ;
             prev1= curr ;
          }
          return prev1;
    }
};