class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = nums[0];
        int sum1 = nums[0];
        for (int counter = 1; counter < nums.size(); counter++)
        {
            if (sum >= 0)
            {
                sum += nums[counter];
            }
            else
            {
                sum = nums[counter];
            }
            if (sum > sum1)
            {
                sum1 = sum;
            }
        }
        return sum1;
    }
};