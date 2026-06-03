//Approach-1 (Using Brute Force) - ACCEPTED
//T.C : O(n^2)
//S.C : O(1)
class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        int result = -1;
        int n      = s.length();
        
        for(int i = 0; i < n-1; i++) {
            for(int j = i+1; j<n; j++) {
                
                if(s[i] == s[j]) {
                    result = max(result, j-i-1);
                }
            
            }
        }
        
        return result;
    }
};
