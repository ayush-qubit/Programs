#include<bits/stdc++.h>
using namespace std;
void solution(string str){
    int n=(int)str.length();
    int count=0;
    int len=0;
    for(int i=0;i<n;i++){
        if(str[i]=='>' && count<=0){
            break;
        }
        else if(str[i]=='<'){
            count++;
        }
        else{
            count--;
            if(count==0){
                len=i+1;
            }
        }
    }
    cout<<len;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        solution(str);
        cout<<endl;
    }
}