#include<iostream.h>
#include<conio.h>

class day
	{
	public:
	int date,month,year;

	void getday(int r)
		{
		//cout<<"\n\tDD :\t";
		cout<<"__/__/____";
		gotoxy(25,r);
		cin>>date;
		gotoxy(28,r);
		//cout<<"\tMM:\t";
		cin>>month;
		gotoxy(31,r);
		//cout<<"\tYYYY :\t";
		cin>>year;
		}

	int checkdate();

	void showday()
		{
		cout<<date<<"/"<<month<<"/"<<year;
		}

	void calc(day,day);

	}dob,today;




int day::checkdate()
	{
	int a=0;
	if(date>31||date<1)
		{
		cout<<"\n\t\t\tInvalid Date!!\n\n\t\t\tPress any key to retry.";
		getch();
		}
	else
		{
		if(month>12||month<1)
			{
			cout<<"\n\t\t\tInvalid Date!!\n\n\t\t\tPress any key to retry.";
			getch();
			}
		else
			{
			if(year<1)
				{
				cout<<"\n\t\t\tInvalid Date!!\n\n\t\t\tPress any key to retry.";
				getch();
				}
			else
				a=1;
			}
		}
	return a;
	}
void day::calc(day birth,day todays)
	{
	if (birth.month<=todays.month)
		{
		year=todays.year-birth.year;
		month=todays.month-birth.month;
		if (birth.date<=todays.date)
			{
			date=todays.date-birth.date;
			}
		else
			{
			month--;
			date=(31-birth.date)+todays.date;
			}
		}
	else
		{
		year=(todays.year-birth.year)-1;
		month=(12-birth.month)+todays.month;
		if (birth.date<=todays.date)
			{
			date=todays.date-birth.date;
			}
		else
			{
			month--;
			date=(31-birth.date)+todays.date;
			}
		}
	}