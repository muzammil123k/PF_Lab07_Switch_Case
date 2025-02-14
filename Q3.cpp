#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	cout<<"---Welcome to Fast Bank---\n1. My Account\n2. Funds Transfer\n3. Load Mobile Bundles\n ";
	char ch;
	int bal=25000.2;
	cin>>ch;
	switch (ch)
	{
		case '1':
			cout<<"Muzzamil Ahmed\nBalance Rs."<<bal;
			break;
		case '2':
			if (bal>=5000)
			{
			string beni;
			cout<<"Enter banificiary name:"<<endl;
			cin>>beni;
			cout<<"Select Bank of Baneficiary:\na. Alfalah Bank\nb. Bank of Punjab\nf.Fast Bank";
			cin>>ch;
			switch (ch)
			{
				case 'a':
					cout<<"beneficiary does not have a Fast bank account";
					break;
				case 'b':
					cout<<"beneficiary does not have a Fast bank account";
					break;
				case 'f':
					cout<<"Enter transfer amount:\n";
					int amma;
					cin>>amma;
					if (amma<bal)
					{ 
					bal=bal-amma;
					cout<<"Rs."<<amma<<"have been transferd to "<<beni<<"your balance="<<bal;
				    } 
				    else
				    cout<<"not enough bal";
				    break;
				}
				    
				
					
		
			}
			else 
			cout<<"your Balance must bemore then 5000 to enjoy service";
			break;
		case '3':
			if (bal>5000)
			{
				cout<<"u. Ufone\nt. Telenor";
				cin>>ch;
				switch (ch)
				{
					case 'u':
						cout<<"1. supper card plus\n2. supper card gold\n";
						cin>>ch;
						switch (ch)
						{
							case '1':
								bal=bal-699;
								cout<<"your supper card plus have been loaded your bal="<<bal;
								break;
							case '2':
								bal=bal-1099;
								cout<<"your supper card gold have been loaded your bal="<<bal;
								break;
					}
					case 't':
						cout<<"1. supper card plus\n2. supper card gold\n";
						cin>>ch;
						switch (ch)
						{
							case '1':
								bal=bal-699;
								cout<<"your supper card plus have been loaded your bal="<<bal;
								break;
							case '2':
								bal=bal-1099;
								cout<<"your supper card gold have been loaded your bal="<<bal;
								break;			
								
							
								
								
						}
				}
			}
			
			
			
			
		
	}
	
}
