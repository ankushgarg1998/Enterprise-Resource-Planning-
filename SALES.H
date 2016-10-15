void sales()
	{
	int ch;
	char yn,found;
	char cusname[20],salcode[3],itmname[20];
	ifstream zin;
	do
		{
		clrscr();
		cout<<"********************************************************************************";
		cout<<"\n\t\t\t\t  SALES DEPARTMENT";
		cout<<"\n\n\t\t\t\t01. Place Orders ";
		cout<<"\n\n\t\t\t\t02. View All my Orders";
		cout<<"\n\n\t\t\t\t03. View a Customer's Orders";
		cout<<"\n\n\t\t\t\t04. Exit\n\n\t";
		cout<<"Select Your Option (1-4) \t";
		cin>>ch;
		switch(ch)
			{
			case 1 :clrscr();
				do
					{
					clrscr();
					o1.getorder();
					cout<<"\nConfirm Order (Y/N): ";
					cin>>yn;
					if(yn=='y'||yn=='Y')
						o1.writeorder();
					cout<<"\n Want to Add more ?(Y/N): ";
					cin>>yn;
					}while(yn=='y'||yn=='Y');
				break;
			case 2 :
				clrscr();
				found='n';
				cout<<"Enter your Sales Code : ";
				gets(salcode);
				zin.open("Orders.dat",ios::in|ios::binary|ios::nocreate);
				int serial1=7;
				tablesalescode(salcode);
				while(zin)
					{
					zin.read((char*)&o1,sizeof (o1));
					if(!zin.eof())
						{
						if(strcmpi(salcode,o1.retsalescode())==0)
							{
							o1.fillintable1(serial1);
							found='y';
							serial1++;
							}
						}
					}
				zin.close();
				if(found=='n')
					{
					clrscr();
					cout<<" NO RECORDS for given data found !";
					}
				getch();
				break;
			case 3 :
				clrscr();
				found='n';
				cout<<"Enter your Sales Code : ";
				gets(salcode);
				cout<<"\nEnter Customer Name : ";
				gets(cusname);
				zin.open("Orders.dat",ios::in|ios::binary|ios::nocreate);
				int serial=8;
				tablecustomername(cusname,salcode);
				while(zin)
					{
					zin.read((char*)&o1,sizeof (o1));
					if(!zin.eof())
						{
						if(strcmpi(salcode,o1.retsalescode())==0)
							{
							if(strcmpi(o1.retcustomername(),cusname)==0)
								{
								o1.fillintable(serial);
								found='y';
								serial++;
								}
							}
						}
					}
				zin.close();
				if(found=='n')
					{
					clrscr();
					cout<<" NO RECORDS for given data found !";
					}
				getch();
				break;
			case 4 :
				break;
			default:
				cout<<"\nPlease Enter a VALID option!!!";
				getch();
				break;
			}
		}while(ch!=4);
	}