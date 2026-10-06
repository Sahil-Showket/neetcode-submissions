class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i = 0;
        int j = 0;

        unordered_map<int, int> mp;
        while(i < nums.size()){
            mp[nums[i]] = i;
            i++;
        }
        while(j < nums.size()){
            int req = target - nums[j];
            if (auto it = mp.find(req); it != mp.end()){
                if (it->second != j) {
                    return {j, it->second};
                }
            }
            j++;
        }
        return {};
    }
};

