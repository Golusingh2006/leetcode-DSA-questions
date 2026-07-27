class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        int n = nums.size();

        vector<int> pre(n);
        vector<int> suff(n);

        // prefix----multiplication 

        int p = nums[0];
          pre[0] = 1;
        for(int i =1; i<n; i++){

            pre[i] = p;

            p = p*nums[i];
        }

        // suffix -- multiplication

        p = nums[n-1];
         suff[n-1] =1;
        for(int i = n-2; i>=0; i--){
            suff[i] = p;

            p = p*nums[i];
        }

        // ab agar prefix and suffix ke [i] ko multiply karenge toh hme essa number milega jo ki sare number ka multiplication hoga except it self 


        for(int i=0; i<n; i++){
            nums[i] = pre[i]*suff[i];
        }

        return nums;
    }
};