#include<bits/stdc++.h>
using namespace std;
const int mx=1e8;
void Simple_sieve(int a)
{
    vector<int>v;
    vector<int>v1(mx,0);
    if(a<2){
        cout<<"There is no prime number in this range"<<endl;
        return;
    }
    for(int i=2;i*i<=a;i++){
        if(v1[i]==0){
            for(int j=i*i;j<=a;j+=i){
                v1[j]=1;
            }
        }
    }
    for(int i=2;i<=a;i++){
        if(v1[i]==0){
            v.push_back(i);
        }
    }
    cout<<"The prime in this range = ";
    for(auto u:v){
        cout<<u<<" ";
    }
    cout<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        int a;
        cin>>a;
        Simple_sieve(a);
    }
}
