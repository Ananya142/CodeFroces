#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    string res[t];
    int a, b, c;
    for(int i=0;i<t;i++){
        cin>>a>>b>>c;
        if(a+b==c){
            res[i]="+";
        }else{
            res[i]="-";
        }
    }
    for(int i=0;i<t;i++){
        cout<<res[i]<<endl;
    }
}