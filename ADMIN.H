void admin()
	{
	int ch;
	char found;
	int j=1;//This is a JUGGAD to prevent large changes.
	do
		{
		int p=0;
		if(j==1)
			{
			clrscr();
			cout<<"********************************************************************************";
			cout<<"\n\n\t\t\tEnter ADMINSTRATOR's password\t";
			cin>>p;
			}
		if(p==935||p==0)
			{
			j=2;
			clrscr();
			cout<<"********************************************************************************";
			cout<<"\n\n\t\t\t\t  ADMINISTRATORS' MENU";
			cout<<"\n\n\t\t\t\t01. Check Accounts of a Customer";
			cout<<"\n\n\t\t\t\t02. Check Sales of a Sales Person";
			cout<<"\n\n\t\t\t\t03. Show All Orders";
			cout<<"\n\n\t\t\t\t04. Exit\n\n\t";
			cout<<"Select Your Option (1-3) \t";
			cin>>ch;
			}
		else
			{
			cout<<"\n\nWrong PASSWORD";
			getch();
			ch=4;
			}
		switch(ch)
			{
			case 1 :
				break;
			case 2 :
				clrscr();
				found='n';
				char salcode[3];
				cout<<"Enter Sales Code of the Sales Person : ";
				gets(salcode);
				ifstream zin;
				zin.open("Orders.dat",ios::in|ios::binary|ios::nocreate);
				int serial2=7;
				tablesalescode(salcode);
				while(zin)
					{
					zin.read((char*)&o1,sizeof (o1));
					if(!zin.eof())
						{
						if(strcmpi(salcode,o1.retsalescode())==0)
							{
							o1.fillintable1(serial2);
							found='y';
							serial2++;
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
				break;
			case 4 :
				break;
			default :
				cout<<"\nPlease Enter a VALID option!!!";
				getch();
				break;
			}
		}while(ch!=4);
	}