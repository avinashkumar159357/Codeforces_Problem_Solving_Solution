//Problem name:Grasshoper on a line
//Author:Avinash kumar (A_K_0_7)
//Email Address: aviofficial159357@gmail.com
//Problem ID:1837A
//Description:,constructive algorithm,math(800)
//Last Changed:20-4-2026
#include<bits/stdc++.h>
using namespace std;    
#define ll long long
#define fastio ios :: sync_with_stdio(0);cin.tie(0);

void solve() {
    int x,k; cin>>x>>k;
    if (x%k!=0) 
    {
        cout<<"1\n";
        cout<<x<<"\n";
    }else{
        for (int  i =x-1 ; i >0; --i)
        {
            if(i%k!=0 && (x-i)%k!=0){
                cout<<"2\n";
                cout<<i<<" "<<(x-i)<<"\n";
                break;
            }
        }
        
    }
    
}

int main() {
    fastio;
    int TC; cin>>TC;
    while(TC--) {
        solve();
    }

}    

 