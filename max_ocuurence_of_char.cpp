#include<bits/stdc++.h>
using namespace std;
int main(){
string x;
cin>>x;
int freq[26];
for(int i=0;i<26;i++){
    freq[i]=0;
}
for(int i=0;i<x.size();i++){
freq[x[i]-'a']++;
}
int max_occ=0;
char ans;
for(int i=0;i<26;i++){
    if(freq[i]>max_occ){
        max_occ=freq[i];
        ans='a'+i;
    }
}
cout<<ans<<" has occured "<<max_occ<<" times"<<endl;
}
