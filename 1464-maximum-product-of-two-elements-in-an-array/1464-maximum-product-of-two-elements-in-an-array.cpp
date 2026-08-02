class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
        /*for(int i=1; i<nums.size(); i++){
            int key = nums[i];
            int j = i-1;


            while(j>=0 && nums[j]>key){
                nums[j+1] = nums[j];
                j = j-1;
            }
            nums[j] = key;
        }*/

        sort(nums.begin(),nums.end());

        int n = nums.size();
        int fst = nums[n-1];
        int scnd = nums[n-2];

        return (fst-1)*(scnd-1);
    }
};