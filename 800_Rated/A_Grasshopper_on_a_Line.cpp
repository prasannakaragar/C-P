#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t-->0){
        int x,k;
        cin>>x>>k;
        if(x%k !=0 ){
            cout<<1<<"\n";
            cout<<x<<"\n";
            continue;
        }else{
            for(int i=x-1;i>=1;i++){
                int j=x-i;
                if(i%k != 0 && j%k != 0){
                    cout<<2<<"\n";
                    cout<<i<<" "<<j<<"\n";
                    break;
                }
            }
        }
    }
    return 0;
}