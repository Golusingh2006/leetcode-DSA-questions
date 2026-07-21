class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int kitna = 0;
        int konsa = 0;

        for(int i=0; i<nums.size(); i++){
            if(konsa == nums[i]) kitna++;
            else if(kitna>0){
                kitna--;
            }else{
                konsa = nums[i];
                kitna++;
            }
        }

        return konsa;
    }
};