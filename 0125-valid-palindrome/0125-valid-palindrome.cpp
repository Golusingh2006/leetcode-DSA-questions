class Solution {
public:
    bool isPalindrome(string s) {
        vector<char>Ns;
        bool chek = false;


        for(int i = 0; i<s.length(); i++){
            if(((int)s[i]>=65 && (int)s[i]<=90) || ((int)s[i]>=48 && (int)s[i]<=57) || ((int)s[i]>=97 && (int)s[i]<=122)){
                Ns.push_back(tolower(s[i]));
            }
        }
        if(Ns.size() == 0 || Ns.size()==1) return true;

        int sI = 0;
        int eI = Ns.size()-1;

        while(sI<eI){
            if(Ns[sI]==Ns[eI]){
                chek = true;
            }else{
                
                return false;
            }
            sI++;
            eI--;
        }

        if(chek==true) return true;
        else return false;

    }
    // w g l g l
};