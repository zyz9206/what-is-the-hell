#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
using namespace std;
char a[10010],b[10010];
int a1[10010],b1[10010],ans[10010];
int main(){
	int t,p=0;
	cin>>a;
	cin>>b;
	int la=strlen(a);
	int lb=strlen(b);
	for(int i=0;i<la;i++){
		a[i]-='0';
	}
	for(int i=0;i<lb;i++){
		b[i]-='0';
	}
	for(int i=la-1;i>=0;i--){
		a1[t++]=a[i];
	}
	for(int i=lb-1;i>=0;i--){
		b1[p++]=b[i];
	}
	int k=0;
	while(k<lb||k<la||ans[k+1]){
		ans[k]=a1[k]+b1[k];
		while(ans[k]>=10){
			ans[k]-=10;
			ans[k+1]++;
		}
		k++;
	}
	for(int i=k-1;i>=0;i--){
		cout<<ans[i];
	}
}
