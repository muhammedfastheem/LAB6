//function for finding the sum of square of odd numbers between two numbers
//including library
#include<iostream>
using namespace std;
		//declaring the function
		int sumSquareOddNum(int a,int b)
		{
		int sum=0;
		//looping
		for(int i=a;i<b;i++)
		{
		//giving condition for odd
		if(i%2!=0&&i>a)
		//add
		{  sum=sum+(i*i); }
		}
return sum;}
	//drive function
	int main(){
		//declaring the variables
		int a,b;
		//asking for input
		cout<<"type the lower limit"<<endl;
		cin>>a;
		cout<<"type the upper limit"<<endl;
		cin>>b;
		//showing value
		cout<<"the sum of square of odd numbers between"<<a<<"and"<<b<<"is"<<sumSquareOddNum(a,b)<<endl;
return 0;
}
