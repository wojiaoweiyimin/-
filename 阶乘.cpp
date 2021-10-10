#include<iostream>
using namespace std;
int f(int n){
	int sum=0;
if(n==1)return 1;
for(int i=1;i<n;i++)
return n*f(n-1);}
int main()
{
	cout<<f(5);//
