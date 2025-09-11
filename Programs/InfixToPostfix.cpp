// #include<iostream>
// #include<string>
// #include<stack>
// using namespace std;

// int prec(char a){
//     if(a=='^'){
//         return 3;
//     }else if(a=='*' || a=='/'){
//         return 2;
//     }else if(a=='+' || a=='-'){
//         return 1;
//     }else{
//         return -1;
//     }
// }

// string infixToPostfix(string s){
//     string res;
//     stack <char> st;
//     for(int i=0;i<s.length();i++){
//         if(s[i]>='a' && s[i]<='z' || s[i]>='A' && s[i]<='Z'){
//             res+=s[i];
//         }else if(s[i]=='('){
//             st.push(s[i]);
//         }else if(s[i]==')'){
//             st.pop();
//             while(!st.empty() && st.top()!='('){
//                 res+=st.top();
//                 st.pop();
//             }
//             if(!st.empty() && st.top()=='('){
//                 st.pop();
//         }else{
//             while(!st.empty() && st.top()!='(' && prec(s[i])<=prec(st.top())){
//                 res+=st.top();
//                 st.pop();
//             }
//             st.push(s[i]);
//         }
//     }
//     while(!st.empty()){
//         res+=st.top();
//         st.pop();
//     }
//     return res;
// }
// }

// int main(){
//     string s="a*b+c";
//     cout<<infixToPostfix(s);
// }
#include<iostream>
#include<string>
#include<stack>
using namespace std;

int prec(char a){
    if(a=='^'){
        return 3;
    }else if(a=='*' || a=='/'){
        return 2;
    }else if(a=='+' || a=='-'){
        return 1;
    }else{
        return -1;
    }
}

string infixToPostfix(string s){
    string res;
    stack <char> st;
    for(int i=0;i<s.length();i++){
        if(s[i]>='a' && s[i]<='z' || s[i]>='A' && s[i]<='Z'){
            res+=s[i];
        }else if(s[i]=='('){
            st.push(s[i]);
        }else if(s[i]==')'){
            while(!st.empty() && st.top()!='('){
                res+=st.top();
                st.pop();
            }
            if(!st.empty() && st.top()=='('){
                st.pop();
            }
        }else{
            while(!st.empty() && st.top()!='(' && prec(s[i])<=prec(st.top())){
                res+=st.top();
                st.pop();
            }
            st.push(s[i]);
        }
    }
    while(!st.empty()){
        res+=st.top();
        st.pop();
    }
    return res;
}

int main(){
    string s="A+(B+C-(D/E^F)*G)*H";
    cout<<infixToPostfix(s);
}