#include<bits/stdc++.h>
using namespace std;
int isDau(char s){
    return s=='+'||s=='-'||s=='*'||s=='/';
}
int main()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    int t; cin>>t;
    while(t--){
        string s;cin>>s;
        stack<int> stk;
        for(int i=s.size()-1;i>=0;i--){
            if(isDau(s[i])){
                int b=stk.top(); stk.pop();
                int a=stk.top(); stk.pop();
                if(s[i]=='+') stk.push(b+a);
                if(s[i]=='-') stk.push(b-a);
                if(s[i]=='*') stk.push(b*a);
                if(s[i]=='/') stk.push(b/a);
            }else stk.push(s[i]-'0');
        }
        cout<<stk.top()<<endl;
    }
}