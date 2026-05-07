#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int a,b;
    cin>>a>>b;
    int p1=0,p2=0,p3=0;
    for(int i=1;i<=6;i++){
        int p=abs(a-i);
        int q=abs(b-i);
        if(p>q){
            p1++;
        }else if(q>p){
            p3++;
        }else{
            p2++;
        }
    }
    cout<<p3<<" "<<p2<<" "<<p1<<"\n";
    return 0;
}