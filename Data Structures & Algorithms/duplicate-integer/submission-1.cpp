class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int, int> mp;
        int i = 0;
        while(i<nums.size()){
            mp[nums[i]]++;
            i++;
        } 
        for(const auto&[key, value] : mp){
            if(value > 1){
                return true;
            }
        }

        return false;
    }
};