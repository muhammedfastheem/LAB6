//function to change the lowercase character to uppercase
//including the library
#include<iostream>
using namespace std;
			//declaring the function
			char toUpper(int s){
			int p;
			//looping
			for(int i=97;i<=122;i++){
	 		//finding the ASCII value
	 		if(s==i){
	 		//assigning the value
	 		p=i;}
			}
return p;
}
			//driving function
			int main(){
			//declaring the variable
			char inputChar;
			cout<<"type the alphabet in lower case"<<endl;
			//reading value
			cin>>inputChar;
			//type casting
			int s=int(inputChar);
			int f=toUpper(s);
			//displaying the result
			cout<<"upper case of the entered alphabet is "<<char(f-32)<<endl;
return 0;
}


