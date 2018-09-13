//function to find the sum of two numbers
//including the library
#include<iostream>
using namespace std;
		//declaring a void function
		void funcR(int a, int b,int &s)
		{
		s=a+b;
		}
	//Drive function
	int main(){
		//Declaring variables
		int a,b,sum;
		//asking for number
		cout<<"write two numbers"<<endl;
		cin>>a;
		cin>>b;
		//call the numbers for aurgument
		funcR(a,b,sum);
		//print sum
		cout<<sum;
return 0;
}
