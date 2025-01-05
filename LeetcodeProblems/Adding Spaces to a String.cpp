// problem link
// https://leetcode.com/problems/adding-spaces-to-a-string/description/?envType=daily-question&envId=2024-12-03


// source Code

class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        int i = 0, j = 0;
        string res = "";
        while(i < s.length() && j < spaces.size()){
            if(i == spaces[j]){
                res += " ";
                j++;
            }else{
                res += s[i];
                i++;
            }
        }

        while(i < s.length()){
            res += s[i];
            i++;
        }

        return res;
    }
};