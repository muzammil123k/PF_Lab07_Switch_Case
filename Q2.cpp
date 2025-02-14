#include<iostream>
using namespace std;
int main()
{
	char ch;
	cout<<"please input any character";
	cin>>ch;
	switch((ch>=48 && ch<=57) ||(ch>=65 && ch<=90) || (ch>=97 && ch<=22))
	{
		case 1:
			cout<<"valid output";
			switch((ch>=48 && ch<=57))
			{
				case 1:
					cout<<"Digit "<<ch;
					break;
				case 0:
					cout<<"Alphabet "<<ch;
					break;
					
			}
			break;
		case 0:
			cout<<"INVALID output";
			break;
	 	
	}
	return 0;
}
