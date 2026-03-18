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
        int cpy =n;
        int ndig=0;
        while(cpy>0){
            ndig++;
            cpy/=10;
        }
        cpy=n;

        for(int i=1;i<ndig;i++){
           cpy/=10;
        }
        if(n<10){
            cout<<n<<"\n";
        }else if(10<=n && n<100){
            cout<<9+cpy<<"\n";
        }else if(100<=n && n<1000){
            cout<<18+cpy<<"\n";
        }else if(1000<=n && n<10000){
            cout<<27+cpy<<"\n";
        }else if(10000<=n && n<100000){
            cout<<36+cpy<<"\n";
        }else if(100000<=n && n<1000000){
            cout<<45+cpy<<"\n";
        }
        
    }
    
    return 0;
}