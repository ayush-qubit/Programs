#include<bits/stdc++.h>
using namespace std;
typedef long int ll;
string str;
ll n,len;
void solution(string str){
    n=(ll)str.length();
    stack<char> s;
    len=0;
    for(ll i=0;i<n;i++){
        
    }
    if(!s.empty()){
        cout<<0;
    }
    else{
        cout<<len;
    }
}
int main(){
    ll t;
    cin>>t;
    while(t--){
        cin>>str;
        solution(str);
        cout<<endl;
    }
}