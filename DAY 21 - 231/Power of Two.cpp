//Approach-1 (Using normal division) - Can also wite iterative version
//T.C : O(log(n))
//S.C : O(1)
class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n <= 0)
            return false;
        if(n == 1)
            return true;
        
        return n%2 == 0 && isPowerOfTwo(n/2);
    }
};

//Approach-2 (Using bit magic)
//T.C : O(1)
//S.C : O(1)
class Solution {
public:
    bool isPowerOfTwo(int n) {
        return (n > 0) && ((n & (n - 1)) == 0);
    }
};
