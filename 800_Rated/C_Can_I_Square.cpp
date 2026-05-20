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
        long long sum = 0;
        while(n--){
            int k;
            cin>>k;
            sum+=k;
        }
        long long s = sqrt(sum);
        if(s*s == sum){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
    
    return 0;
}