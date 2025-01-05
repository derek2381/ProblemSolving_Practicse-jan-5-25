// problem link
// https://leetcode.com/problems/shifting-letters-ii/description/?envType=daily-question&envId=2025-01-05


// Source Code

class Solution {
public:
    string shiftingLetters(string s, vector<vector<int>>& shifts) {
        vector<int> arr(s.length(), 0);

        

        for(int i = 0;i < shifts.size();i++){
            int start = shifts[i][0];
            int end = shifts[i][1];
            int type = shifts[i][2];

            if(type == 0){
                arr[start]--;

                if(end+1 < s.length()){
                    arr[end+1]++;
                }
            }else{
                arr[start]++;

                if(end+1 < s.length()){
                    arr[end+1]--;
                }
            }
        }

        string res(s.length(), ' ');
        int moves = 0;

        for(int i = 0;i < arr.size();i++){
            moves = (moves+arr[i])%26;

            if(moves < 0){
                moves += 26;
            }

            res[i] = 'a' + (s[i] - 'a' + moves)%26;

        }
        cout << res;
        for(char c : s){
            cout << int(c) << " ";
        }
        return res;
    }
};