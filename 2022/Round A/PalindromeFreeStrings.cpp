#include<bits/stdc++.h>
using namespace std;
int longestPalSubstr(string str)
{
    int n = str.size();
    if (n < 2)
        return n;
 
    int maxLength = 1,start=0;
    int low, high;
    for (int i = 0; i < n; i++) {
        low = i - 1;
        high = i + 1;
        while ( high < n && str[high] == str[i]) //increment 'high'                                  
            high++;
       
        while ( low >= 0 && str[low] == str[i]) // decrement 'low'                   
            low--;
       
        while (low >= 0 && high < n && str[low] == str[high]){
              low--;
            high++;
        }
 
        int length = high - low - 1;
        if (maxLength < length) {
            maxLength = length;
              start=low+1;
        }
    }
    return maxLength;
}
int dfs(string s,int &n,int i){
    if(i==n){
        return longestPalSubstr(s);
    }
    if(s[i]!='?'){
        return dfs(s,n,i+1);
    }
    s[i]='0';
    int count=dfs(s,n,i+1);
    if(count<5){
        return count;
    }
    s[i]='1';
    return dfs(s,n,i+1);
}
int main(){
    int test;
    cin>>test;
    for(int t=1;t<=test;t++){
        int n;
        string s;
        cin>>n>>s;
        int count=dfs(s,n,0);
        string result="POSSIBLE";
        if(count>=5){
            result="IM"+result;
        }
        
        cout<<"Case #"<<t<<": "<<result<<"\n";
        
    }
}
