//function to find the sum of even numbers between two numbers
#include<iostream>
using namespace std;

				//declaring the function that outputs the sum of all even numbers
				int sumEvenNumbers(int a,int b)
				{  
				int sum=0;
				//looping
			 	for(int i=a;i<b;i++)
				//condition for even numbers
				{if(i%2==0&&i>a)
				//add
				{ sum=sum+i;}}
return sum;}
		int main(){
				//declaring the variables
				int a,b;
				cout<<"type the lower limit"<<endl;
				cin>>a;
				cout<<"type the upper limit"<<endl;
				cin>>b;
				//showing the result
				cout<<"sum of even numbers between"<<a<<"and"<<b<<"is" <<sumEvenNumbers(a,b)<<endl;
return 0;
} 
