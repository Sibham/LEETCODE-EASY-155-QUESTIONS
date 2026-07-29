//Approach-1 (Using two sets)
//T.C : O(m+n)
//S.C : O(m+n)
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> st1(begin(nums1), end(nums1));
        
        unordered_set<int> st2;
        
        
        for(int &num : nums2) {
            if(st1.find(num) != st1.end()) {
                st2.insert(num);
            }    
        }
        
        vector<int> result;
        for(auto &it : st2) {
            result.push_back(it);
        }
        
        return result;
    }
};

//Approach-2 (Using one set)
//T.C : O(m+n)
//S.C : O(m+n)
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> st(begin(nums1), end(nums1));
        
        vector<int> result;
        
        for(int &num : nums2) {
            if(st.find(num) != st.end()) {
                result.push_back(num);
                st.erase(num);
            }    
        }
        
        return result;
    }
};


