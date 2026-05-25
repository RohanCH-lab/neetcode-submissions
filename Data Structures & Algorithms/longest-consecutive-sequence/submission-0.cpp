class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();

        if(nums.empty()) return 0;
        int maxCount = 1;
        unordered_set<int>hashSet(nums.begin(),nums.end());
        
        for(auto &x:hashSet){
            int curr = x;
            if(hashSet.count(curr-1)){
                continue;
            }else{
                // startcounting
                int temp = 1;
                while(hashSet.count(curr+temp)){
                    temp++;
                }
                maxCount = max(maxCount,temp);
            }
        }
        return maxCount;
    }
};