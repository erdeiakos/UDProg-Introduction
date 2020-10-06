#include "std_lib_facilities.h"



int main()
{
	double a=0,b=0;
	vector<double> asd; 
	/*while(cin>>a>>b)
	{
		if(a<b)
		{
			cout<<"A "b" a nagyobb: "<<b<<endl;
			cout<<"Az "a" a kisebb: "<<a<<endl;
		}
		if(a>b)
		{
			cout<<"Az "a" a nagyobb: "<<a<<endl;
			cout<<"A "b" a kisebb: "<<b<<endl;
		}
		if(a==b)
		{
			cout<<"Egyenlőek"<<endl;
		}
		if(abs(a-b)<=0.01)
		{
			cout<<"Majdnem egyenlőek"<<endl;
		}
	
	}*/
	double smallest=0,largest=0;
	double sum=0;
	bool check=true;
	string unit;
	while (cin >> a>>unit)
	{
		
		
		if(unit=="cm")
		{
			a=a/100;
			asd.push_back(a);
			sum+=a;
			
		
		}
		else if(unit=="m")
		{
			a=a;
			asd.push_back(a);
			sum+=a;
			
		
		}
		 else if(unit=="in")
		{
			a=(a*2.54)/100;
			asd.push_back(a);
			sum+=a;
			
		}
		 else if(unit=="ft")
		{
			a=((a*12)*2.54)/100;
			asd.push_back(a);
			sum+=a;
			
		}else
		{
			simple_error("nope");
		}
		if(check)
		{
			smallest=a;
			largest=a;
			check=false;
		}
		
		if(a<=smallest)
		{
			smallest=a;
			
		}
		if(a>=largest)
		{
			largest=a;
			
		}
		 
		sort(asd);
		cout<<"A legkisebb szám: "<<smallest<<"m"<<endl;
		cout<<"A legnagyobb szám: "<<largest<<"m"<<endl;
		cout<<asd.size()<<" elem"<<endl<<"sum: "<<sum<<" m"<<endl;
		for(double i:asd)
		{
			cout<<i<<"m\t"<<endl;
		}
	}
	
	
	
	return 0;
}

