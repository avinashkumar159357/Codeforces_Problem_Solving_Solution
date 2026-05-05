//File name:Forbidden Integer
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID: 1845A
//Description:implementation,constructive algorithm, math,number theory(*800)
//Last Changed:5-05-2026
#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n,x,k; cin>>n>>k>>x;

    vector<int>a;
    bool flag=false;
    int y,z,h;
    if(x==1){// this brute force approach is little complex and longer
        if(k==2){   //but i still like my own answers(that is completely made by me)
            if(n%2==0){//it is also good to review others solution to learn diffferent approach.
                flag=true;
                y=n/2;
                h=2;
                z=0;
            }
        }else if(k>2){
            if (n%2==0)
            {
                flag=true;    //this upper block is handling for x==1 and k>=2
                y=n/2;
                h=2;
                z=0;
            }else{
                n=n-3;
                y=n/2;
                h=2;
                z=3;
                flag=true;
            }
        }
    }
    else{
        for (int i = k; i>0; i--)
        {
            if(i<=n && i!=x){
                if((n%i)!=x){ //but this lower block handles if x==2 or different
                    y=n/i;
                    z=n%i;
                    h=i;
                    flag=true;
                    break;
                }
            }
        }
    }// you can look to tutorial section if you want a much simpler answer
    if(flag){
        a.insert(a.end(),y,h);
        if(z!=0) a.push_back(z);
        cout<<"YES\n";
        cout<<a.size()<<"\n";
        for(int b:a) cout<<b<<" ";
        cout<<"\n";
    }else cout<<"NO\n";
}
int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
        
    int t; cin>>t;
    while(t--) {
        solve();
    }

}