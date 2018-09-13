//function to find the sum of square of even numbers between two numbers
//including library
#include<iostream>
using namespace std;
			//declaring function
			int sumSquareEvenNumbers(int a,int b)
			{  
  			int sum=0;
			//looping
			for(int i=a;i<b;i++)
			//condition for even numbers
			{if(i%2==0&&i>a)
			//add
			{ sum=sum+(i*i);}}
return sum;}
		int main(){
			//declaring the variables
			int a,b;
			cout<<"type the lower limit"<<endl;
			cin>>a;
			cout<<"type the upper limit"<<endl;
			cin>>b;
			//displaying the result
			cout <<"the sum of square  of even numbers between"<<a<<"and"<<b<<"is"<<sumSquareEvenNumbers(a,b)<<endl;
return 0;
} 
