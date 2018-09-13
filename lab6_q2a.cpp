//function to find the sum of two numbers
//including library
#include<iostream>
using namespace std;
		//declaring function
		int func(int a,int b){
		//adding the two int parameters
		int sum=a+b;
		//returning the sum
return sum;
}
		//Drive function
		int main(){
		//Declaring variables
		int a,b;
		// asking for two integers
		cout<<"write two numbers"<<endl;
		cin>>a;
		cin>>b;
		//call function
		cout<<func(a,b);
return 0;
}
