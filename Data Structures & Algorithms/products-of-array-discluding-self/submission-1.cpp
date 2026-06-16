class Solution {
   public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> left(nums.size());
        vector<int> right(nums.size());
        int lprod = 1;
        for (int i = 0; i < nums.size(); i++) {
            left[i] = lprod;
            lprod *= nums[i];
        }
        int rprod = 1;
        for(int i = nums.size()-1; i>=0; i--) {
            right[i] = rprod;
            rprod *= nums[i];
        }
        vector<int> result(nums.size());
        for(int i = 0; i<nums.size(); i++) {
            result[i] = left[i] * right[i];
        }
        return result;
    }
};


