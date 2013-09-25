#include<iostream>
using namespace std;

int power(int x,int y){
	int ans;
	if(y==1) ans=x;
	else ans = x*power(x,y-1);
	return ans;
}
void main(){
	int x,y;
	cout<<"Please input the number x: ";
	cin>>x;
	cout<<"Please input the number y: ";
	cin>>y;
	cout<<"The "<<y<<"th power of "<<x<<" is "<<power(x,y)<<endl;
	system("pause");
}