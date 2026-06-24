class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int>st;

        for(int i = 0 ; i< operations.size() ; i ++){
            if( operations[i]!="C" && operations[i]!="D"  && operations[i]!="+"){
                st.push(stoi(operations[i]));
            }
            else{  
                if(st.empty()){
                    return 0;
                }          
                else if( operations[i]=="C"){
                    st.pop();
                }
                else if( operations[i]=="D"){
                    int val=st.top()*2;
                    st.push(val);
                }
                else if( operations[i]=="+"){
                    int prev=st.top();
                    st.pop();
                    int s=st.top()+prev;
                    st.push(prev);
                    st.
                    push(s);
                }
            }
        }
        int ad=0;
        while(!st.empty()){
            ad+=st.top();
            st.pop();
        }
    return ad;

    }
};
