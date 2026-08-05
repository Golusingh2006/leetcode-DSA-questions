class Solution {
public:
    int secondHighest(string s) {

        vector<int> nums;
        for(int i=0; i<s.length(); i++){
            if((int)s[i] >=48 && (int)s[i]<=57 ){
                    nums.push_back(s[i]-48);
            }
        }

         sort(nums.begin(),nums.end());
        
        int n = nums.size();
        for(int i=n-1; i>0; i--){
            
            
            if(nums[i] != nums[i-1] ){
                return nums[i-1];
            }
        }
        
        return -1;
    }
};