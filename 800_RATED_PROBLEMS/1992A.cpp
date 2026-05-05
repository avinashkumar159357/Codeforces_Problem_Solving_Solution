//Problem name:Only Pluses
//Author:Avinash kumar (A_K_0_7)
//Email Address: aviofficial159357@gmail.com
//Problem ID:1992A
//Description:brute force ,constructive algortihm,greedy, math, sorting(*800)
//Last Changed:5-5-2026
#include<bits/stdc++.h>
using namespace std;    
#define ll long long
#define fastio ios :: sync_with_stdio(0);cin.tie(0);


void solve(){
    vector<int>a(3);
    for (int i = 0; i < 3; i++)cin>>a[i];
    int k=5;
    while (k--)
    {
        int ind=min_element(a.begin(),a.end())-a.begin();
        a[ind]++;
    }
    int prod=1;
    for (auto &&x : a)
    {
        prod*=x;
    }
    cout<<prod<<"\n";
    
}
int main() {
    fastio;
    int TC; cin>>TC;
    while(TC--) {
        solve();
    }

}    

    