//Approach 1
class Solution {
public:
    int minLength(string s) {
        stack<char> st;

        for (int i = 0; i < s.length(); i++) {
            char currentChar = s[i];

            if (st.empty()) {
                st.push(currentChar);
                continue;
            }

            if (currentChar == 'B' && st.top() == 'A') {
                st.pop();
            }
            else if (currentChar == 'D' && st.top() == 'C') {
                st.pop();
            }
            else {
                st.push(currentChar);
            }
        }

        return st.size();
    }
};


//Approach 2
//T.C : O(n^2)
//S.C : O(1)
class Solution {
public:
    int minLength(string s) {
        
        while (s.find("AB") != -1 || s.find("CD") != -1) {
            if (s.find("AB") != -1) {
                
                s.erase(s.find("AB"), 2);
            } else if (s.find("CD") != -1) {
                
                s.erase(s.find("CD"), 2);
            }
        }

        return s.length();
    }
};

