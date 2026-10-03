class Solution {
public:
    bool isAnagram(string s, string t) {
        int n = s.size();
        int m = t.size();

        if(n != m) return false;

        unordered_map<char, int> mp1;
        unordered_map<char, int> mp2;
        
        for(int i = 0; i < n; i++){
            mp1[s[i]]++;
            mp2[t[i]]++;
        }

        if(mp1.size() != mp2.size()) return false;


        for (const auto& [key, val1] : mp1) {
            auto it = mp2.find(key);
        
            if (it == mp2.end() || it->second != val1) { 
                return false;
            }
        }

        return true;
    }
};
