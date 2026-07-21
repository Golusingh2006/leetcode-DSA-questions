class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int lead = 0;
        int majority = 0;

        for(int i =0; i< nums.size(); i++){
            if(majority == nums[i]) lead++;
            else if(lead>0) lead--;
            else{
                majority = nums[i];

                lead++;
            }
        }
        return majority;
    }
};