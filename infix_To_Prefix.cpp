#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int prec(char c){
    if(c=='^')return 3;
    else if(c=='*' || c=='/') return 2;
    else if(c=='+' || c=='-') return 1;
    else return -1;
}

void infixToPrefix(string temp){
    string ns;
    stack<char> st;
    st.push('N');
    string s=temp;
    int len=s.length();

    //rev strings
    reverse(s.begin(),s.end());
    for(int i=0;i<len;i++){
        if(s[i]=='('){
            s[i]=')';
            i++;
        }
        else if(s[i]==')'){
            s[i]='(';
            i++;
        }
    }
    ///logic for infix to postfix
       for(int i=0;i<len;i++){

        // If the scanned character is an operand, add it to output string.
        if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z')){
            ns+=s[i];
           // cout<<ns;
        }
        // If the scanned character is an ‘(‘, push it to the stack.
        else if(s[i]=='('){
            st.push('(');
        }
        // If the scanned character is an ‘)’, pop and to output string from the stack
        // until an ‘(‘ is encountered.
        else if(s[i] == ')')
        {
            while(st.top() != 'N' && st.top() != '(')
            {
                char c = st.top();
                st.pop();
               ns += c;
            }
            if(st.top() == '(')
            {
                st.pop();
            }

        }else{
            while(st.top() != 'N' && prec(s[i]) <= prec(st.top()))
            {
                char c = st.top();
                st.pop();
                ns += c;
            }
            st.push(s[i]);
        }
    }
    //Pop all the remaining elements from the stack
    while(st.top() != 'N')
    {
        char c = st.top();
        st.pop();
        ns += c;
      //  cout<<ns;
    }
    reverse(ns.begin(),ns.end());
    cout<<ns<<endl;
}
int main(){

    string s="(a-b/c)*(a/k-l)";
    infixToPrefix(s);
    return 0;
}
