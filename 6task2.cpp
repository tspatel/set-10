#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int a=5,b=0,c;
	try{
		if(b==0)
		{
			throw 10;
		}
		else
		{
			c=a/b;
			cout<<"Divided = "<<c<<endl;
		}
	}
	catch(...)
	{
		cout<<"cannot divided by zero"<<endl; 
	}
}
