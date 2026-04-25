//File name:Plus one on the subset
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID: 1624A
//Description:math(*800)
//Last Changed:25-4-2026

#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin>>n;
    vector<int>a(n);
    for (int  i = 0; i < n; i++) cin>>a[i];

    int max_Ele=*max_element(a.begin(),a.end());
    int min_Ele=*min_element(a.begin(),a.end());

    cout<<max_Ele-min_Ele<<"\n";
}
int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
        
    int t; cin>>t;
    while(t--) {
        solve();
    }

}
