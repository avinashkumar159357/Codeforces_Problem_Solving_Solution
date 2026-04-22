//Problem name:choosing team
//Author:Avinash kumar (A_K_0_7)
//Email Address: aviofficial159357@gmail.com
//Problem ID:432A(800)
//Description:greedy ,implementation,sorting(*800)
//Last Changed:21-4-2026
#include<bits/stdc++.h>
using namespace std;    
#define ll long long
#define fastio ios :: sync_with_stdio(0);cin.tie(0);

void solve() {
    int n,k,c=0; cin>>n>>k;
    vector<int>a(n);
    for (int  i =0; i < n; i++) cin>>a[i];

    for (int  i = 0; i < n; i++)
    {
        int x=5-a[i];
        if(x>=k) c++;
    }
    cout<<c/3;
}
int main() {
    fastio;
    int TC=1; //cin>>TC;
    while(TC--) {
        solve();
    }

}    

    