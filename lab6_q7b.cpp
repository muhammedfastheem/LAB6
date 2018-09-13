//function to change uppercase character to lowercase
//including the library
#include<iostream>
using namespace std;
			//declaring the function
			char toLower(int s){
			int p;
			//looping condition
			for(int i=65;i<=90;i++){
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
			cout<<"type the alphabet in upper case"<<endl;
			cin>>inputChar;
			//type casting
			int s=int(inputChar);
			int f=toLower(s);
			//showing the result
			cout<<"lower case of the entered alphabet is "<<char(f+32)<<endl;
return 0;
}
