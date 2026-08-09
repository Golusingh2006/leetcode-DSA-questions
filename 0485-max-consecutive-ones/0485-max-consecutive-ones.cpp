class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0;
        int ncount = count;

        for(int i=0; i<nums.size(); i++){
            if(nums[i] == 0) count = 0;
            else {
                count++;
                ncount = max(count,ncount);
            }
        }
        return ncount;
    }
};