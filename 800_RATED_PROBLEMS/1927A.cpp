//Problem name:Make it white
//Author:Avinash kumar (A_K_0_7)
//Email Address: aviofficial159357@gmail.com
//Problem ID:1927A
//Description: greedy,sorting(800)
//Last Changed:20-4-2026
#include<bits/stdc++.h>
using namespace std;    
#define ll long long
#define fastio ios :: sync_with_stdio(0);cin.tie(0);

void solve() {
    int n,c=0; cin>>n;
    string s; cin>>s;
    int first=0,last=0;
    for (int i = 0; i < n; i++)
    {
        if(s[i]=='B' && c==0) {
            first=i;
            c++;
        }
        if (s[i]=='B') last=i;
    }
    cout<<last-first+1<<"\n";
}

int main() {
    fastio;
    int TC; cin>>TC;
    while(TC--) {
        solve();
    }

}    

 