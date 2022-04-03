class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        vector<int> check;
        unordered_map<int,int> sum;
        
        for(int counter = 0; counter < nums.size(); counter++)
        {
            if (sum.find(target-nums[counter]) != sum.end())
            {
                check.push_back(counter);
                check.push_back(sum[target-nums[counter]]);
            }
            else
            {
                sum[nums[counter]] = counter;
            }
        }
        return check;
    }
};