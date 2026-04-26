//Problem name:Eating game
//Author:Avinash kumar (A_K_0_7)
//Email Address: aviofficial159357@gmail.com
//Problem ID:2200A(800)
//Description:greedy(*800)
//Last Changed:26-4-2026

#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n,c=0; cin>>n;
    vector<int>a(n);
    for (int  i = 0; i < n; i++) cin>>a[i];

    if(n==1){
        cout<<"1\n";
        return;
    }
    int max_ele=*max_element(a.begin(),a.end());
    for (int i = 0; i < n; i++){
        if(a[i]==max_ele)c++;
    }
    cout<<c<<"\n";
}
int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
        
    int t; cin>>t;
    while(t--) {
        solve();
    }

}
