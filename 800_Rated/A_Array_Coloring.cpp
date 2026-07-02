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
     vector<int>v(n,0);
     int cnt=0;
     for(int &x:v){ 
        cin>>x;
        cnt+=x;
     }
     if(cnt%2){
        cout<<"NO"<<endl;
     }else{
        cout<<"YES"<<endl;
     }
    }
    return 0;
}
