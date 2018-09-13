//function to find the sum of odd numbers between two numbers
//including the library
#include<iostream>
using namespace std;
			//declaring the function to find the sum of odd numbers
			int sumOddNum(int a,int b)
			{
			int sum=0;
			//looping
			for(int i=a;i<b;i++)
			{
			//condition for odd
			if(i%2!=0&&i>a)
			//add
			{  sum=sum+i; }
			}
return sum;}
			//drive function
		int main(){
			//declaring the variables
			int a,b;
			cout<<"type the lower limit"<<endl;
			cin>>a;
			cout<<"type the upper limit"<<endl;
			cin>>b;
			//showing the value
			cout<<"the sum of odd numbers between" <<a<< "and" <<b<< "is" <<sumOddNum(a,b)<<endl;
return 0;
}
