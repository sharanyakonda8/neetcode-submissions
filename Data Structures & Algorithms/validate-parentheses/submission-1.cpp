class Solution {
public:
    bool isValid(string s) {
       stack<char>st;
       if(s.size()%2!=0)return false;
       for(int i=0;i<s.size();i++){
        if(s[i]=='(' || s[i]=='[' || s[i]=='{'){
            st.push(s[i]);
        }else{
            if(st.empty())return false;
            char t=st.top();
            if((s[i]==')' && t=='(') || (s[i]==']' && t=='[') || (s[i]=='}' && t=='{')){
                st.pop();
            }
            else{
                return false;
            }

        }
       }
       return true; 
    }
};
