//Problem name:Mahmoud and Ehab and the even-odd game
//Author:Avinash kumar (A_K_0_7)
//Email Address: aviofficial159357@gmail.com
//Problem ID:959A
//Description:games, math(*800)
//Last Changed:30-4-2026

#include<bits/stdc++.h>
using namespace std;

void solve() {
   int n; cin>>n;
   vector<int>a(n),b,c;

   for (int i = 0; i <n; i++) cin>>a[i];
   
   for (int i = 0; i < n; i++)
   {
        for (int j =0; j < n; j++)
        {
            if(i!=j){
                if(a[i]%a[j]!=0){
                    b.push_back(a[i]);
                    c.push_back(a[j]);
                }
            }
            if((b.size()+c.size())==n) break;
        }
   }
   cout<<b.size()<<" "<<c.size()<<"\n";
}
int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
        
    int t=1;// cin>>t;
    while(t--) {
        solve();
    }

}
