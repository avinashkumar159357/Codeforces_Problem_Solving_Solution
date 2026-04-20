//Problem name:Your name
//Author:Avinash kumar (A_K_0_7)
//Email Address: aviofficial159357@gmail.com
//Problem ID:2167B
//Description: string,sorting(800)
//Last Changed:20-4-2026
#include<bits/stdc++.h>
using namespace std;    
#define ll long long
#define fastio ios :: sync_with_stdio(0);cin.tie(0);

void solve() {
    int n; cin>>n;
    string s,t; cin>>s>>t;
    map<char,int>mp1,mp2;
   
    for (int  i = 0; i <n; i++){
        mp1[s[i]]++;
        mp2[t[i]]++;
    } 
    
    if(mp1==mp2) cout<<"YES\n";
    else cout<<"NO\n";
}

int main() {
    fastio;
    int TC; cin>>TC;
    while(TC--) {
        solve();
    }

}    

 