//Problem name:Honest coach
//Author:Avinash kumar (A_K_0_7)
//Email Address: aviofficial159357@gmail.com
//Problem ID:1360B
//Description: greedy ,sorting(800)
//Last Changed:20-4-2026
#include<bits/stdc++.h>
using namespace std;    
#define ll long long
#define fastio ios :: sync_with_stdio(0);cin.tie(0);

void solve() {
    int n ; cin>>n;
    vector<int>a(n);
    for(int i=0;i< n; i++) cin>>a[i];

    sort(a.begin(),a.end());
    int ans=abs(a[0]-a[1]);
    for (int  i = 1; i < n; i++)
    {
        if(i!=n-1){
            int diff=abs(a[i]-a[i+1]);
            ans=min(ans,diff);
        }
    }
    cout<<ans<<"\n";
    
}

int main() {
    fastio;
    int TC; cin>>TC;
    while(TC--) {
        solve();
    }

}    

 