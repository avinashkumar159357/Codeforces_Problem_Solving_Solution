//Problem name:Snowfall
//Author:Avinash kumar (A_K_0_7)
//Email Address: aviofficial159357@gmail.com
//Problem ID:2227C
//Description:constructive algorithm,math(*800)
//Last Changed:3-05-2026

#include<bits/stdc++.h>
using namespace std;

void solve(){
   int n ; cin>>n;
   vector<long long>a(n),two,six,neutral,three,rearranged_arr;

   for (int i = 0; i < n; i++){
        cin>>a[i];                              
        if(a[i]%6==0) six.push_back(a[i]);
        else if(a[i]%2==0) two.push_back(a[i]);
        else if(a[i]%3==0) three.push_back(a[i]);
        else neutral.push_back(a[i]);  //to get minimum number of sub array whose product is divisible
   }                                //by 6 we seperate the elements which are divisible by factor of 6 
                                    //ie 2 and 3 keeping the neutral elements in between to minimize such sub arrays
   rearranged_arr.insert(rearranged_arr.end(),two.begin(),two.end());
   rearranged_arr.insert(rearranged_arr.end(),neutral.begin(),neutral.end());
   rearranged_arr.insert(rearranged_arr.end(),three.begin(),three.end());
   rearranged_arr.insert(rearranged_arr.end(),six.begin(),six.end());
   
   for(long long x: rearranged_arr) cout<<x<<" ";
   cout<<"\n";  
}
        
int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
        
    int t; cin>>t;
    while(t--) {
        solve();
    }

}    
