//Approach-1 (Using simple set)
//T.C : O(n)
//S.C : O(n)
class Solution {
public:
    int longestPalindrome(string s) {
        int n = s.length();
        unordered_set<char> st;

        int result = 0;
        for(char &ch : s) {
            if(st.count(ch)) {
                st.erase(ch);
                result += 2;
            } else {
                st.insert(ch);
            }
        }

        if(!st.empty())
            result++;
        
        return result;
    }
};

//Approach-2 (Using hashmap and countintg frequency)
//T.C : O(n)
//S.C : O(n)
class Solution {
public:
    int longestPalindrome(string s) {
        int n = s.length();
        unordered_map<char, int> mp;

        int result = 0;
        for(char &ch : s) {
            mp[ch]++;
        }

        bool takeCentralChar = false;
        for(auto &it : mp) {
            if(it.second % 2 == 0) {
                result += it.second;
            } else {
                result += it.second - 1;
                takeCentralChar = true;
            }
        }

        if(takeCentralChar)
            result++;

        return result;
    }
};
