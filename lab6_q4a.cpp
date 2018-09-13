//function to find the minimum of two numbers
//including Library
#include<iostream>
using namespace std;
		//declaring function
		int func(int a,int b,int c){
		//giving condition
		if(a>b)
		c=b;
		else if(b>a)
		c=a;
return c; 
}
	//drive function
	int main(){
		//declaring variables
		int a,b,c;
		//asking for integers
		cout<<"type two numbers"<<endl;
		cin>>a;
		cin>>b;
		//printing the minimum
		cout<<"the minimum among these number is "<<func(a,b,c)<<endl;
return 0;
} 
