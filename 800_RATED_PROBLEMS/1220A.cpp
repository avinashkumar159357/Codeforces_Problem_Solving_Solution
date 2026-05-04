//Problem name:Cards
//Author:Avinash kumar (A_K_0_7)
//Email Address: aviofficial159357@gmail.com
//Problem ID:1220A
//Description:implementation,sorting ,string(*800)
//Last Changed:4-05-2026

#include<bits/stdc++.h>
using namespace std;

void solve(){
    int s1,z=0,n=0; cin>>s1;
    string s; cin>>s;
    vector<int>bin;
    for (int  i = 0; i < s1; i++)
    {
        if(s[i] == 'z') z++;
        if(s[i] == 'n') n++;
    }
    bin.insert(bin.end(),n,1);
    bin.insert(bin.end(),z,0);

    for (int i : bin) cout<<i<<" ";
}
        
int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
        
    int t=1; //cin>>t;
    while(t--) {
        solve();
    }

}    
