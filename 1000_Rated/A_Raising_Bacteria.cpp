#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin>>n;
    int cnt = 0;
    while(n>0){
        n = n&(n-1);
        cnt++;
    }
    cout<<cnt<<" ";

    
    
    return 0;
}