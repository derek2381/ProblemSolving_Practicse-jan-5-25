// problem link
// https://leetcode.com/problems/make-string-a-subsequence-using-cyclic-increments/description/?envType=daily-question&envId=2024-12-04


// Source Code

class Solution {
public:
    bool canMakeSubsequence(string str1, string str2) {
        int count = 0;
        int j = 0;
        for(int i = 0;i < str1.length() && j < str2.length();i++){
            if(str1[i] == str2[j]){
                count++;
                j++;
            }else if((str1[i]+1) > 'z' && str2[j] == 'a'){
                count++;
                j++;
            }else if((str1[i] +1) == str2[j]){
                count++;
                j++;
            }
        }

        if(count == str2.length()){
            return true;
        }else{
            return false;
        }
    }
};