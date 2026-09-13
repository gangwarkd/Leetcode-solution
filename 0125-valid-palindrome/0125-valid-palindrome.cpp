class Solution {
public:
    bool isPalindrome(string s) {
     
//         int left = 0;
//         int right = s.size() - 1;

//         while (left < right) {

//             // Skip non-alphanumeric characters
//             while (left < right && !isalnum(s[left]))
//                 left++;

//             while (left < right && !isalnum(s[right]))
//                 right--;

//             // Compare lowercase characters
//             if (tolower(s[left]) != tolower(s[right]))
//                 return false;

//             left++;
//             right--;
//         }

//         return true;
//     }
// };

int i=0;
int j=s.size()-1;

while(i<j){
    while(i<j && !isalnum(s[i])) i++;
    
    while(i<j && !isalnum(s[j]) )j--;

    if(tolower(s[i])!=tolower(s[j]))
        return false;
         i++;
    j--;
      
    
}
        return true;

    }
};

        
    