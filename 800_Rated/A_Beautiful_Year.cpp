#include<bits/stdc++.h>
using namespace std;
bool isdis(int n){
    unordered_map<int,int>m;
    while(n>0){
        if(m.count(n%10)){
            return false;
        }else{
            m[n%10]++;
        }
        n/=10;
    }
    return true;
}
int main(){
    int n;
    cin>>n;
    for(int i=n+1;i<=10000;i++){
        if(isdis(i)){
            cout<<i<<endl;
            break;
        }
    }
    return 0;
}