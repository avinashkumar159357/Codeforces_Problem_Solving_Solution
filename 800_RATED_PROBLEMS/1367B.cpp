//Problem name:Even Array
//Author:Avinash kumar (A_K_0_7)
//Email Address: aviofficial159357@gmail.com
//Problem ID:1367B(800)
//Description:greedy,math(*800)
//Last Changed:21-4-2026
#include<bits/stdc++.h>
using namespace std;    
#define ll long long
#define fastio ios :: sync_with_stdio(0);cin.tie(0);

void solve() {
    int n,c=0; cin>>n;
    vector<int>a(n);
    bool flag=true;
    for (int  i =0; i < n; i++) cin>>a[i];

    for (int  i = 0; i < n; i++){
        if (i%2!=a[i]%2)
        {
            for (int  j = i+1; j < n; j++){
                if((j%2!=a[j]%2) && (a[i]%2!=a[j]%2)){
                    swap(a[i],a[j]);
                    c++;
                    break;
                }
                 
            }
        }
    }
   for (int  i = 0; i < n; i++)
    {
        if (i%2!=a[i]%2){
            flag=false;
            break;
        }
    }
    if(flag) cout<<c<<"\n";
    else cout<<"-1\n";
    
}
int main() {
    fastio;
    int TC; cin>>TC;
    while(TC--) {
        solve();
    }

}    

    