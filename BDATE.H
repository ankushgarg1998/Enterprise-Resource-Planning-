class day
	{
	int date,month,year;

	public:

	void getday(int,int);
	int checkdate();
	void showday()
		{
		cout<<date<<"/"<<month<<"/"<<year;
		}
	//void calc(day,day);

	};//dob,today;


void day::getday(int x,int y)
		{
		gotoxy(x,y);
		cout<<"__/__/____";
		int z;
		do
			{
			gotoxy(x,y);
			cin>>date;
			gotoxy(x+3,y);
			cin>>month;
			gotoxy(x+6,y);
			cin>>year;
			z=checkdate();
			}while(z==0);
		}


int day::checkdate()
	{
	int a=0;
	if(date>31||date<1)
		{
		cout<<"\tInvalid Date!!\tPress any key to retry.";
		getch();
		}
	else
		{
		if(month>12||month<1)
			{
			cout<<"\tInvalid Date!!\tPress any key to retry.";
			getch();
			}
		else
			{
			if(year<1)
				{
				cout<<"\tInvalid Date!!\tPress any key to retry.";
				getch();
				}
			else
				a=1;
			}
		}
	return a;
	}


/*void day::calc(day birth,day todays)
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
	}*/