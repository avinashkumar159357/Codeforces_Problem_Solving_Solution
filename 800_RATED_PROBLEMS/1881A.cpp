//Problem name:Don't try to count 
//Author:Avinash kumar (A_K_0_7)
//Email Address: aviofficial159357@gmail.com
//Problem ID:1881A
//Description:brute force , string(*800)
//Last Changed:30-4-2026

#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n, m,c=0; cin>>n>>m;
    string x,s; cin>>x>>s;
    bool flag=false;

    if(x.find(s)!=string::npos){
        cout<<"0\n";
        return;
    }
    int i=6;
    while (i--)
    {
        x+=x;
        c++;
        if(x.find(s)!=string::npos){
            flag=true;
            break;
        }
    }
    if(flag) cout<<c<<"\n";
    else cout<<"-1\n";
    
}
int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
        
    int t; cin>>t;
    while(t--) {
        solve();
    }

}
