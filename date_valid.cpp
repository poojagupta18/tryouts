#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int flag=0;
	int isleap=0;
	int date,month,year,yr,yr1,yr2;
	cout<<"\nEnter the date:\n";
	cin>>date;
	//cout<<"\t";
	cin>>month;
	//cout<<"\t";
	cin>>year;
	//cout<<"\t";
	if((year%4==0)&&(year%100!=0)||(year%400==0) )
		isleap=1;
	if(year<1900 || year>2050 || month<1 || month>12 )
		flag=0;
	else
		if(month == 2)
			if(date==30 || date==31 || isleap!=1)
				flag=0;
			else
				if(date==29 && isleap==1)
					flag=1;
	if(month==4 || month==6 || month==9|| month ==11)
		if(date==31)
			flag=0;
		else
			flag=1;
	if(flag==1)
		cout<<"\nEntered date is valid...\n";
	else
		cout<<"not valid\n";
	_getch();
	return 0;
}
