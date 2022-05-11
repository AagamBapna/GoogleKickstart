#include<bits/stdc++.h>
using namespace std;
bool divisible(long long int n){
    long long int sum=0,product=1;
    while(n){
        int t=n%10;
        n/=10;
        sum+=t;
        product*=t;
    }
    return (product%sum==0);
}
int main(){
    int test;
    cin>>test;
    for(int t=1;t<=test;t++){
        long long int a,b;
        cin >>a>>b;
        long long int count=0;
        for(long long int i=a;i<=b;i++){
            if(divisible(i)){
                count+=1;
            }
        }
        
        cout<<"Case #"<<t<<": "<<count<<"\n";
        
    }
}
