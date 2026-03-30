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
        int H,M;
        cin>>H>>M;
        int gmin=H*60+M;
        int count=INT_MAX;
       
        for(int i=0;i<n;i++){
            int hi,mi;
            cin>>hi>>mi;
            int imin=hi*60+mi;
            if(imin<gmin){
                imin+=1440;
            }
            if(hi==H && mi==M){
                count=0;
            }
            count=min(count,imin-gmin);

        }
        
        cout<<count/60<<" "<<count%60<<"\n";
    }
    
    return 0;
}