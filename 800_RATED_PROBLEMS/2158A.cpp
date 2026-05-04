//Problem name:Suspension
//Author:Avinash kumar (A_K_0_7)
//Email Address: aviofficial159357@gmail.com
//Problem ID:2158A
//Description:constructive algorithm,greedy,math(*800)
//Last Changed:4-05-2026

#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,y,r; cin>>n>>y>>r;
    int maximum_susp=(y/2)+r;
    if(maximum_susp<=n)cout<<maximum_susp<<"\n";
    else cout<<n<<"\n";
}

        
int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
        
    int t;  cin>>t;
    while(t--) {
        solve();
    }

}    
