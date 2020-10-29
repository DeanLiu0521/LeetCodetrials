class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        vector<int> dp(amount+1, 0);
        return help(dp, amount,coins);
    }
private:
    int help(vector<int>& dp, int amount,vector<int>& coins){
        if(amount == 0) return 0;
        if(dp[amount] != 0) return dp[amount];
        int res = amount+1;

        for(auto coin : coins){
            if(amount - coin < 0) continue;

            int subproblem = help(dp,amount-coin,coins);
            if(subproblem == -1) continue;
            res = min(res, 1+subproblem);
            
        }
        dp[amount] = res == (amount+1)? -1 : res;
        return dp[amount] ;
    }
};
