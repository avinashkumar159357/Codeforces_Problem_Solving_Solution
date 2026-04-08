#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,k,sum_2=0,sum_1=0; cin>>n>>k;
    vector<int>a(n);


    for(int i=0; i<n; i++){
        cin>>a[i];
        sum_1+=a[i];
    }
    
    sum_2=k*n;
    if ((sum_2%2==0) || (sum_1%2==1)){ 
        cout<<"YES"<<"\n";
    }
    else cout<<"NO"<<"\n";  
}

int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
        
    int t; cin>>t;
    while(t--) {
        solve();
    }

}    

