//Problem name:Party Monster
//Author:Avinash kumar (A_K_0_7)
//Email Address: aviofficial159357@gmail.com
//Problem ID:CR 1096 Div3 (B)
//Description:contest
//Last Changed:30-4-2026
#include<bits/stdc++.h>
using namespace std;    
#define ll long long
#define fastio ios :: sync_with_stdio(0);cin.tie(0);


void solve(){
    int n,l=0,r=0; cin>>n;
    string s; cin>>s;
    
    if(n%2==1){
        cout<<"NO\n";
        return;
    }
    for (int  i = 0; i < n; i++)
    {
        if(s[i]=='(') l++;
        else r++;
    }
    if(l==r)cout<<"YES\n";
    else cout<<"NO\n";
    
}
int main() {
    fastio;
    int TC; cin>>TC;
    while(TC--) {
        solve();
    }

}    

    