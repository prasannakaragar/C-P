#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin>>n;
    vector<int>vec(2*n,0);
    bool onlyone=true;
    cin>>vec[0];
    for(int i=1;i<2*n;i++){
        cin>>vec[i];
        if(vec[i]!=vec[i-1]){
            onlyone=false;
        }
    }
    if(onlyone){
        cout<<-1<<"\n";
        return 0;
    }
    sort(vec.begin(),vec.end());
    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<" ";
    }
    cout<<"\n";
    
    return 0;
}