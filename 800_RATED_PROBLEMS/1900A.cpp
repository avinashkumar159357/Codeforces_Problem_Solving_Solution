//File name:cover in water
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID: 1900A
//Description:constructive algorithm,greedy,inplementation,string(*800)
//Last Changed:23-4-2026

#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n,c=0; cin>>n;
    string s; cin>>s;
    bool flag =false;
    for (int  i = 0; i < n; i++)
    {
        if(i!=0 && i!=(n-1)){
            if(s[i]=='.' && s[i-1]=='.' && s[i+1]=='.'){
                flag=true;
                break;
           }
        }
        if(s[i]=='.')c++;
    }
    if(flag) cout<<"2\n";
    else cout<<c<<"\n";
    
}
int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
        
    int t; cin>>t;
    while(t--) {
        solve();
    }

}