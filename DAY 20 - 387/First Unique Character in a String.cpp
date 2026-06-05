//T.C : O(n)
//S.C : O(26) ~ O(1)
class Solution {
public:
    int firstUniqChar(string s) {
        int arr[26] = {0};
        
        for(char &ch : s) {
            arr[ch-'a']++;
        }
        
        
        for(int i = 0; i < s.length(); i++) {
            if(arr[s[i]-'a'] == 1) {
                return i;
            }
        }
        
        return -1;
    }
};

