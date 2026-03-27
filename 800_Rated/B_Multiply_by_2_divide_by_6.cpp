#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--){
     int n;
     cin>>n;
     int cpy=n;
     int count=0;
     while(cpy!=1){
        if(cpy%6==0){
            cpy/=6;
            count++;
        }else if(cpy%3==0){
            cpy*=2;
            count++;
        }else{
            break;
        }
     }
        if(cpy==1){
            cout<<count<<"\n";
        }else{
            cout<<-1<<"\n";
        }
        
    }
    
    return 0;
}