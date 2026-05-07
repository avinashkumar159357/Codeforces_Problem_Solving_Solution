//File name:Twins
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID: 160A
//Description:greedy,sorting(*900)
//Last Changed:6-05-2026
#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin>>n;
    int total_sum=0,no_of_coin=0;
    vector<int>a(n);
    //taking input as well as taking total sum of all elements
    for (int  i = 0; i < n; i++){
        cin>>a[i];
        total_sum+=a[i];
    } 
    int my_sum=0;
    //sorting in descending order so that i can start taking the higher value coin 
    sort(a.begin(),a.end(),greater<int>());//to be able to have minimum no of coins to avoid deception

    for (int i = 0; i < n; i++)
    {
        my_sum+=a[i];
        total_sum-=a[i];
        if(my_sum>total_sum){//checking the condition if my sum is strictly 
            no_of_coin=i;//greater than my brothers sum
            break;
        }
    }
    cout<<no_of_coin+1;
}
int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
        
    int t=1;// cin>>t;
    while(t--) {
        solve();
    }

}