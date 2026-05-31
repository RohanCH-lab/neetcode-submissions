class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int left = 1;
        int right = *max_element(piles.begin(),piles.end());
        long long totalHours = 0;
        while(left<right){
            totalHours = 0;
            int mid = left+(right-left)/2;

            for(int pile:piles){
                totalHours += (pile+mid-1)/mid;
            }
            if(totalHours <= h){
                right = mid;
            }else{
                left = mid+1;
            }
        }
        return right;
    }
};