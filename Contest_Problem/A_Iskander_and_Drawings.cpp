#include<bits/stdc++.h>
using namespace std;
#define endl '\n'  

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
     int n;
     cin>>n;
     string s;
     cin>>s;
     int ans = INT32_MIN;

     int cnt = 0;
     for(char ch : s){
        if(ch == '#'){
            cnt++;
            ans=max(ans,cnt);
        }else{
            cnt = 0;
        }
     }      
     if(ans == INT32_MIN){
        cout<<0<<endl;
        continue;
     }  
     cout<<(ans+1)/2<<endl;
    }
    return 0;
}
