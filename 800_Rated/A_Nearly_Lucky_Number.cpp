#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    long long n;
    cin>>n;
    int count=0;
    while(n>0){
        if( n%10==7 || n%10==4){
            count++;
        }
        n/=10;
    }
    if(count == 4 || count == 7){
        cout<<"YES\n";
    }else{
        cout<<"NO\n";
    }
    
    return 0;
}