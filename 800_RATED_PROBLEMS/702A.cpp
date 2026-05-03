//Problem name:Maximum Increase
//Author:Avinash kumar (A_K_0_7)
//Email Address: aviofficial159357@gmail.com
//Problem ID:702A
//Description:dp,greedy,implementation(*800)
//Last Changed:3-05-2026

#include<bits/stdc++.h>
using namespace std;

void solve() {
   int n; cin>>n;
   vector<long long>a(n);

   for (int i = 0; i <n; i++) cin>>a[i];
   int count=1,max_increase=1;
   for (int  i = 0; i < n-1; i++)
   {
        if(a[i]<a[i+1]){
            count++;
        }else{
            max_increase=max(count,max_increase);
            count=1;
        }
   }
   max_increase=max(max_increase,count);
   
   cout<<max_increase;
}
int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
        
    int t=1;// cin>>t;
    while(t--) {
        solve();
    }

}
