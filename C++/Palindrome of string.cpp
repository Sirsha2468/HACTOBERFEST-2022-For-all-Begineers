#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
class Palindrome
{
	char a[10],b[10];
	public:
	void input()
	{
		cout<<"Enter the number/string/charecter:";
		cin>>a;
		strcpy(b,a);
		strrev(b);
			}
			void output()
			{
				if("strcmp(a,b)==0")
				cout<<"This is palindrome";
				else
				cout<<"This is not Palindrome";
			}
		};
			int main()
			{
				Palindrome obj;
				obj.input();
				obj.output();
				return 0;
			}
