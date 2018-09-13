//program to find max or minor sum of given numbers
//library
#include<iostream>
using namespace std;
		//declaring function for sum
		void func1(int a,int b, int &sum)
		{
		sum=a+b;
		}
		//declaring function for finding maximum
		void func2(int a,int b,int &c)
		{
		//condition for a being the maximum 
		if (a>b)
		{
		c=a;}
		//condition for b being the maximum
		else if(b>a){
	 	c=b;}
		}
		//declaring function for finding minimum
		void func3(int a,int b,int &c){
		//condition for a being minimum
		if (a<b){
		c=a;}
		//condition for b beimg minimum
		else if(a>b){
		c=b;}
		}
	//Drive function
	int main(){
		//Declaring variable
		int a,b,sum,c,max,min;
		//asking user for the numbers
		cout<<"write any two numbers"<<endl;
		//assigning value for the variable
		cin>>a;
		cin>>b;
		//asking user which operation does he want to perform
		cout<<"type 1 for sum,type 2 for max, type 3 for min"<<endl;
		cin>>c;
		//condition for performing sum
		if(c==1){
	 	//call the numbers for the argument
	 	func1(a,b,sum);
		//show user the sum
		cout<<"the sum of the given numbers is "<<sum<<endl;}
	 	//to find maximum
		if(c==2){
	 	//call the numbers for the argument
	 	func2(a,b,max);
	 	//showing the user max
		cout<<"the maximum is "<<max<<endl;}
		//finding minimum
		if(c==3){
	 	//call the numbers for argument
	 	func3(a,b,min);
	 	//showing user the minimum
		 cout<<"the minimum is "<<min<<endl;}

return 0;
} 
