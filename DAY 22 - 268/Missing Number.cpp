//Approach-1 (XOR)
//T.C : O(n)
//S.C : O(1)
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum = nums.size();
        for(int i = 0; i<nums.size(); i++) {
            sum ^= i;
            sum ^= nums[i];
        }
        return sum;
    }
};

//Approach-2 (Math)
//T.C : O(n)
//S.C : O(1)
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int sum = n*(n+1)/2;
        for(int i = 0; i<n; i++) {
            sum -= nums[i];
        }
        return sum;
    }
};
