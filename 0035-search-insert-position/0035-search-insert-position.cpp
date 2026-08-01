class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
      

        int j = nums.size()-1;

        while(j>=0 && nums[j]>=target){
            j--;
        }

        return j+1;
    }
};