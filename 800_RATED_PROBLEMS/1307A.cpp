//Problem name:Cow and Haybales
//Author:Avinash kumar (A_K_0_7)
//Email Address: aviofficial159357@gmail.com
//Problem ID:1307A
//Description:greedy,implementation(*800)
//Last Changed:29-4-2026
#include<bits/stdc++.h>
using namespace std;    
#define ll long long
#define fastio ios :: sync_with_stdio(0);cin.tie(0);

void solve() {
   int n,d; cin>>n>>d;
   vector<int>a(n);
    
   for (int  i = 0; i < n; i++) cin>>a[i];

   for (int i = 1; i < n; i++)
   {
        bool flag =true;
        if(a[i]!=0 && d!=0){
            while (flag)
            {
                if((a[i]*i)<=d){
                    a[0]+=a[i];
                    d-=(a[i]*i);
                    flag=false;
                }else a[i]--;
            } 
        }
   }
   cout<<a[0]<<"\n";
}

int main() {
    fastio;
    int TC; cin>>TC;
    while(TC--) {
        solve();
    }

}    

    