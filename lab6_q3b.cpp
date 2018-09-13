//function to find the maximum of numbers
//including library
#include<iostream>
using namespace std;
		// Declaring void function
		void funcR(int a, int b,int &c){
		if(a>b){
		c=a;
		}
		else if(b>a){
		c=b;}
		}
	//Drive function
	int main(){
		//declaring variables
		int e,f,max;
		//asking for numbers
		cout<<"write two numbers"<<endl;
		//taking values
		cin>>e;
		cin>>f;
		funcR(e,f,max);
		//printing result
		cout<<" maximum is"<<max<<endl;
return 0;
}


