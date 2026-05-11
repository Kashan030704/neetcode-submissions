class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        bool exists1;
        bool exists2;
        bool exists3;
        if(s.size() == 1) return false;
        for(char c: s){
            if(c == '(' || c == '[' || c == '{'){
                if(!st.empty()){
                    if(c == st.top()) return false;
                }
                st.push(c);
            }else {
                if(st.empty()) return false;
                char top = st.top();
                st.pop();
                if(c == ')' && top != '('){
                    return false;
                }else if( c == '}' && top!='{'){
                    return false;
                }else if(c == ']' && top!='['){
                    return false;
                }
            }
        }
        return st.empty();
    }
};
