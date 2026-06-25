class Solution {
public:
    string makeGood(string s) {
        stack<char>st;
        string s1="";
        for(int i = 0 ; i < s.size() ; i++ ){
            if(!st.empty() && abs(st.top()-(s[i]))==32){
                st.pop();
            }
            else{
                st.push(s[i]);
            }
        }
        while(!st.empty()){
                s1+=st.top();
                st.pop();
        }
        reverse(s1.begin(),s1.end());
    return s1;
    }
};
