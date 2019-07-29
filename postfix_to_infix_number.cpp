#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int checkDigit(char c){
    if((c!='+' || c!='-' || c!='*' || c!='/' || c!='^'))
        return 1;
    else return 0;
}
void postFixToInfix(char s[]){
    stack<int> st;
    for(int i=0;i<s[i]!='\0';i++){
        if(checkDigit(s[i])){
            //int op(1,s[i]);
            st.push((int)s[i]);

        }else{
            int op1=st.top();

            st.pop();
            int op2=st.top();
            st.pop();
            st.push(op2+s[i]+op1);
            cout<<st.top()<<endl;
        }
    }
    cout<<st.top()-1;
    cout<<st.top();
}
int main(){
        char exp[] ="52*";
        postFixToInfix(exp);
    return 0;
}
