#include<iostream>
#include <iomanip>
using namespace std;
int main(){
    int n,x;
    cin>>n;
    double  sum=0;
    for(int i=1;i<=n;i++){
        cin>>x;
        sum=(sum+x);
    }
    cout<< setprecision(12)<<sum/n;
}