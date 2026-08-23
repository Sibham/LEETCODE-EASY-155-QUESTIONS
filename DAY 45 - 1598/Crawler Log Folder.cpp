//Approach-1 (Using simple simulation)
//T.C : O(n)
//S.C : O(1)
class Solution {
public:
    int minOperations(vector<string>& logs) {
        int depth = 0;

        for(string &s : logs) {
            if(s == "../") {
                depth = max(0, depth-1);
            } else if(s == "./") {
                continue;
            } else {
                depth++;
            }
        }

        return depth;
    }
};
