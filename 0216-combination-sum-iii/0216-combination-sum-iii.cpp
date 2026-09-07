class Solution {
public:
vector<vector<int>> ans;
    void solve(int k , int target, int index,
               vector<int>& current ) {
     if  (current.size()==k){
        if (target == 0) {
            ans.push_back(current);
            return;
        }
     }

        for (int i = index; i <= 9; i++) {

            if (i > target)
                break;

            current.push_back(i);
            solve(k, target - i, i + 1, current);

            current.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector <int> current ;
       solve (k ,n,1,current);
       return ans;
    }
};