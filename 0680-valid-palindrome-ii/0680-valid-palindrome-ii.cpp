// class Solution {
// public:
// bool palindromeHelper(int i,int j,string s){
//     while(i<j){
//         if(s[i]!=s[j]){
//             return false;
//         }
//         i++;
//         j--;
//     }
//     return true;
// }
//     bool validPalindrome(string s) {
//         int i=0;
//         int j=s.size()-1;
//         while(i<j){
//             if(s[i]!=s[j]){
//                 return palindromeHelper(i+1,j,s) || palindromeHelper(i,j-1,s);
//             }else{
//                i++;
//                j--
//                ;
//             }

//         }
//         return true;
//     }
// };



class Solution{
    public:
    bool palindromehelper(int i,int j,string s){
        while(i<j){
            if(s[i]!=s[j]){
                return false;
            }
            i=i+1;
            j=j-1;
                    
    }
    return true;
}
    bool validPalindrome(string s){
        int i=0;
        int j= s.size()-1;
        while(i<j){
            if(s[i]!=s[j]){
                return palindromehelper(i+1,j,s) || palindromehelper(i,j-1,s);
            }else{
            i++;
            j--;
        }
        }
        return true;
    }
};