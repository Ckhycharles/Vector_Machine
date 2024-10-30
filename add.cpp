#include<iostream>

using namespace std;
int getsum(int a ,int b)
{
	return a +b;
	
	
}
int main(){
	int a,b,result;
	cin>>a>>b;
	result=getsum(a,  b);
	cout<<result;
	
}