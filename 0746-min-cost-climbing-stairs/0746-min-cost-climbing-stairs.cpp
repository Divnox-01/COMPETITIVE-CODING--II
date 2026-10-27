class Solution {
public:
int solve(int n , vector<int>&dp,vector<int>&cost)
{
    if(n >= cost.size()) return 0 ;
    if(dp[n]!= -1) return dp[n] ;
dp[n] = cost[n] + min( solve(n+1 , dp,cost) ,solve(n+2,dp,cost)) ;
return dp[n] ;
}
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        vector <int>dp(n,-1);
      return min(  solve(0 , dp ,cost) , solve(1, dp,cost)) ;
    }
};