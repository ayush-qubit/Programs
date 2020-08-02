#include<bits/stdc++.h>
using namespace std;
typedef int ll;
ll n;
void solution(ll arr[]){
    ll result=arr[0];
    ll q=arr[0];
    for(ll i=1;i<n;i++){
        result+=min(q,arr[i]);
        if(arr[i]<q){
            q=arr[i];
        }
    }
    cout<<result;
}
int main(){
    ll t;
    cin>>t;
    while(t--){
       cin>>n;
       ll arr[n];
       for(ll i=0;i<n;i++){
           cin>>arr[i];
       }
       solution(arr);
       cout<<endl;     
    }
}