class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n=strs.size();
        if(n==1) return strs[0];
        sort(strs.begin(),strs.end());
        string s1=strs[0];
        string s2=strs[n-1];
        string s= "";
        for(int i=0;i<(min(s1.size(),s2.size()));i++){
            if(s1[i]==s2[i]){
                s +=s1[i];
    }else  {  
        return s;

        }
        }         
                 return s;
             }
};