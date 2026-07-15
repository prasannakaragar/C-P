#include<bits/stdc++.h>
using namespace std;
#define endl '\n'  

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b,c;
    cin>>a>>b>>c;
    int mx = max(a,max(b,c));
    int mn = min(a,min(b,c));
    if(abs(mx-mn)>=10){
        cout<<"check again"<<endl;
    }else{
        cout << "final " << (a + b + c - mx - mn) << '\n';
    }
    
    return 0;
}
