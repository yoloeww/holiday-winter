#include<iostream>using namespace std;int main(){    int n;    int a[100000];    a[1]=1;    a[2]=2;    for(int i=3;i<100000;i++)        a[i]=(2*a[i-1]+a[i-2])%32767;    while(cin>>n){        int k;        for(int i=0;i<n;i++){            cin>>k;            cout<<a[k]<<endl;        }    }}