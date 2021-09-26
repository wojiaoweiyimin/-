#include<iostream>
using namespace std;
int f(int n){
	int sum=0;
if(n==1)return 1;
for(int i=1;i<n;i++)
return n*f(n-1);}
int main()
{
	cout<<f(5);//最好时间复杂度为O(1),最坏时间复杂度为O（n*n),平均时间复杂度为O(N*N)
}
