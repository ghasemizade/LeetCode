class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        
        int now = 0 , temp = 0 , res = 0;
        int test = nums.size();
        
        while(temp < test)
        {
            if(nums[temp] != val)
            {
                swap(nums[temp],nums[test]);
                test++;
                res++;
            }
            temp++;
        }
        return res;
    }
};