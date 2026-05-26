class Solution {
public:
    int maxProfit(vector<int>& prices) {
      int n = prices.size();

      int left=0;
      int right = 1;
      int max_profit=0;
      while(right<n){
        if(prices[left]>=prices[right]){
            left=right;
        }else{
            int currProfit = prices[right]-prices[left];
            max_profit = max(currProfit,max_profit);
        }
        right++;
      }
      return max_profit;  
    }
};