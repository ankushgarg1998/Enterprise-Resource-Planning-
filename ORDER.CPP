#include<bdate.h>
#include<stdio.h>
#include<string.h>
#include<fstream.h>
#include<orders.h>
#include<tables.h>

void main()
	{
	//remove("Orders.dat");
	int c;
	order o1,o2;
	do
		{
		clrscr();
		gotoxy(25,3);
		cout<<"1. Place Order\n\t\t\t2. Show my Orders\n\t\t\t3. Exit\n\n\t\t\tEnter your choice (1/2/3) : ";
		cin>>c;
		int row;
		if(c==1)
			{
			clrscr();
			o1.getorder();
			o1.writeorder();
			}
		else if(c==2)
			{
			clrscr();
			ifstream zin;
			zin.open("Orders.dat",ios::in|ios::nocreate);
			if(!zin)
				{
				cout<<"\nNo Records Exist !\nPress any key to Continue.";
				getch();
				}
			else
				{
				cout<<"Enter your Sales Code : ";
				char s1[3];cin>>s1;
				cout<<"\nShow by :\n1. Customer Name\n2. Date\n Enter your choice(1/2) :";
				int c2;
				cin>>c2;
				switch(c2)
					{
					case 1: {
						char cusname[30];
						cout<<"\nEnter Customer Name : ";
						gets(cusname);
						int serial=8;
						tablecustomername(cusname,s1);
						while(zin)
							{
							zin.read((char*)&o1,sizeof (o1));
							if(strcmpi(s1,o1.salescode)==0)
								{
								if(strcmpi(o1.customername,cusname)==0)
									{
									o1.fillintable(serial);
									serial++;
									}
								}
							}
						getch();
						}
					case 2: cout<<"Not ready Yet :P";

					default : cout<<"\n Invalid Choic";
					}
				}
			}
		else if(c!=3)
			{
			cout<<"\n\n\t\t\tInvalid Choice! Press any Key to retry.";
			getch();
			}

		}while(c!=3);


	}