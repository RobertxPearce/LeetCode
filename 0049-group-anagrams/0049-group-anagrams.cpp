class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> map;
        vector<vector<string>> anagrams;
        string word;
        
        for (size_t i = 0; i < strs.size(); i++) {
            word = strs[i];
            sort(word.begin(), word.end());
            map[word].push_back(strs[i]);
        }
        
        for (auto it = map.begin(); it != map.end(); it++) {
            anagrams.push_back(it->second);
        }
        
        return anagrams;
    }
};