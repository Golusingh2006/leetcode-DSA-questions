class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        

        int n = nums.size();

        if(k>n) k= k%n;

        for(int i=0 , j=n-k-1; i<j; i++,j--){
            
            int temp = nums[i];
            nums[i] = nums[j];
            nums[j] = temp;

        }

        for(int i=n-k , j=n-1; i<j; i++,j--){
            
            int temp = nums[i];
            nums[i] = nums[j];
            nums[j] = temp;

        }


        for(int i=0,j=n-1; i<j ;i++,j--){
            int temp = nums[i];
            nums[i] = nums[j];
            nums[j] = temp;
        }

        
    }
};