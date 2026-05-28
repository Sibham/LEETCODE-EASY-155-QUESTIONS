class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int largest = 0;
        int sec_largest = 0;

        for(int &num : nums){
            if(num > largest){
                sec_largest = largest;
                largest = num;
            }
            else{
                sec_largest = max(sec_largest,num);
            }
        }
        return (largest - 1) * (sec_largest - 1);
    }
};


**********************************************java***************************************************
    public class Solution {
    public int maxProduct(int[] nums) {
        int n = nums.length;

        int firstMax = 0;
        int secondMax = 0;

        for (int i = 0; i < n; i++) {

            if (nums[i] > firstMax) {
                secondMax = firstMax;
                firstMax = nums[i];
            } else {
                secondMax = Math.max(secondMax, nums[i]);
            }

        }

        return (firstMax - 1) * (secondMax - 1);
    }
}
