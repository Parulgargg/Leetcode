//https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/description/
// 1047. Removing all adjacent duplicates

class Solution {
public:
    string removeDuplicates(string s) {
        stack<char>st;
        for(int i=0;i<s.length();i++){
            char ch = s[i];
            // to check if stack has element and it same as current character
            if(st.size()>0 && st.top()==ch)
            {
                st.pop();
            }
            //either stack is empty or top character is not same as current char
            else{
            st.push(ch);
            }
        }
        string ans = "";
        while(st.size()>0)
        {
            ans = ans+st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }

};