//Problem name:Between the Offices
//Author:Avinash kumar (A_K_0_7)
//Email Address: aviofficial159357@gmail.com
//Problem ID:867A
//Description:implementation(*800)
//Last Changed:6-5-2026
#include<bits/stdc++.h>
using namespace std;    
#define ll long long
#define fastio ios :: sync_with_stdio(0);cin.tie(0);

void solve(){
    int n; cin>>n;
    string s; cin>>s;
    int s_to_f=0,f_to_s=0;
    for (int i = 0; i < n-1; i++)
    {
        if(s[i]=='S' && s[i+1]=='F')s_to_f++;
        else if(s[i]=='F' && s[i+1]=='S')f_to_s++;
    }
    if(s_to_f>f_to_s) cout<<"YES\n";
    else cout<<"NO\n";
    
}
int main() {
    fastio;
    int TC=1; //cin>>TC;
    while(TC--) {
        solve();
    }

}    

    