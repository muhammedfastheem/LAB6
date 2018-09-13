//function to find the minimum of two numbers
//including library
#include<iostream>
using namespace std;
		// Declaring void function
		void funcR(int a, int b,int &c){
		//giving condition
		if(a>b)
		c=b;
		else if(b>a)
		c=a;
		}
	//Drive function
	int main(){
		//declaring variables
		int e,f,min;
		//asking for numbers
		cout<<"write two numbers"<<endl;
		//taking values
		cin>>e;
		cin>>f;
		funcR(e,f,min);
		//printing the minimum
		cout<<"the minimum among these is"<<min<<endl;
return 0;
}
