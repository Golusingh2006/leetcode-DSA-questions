class Solution {
public:
    bool rotateString(string s, string t) {
         if(s.length()!=t.length()) return false;


         return (s + s).find(t) != string::npos;

    }
};