class Solution {
public:
    string reverseOnlyLetters(string s) {
        int len = s.length();
        int n = len-1;
        int i=0;
        while(i<n){
             if(!isalpha(s[i])) {
                i++;
                continue;
            }
           
            if(!isalpha(s[n])) {
                n--;
                continue;
            }
            swap(s[i],s[n]);
            n=n-1;
            i=i+1;
        }
        return s;
    }
};