//File name:X Axis
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID: 1986A
//Description:brute force,geometry, math,sorting(*800)
//Last Changed:5-05-2026
#include<bits/stdc++.h>
using namespace std;

void solve() {
    int a,b,c; cin>>a>>b>>c;
    int minimum=min(a,min(b,c));
    int maximum=max(a,max(b,c));
    cout<<abs(maximum-minimum)<<"\n";
}
int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
        
    int t; cin>>t;
    while(t--) {
        solve();
    }

}