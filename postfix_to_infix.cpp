#include<iostream>
#include<bits/stdc++.h>
using namespace std;
char checkDigit(char c){
    if((c>='a' && c<='z')||(c>='A' && c<='Z'))
        return c;
    else return 0;
}
void postFixToInfix(string s){
    stack<string> st;
    for(int i=0;i<s[i]!='\0';i++){
        if(checkDigit(s[i])){
            string op(1,s[i]);
            st.push(op);
        }else{
            string op1=st.top();
            st.pop();
            string op2=st.top();
            st.pop();
            st.push("("+op2+s[i]+op1+")");
        }
    }
    cout<<st.top();
}
int main(){
    string exp="ab*c+";
    postFixToInfix(exp);
return 0;
}
