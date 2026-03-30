#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int k,s;
    cin>>k>>s;
    int count=0;
    for(int i=0;i<=k;i++){
        for(int j=0;j<=k;j++){
            if(s-i-j>=0 && s-i-j<=k){

                if(i+j+(s-i-j) == s){
                        count++;
                }
                
            }    
        }
    }
    cout<<count<<"\n";
    
    return 0;
}