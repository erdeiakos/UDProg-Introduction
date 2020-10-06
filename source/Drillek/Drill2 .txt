#include "std_lib_facilities.h"

int main()
{
	string firstname;
	
	cout<<"Enter the name of the person you want to write to"<<endl;
	cin>>firstname;
	cout<<"Dear "<<firstname<<endl;
	cout<<"How are you?I'm fine.I miss you.i want to buy creativity."<<endl;
	string othername;
	cout<<"Enter the name of an other friend"<<endl;
	cin>>othername;
	cout<<"Have you seen "<<othername<<" lately?"<<endl;
	char friendsex=0;
	cout<<"Enter your friend sex (if your friend is male:m,if female:f)"<<endl;
	cin>>friendsex;
	if(friendsex=='m')
	{
		cout<<"If you see "<<othername<<" please ask him to call me"<<endl;
	}
	else if(friendsex=='f')
	{
		cout<<"If you see "<<othername<<" please ask him to call me"<<endl;
	}
	int age=0;
	cout<<"Enter your age"<<endl;
	cin>>age;
	if(age>0 && age<110)
	{
		cout<<"I hear you just had a birthday and you're "<<age<<" years old"<<endl;
		
	}
	else 
	{
		simple_error("you're kidding");
	}
	if(age<12)
	{
		cout<<"Next year you will be "<<age+1<<endl;
	
	}else if(age==17)
	{
		cout<<"Next year you will be able to vote!"<<endl;
	
	}else if(age>70)
	{
	
		cout<<"I hope you are enjoying retirement"<<endl;
	
	}
	cout<<endl<<endl<<"Yours sincerely"<<endl<<"Erdei Ákos"<<endl;
	
	
	return 0;
}

