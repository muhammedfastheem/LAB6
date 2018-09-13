//function to find the maximum of two numbers
//including Library
#include<iostream>
using namespace std;
		//declaring function
		int func(int a,int b,int c){
		//giving condition
		if(a>b)
		c=a;
		else if(b>a)
		c=b;
	
return c; 
}
	//drive function
	int main(){
		//declaring variables
		int a,b,c;
		//asking for integers
		cout<<"write two numbers"<<endl;
		cin>>a;
		cin>>b;
		//printing result
		cout<<" maximum among is "<<func(a,b,c)<<endl;
return 0;
} 
