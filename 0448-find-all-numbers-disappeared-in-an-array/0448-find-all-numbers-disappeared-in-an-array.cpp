class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
         int n = nums.size();
        int i = 0;

        

        while(i<n){
        int cp = nums[i]-1;
        if(nums[i] != nums[cp]){
            swap(nums[i],nums[cp]);
        } else
        i++;
        }

        vector<int> res;

        for(int j = 0; j<n; j++){
        if(nums[j] != j+1){
            int value;
            value =  j+1;
            res.push_back(value);
        }
        }
        return res;
    }
};