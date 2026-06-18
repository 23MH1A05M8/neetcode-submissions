class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st;
        int n=operations.size();
        int res=0;
        for(int i=0;i<n;i++){
            if(operations[i]=="+")
            {
                int top=st.top();
                st.pop();
                int newtop=top+st.top();
                st.push(top);
                st.push(newtop);
                res+=newtop;
            }
            else if(operations[i]=="D")
            {
                int newtop=2*st.top();
                st.push(newtop);
                res+=newtop;
            }
            else if(operations[i]=="C")
            {
                res-=st.top();
                st.pop();
            }
            else{
                res+=stoi(operations[i]);
                st.push(stoi(operations[i]));
            }
        }
        return res;
    }
};