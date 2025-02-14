#include<iostream>
using namespace std;
int main()
{
	char gender;
	int age;
	
	cout<<"PLEASE enter your Gender \nM for male and F for female (Gender):";
	cin>>gender;
	cout<<"PLEASE enter your age";
	cin>>age;
	if (gender=='M' ||gender=='m')
	{
		(age<=25)?cout<<"You can enjoy the rides" : cout<<"Sorry, these rides are not safe for you";
	}
    else
    { 
    if(gender=='F' ||gender=='f')
    	{
		char health;
    	cout<<"Do you have any HEALTH issues\ntake Y for yes and N for no (health issues): ";
    	cin>>health;
    	(health='y')? cout<<"You can enjoy the rides" : cout<<"Sorry, these rides are not safe for you";
        }
    else 
	cout<<"wrong gender input" ;   
	}
    return 0;
}
