#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>vec(n,0);
        for(int i=0;i<n;i++){
            cin>>vec[i];
        }
        bool is=false;
        for(int i=1;i<n-1;i++){
            bool isl=false,isr=false;
            int left=-1,right=-1;
            for(int j=0;j<i;j++){
                if(vec[i]>vec[j]){
                    left=j+1;
                    isl=true;
                    break;
                }
            }
            for(int k=i+1;k<n;k++){
                if(vec[i]>vec[k]){
                    right=k+1;
                    isr=true;
                    break;
                }
            }
            if(isl && isr){
                is=true;
                cout<<"YES"<<endl;
                cout<<left<<" "<<i+1<<" "<<right<<endl;
                break;
            }
        }
        if(!is){
            cout<<"NO"<<endl;
        }
    }
    
    return 0;
}