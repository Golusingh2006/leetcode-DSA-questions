class Solution {
public:
    bool isPalindrome(int x) {
      
      
      int n = x;

        long long  rev = 0;
        int k  = 0;
        while(n>0){
             k = n%10;
            rev = rev*10+k;
            n = n/10;
        }


        if(rev == x) return true;
        else return false;

    }
};