class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int>hashMap;
        int prefixSum = 0;
        int res = 0;
        hashMap[0] = 1;
        for(auto &x:nums){
            prefixSum += x;
            int target = prefixSum-k;

            if(hashMap.count(target)){
                res+=hashMap[target];
            } 

            hashMap[prefixSum]++;
        }

        return res;
    }
};