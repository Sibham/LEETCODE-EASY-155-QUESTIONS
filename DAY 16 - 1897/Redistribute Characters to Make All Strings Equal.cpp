//Approach-1 (Using hashmap to store frequency)
//T.C : O(n)
//S.C : O(n)
class Solution {
public:
    bool makeEqual(vector<string>& words) {
        int n = words.size();
        unordered_map<char, int> count;

        for (string& word : words) {
            for (char &ch : word) {
                count[ch]++;
            }
        }

        for (auto &it : count) {
            if (it.second % n != 0) {
                return false;
            }
        }

        return true;
    }
};

//Approach-2 (Using array as hashmap for storing frequency)
//T.C : O(n)
//S.C : O(26)
class Solution {
public:
    bool makeEqual(vector<string>& words) {
        int n = words.size();
        
        int count[26] = {0};
        
        for(string &word : words) {
            
            for(char &ch : word) {
                count[ch-'a']++;
            }
            
        }
        
        for(int i = 0; i < 26; i++) {
            if(count[i]%n != 0) {
                return false;
            }
        }
        
        return true;
        
    }
};

