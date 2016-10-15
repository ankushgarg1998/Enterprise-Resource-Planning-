void produc()
	{
	int ch,ordno;
	char ch1,found,itmname[20];
	ifstream zin;
	fstream zout;
	ofstream fout;
	int j=1;//This is a JUGGAD to prevent large changes.
	do
		{
		int p=0;
		if(j==1)
			{
			clrscr();
			cout<<"********************************************************************************";
			cout<<"\n\n\tEnter Production Departments' password\t";
			cin>>p;
			}
		if(p==981||p==0)
			{
			j=2;
			clrscr();
			cout<<"********************************************************************************";
			cout<<"\n\n\t\t\t\t PRODUCTION DEPARTMENT";
			cout<<"\n\n\t\t\t\t01. Check Order for Items";
			cout<<"\n\n\t\t\t\t02. Req for Raw Material(NA)";
			cout<<"\n\n\t\t\t\t03. Notify for Ready Orders(NA)";
			cout<<"\n\n\t\t\t\t04. Exit\n\n\t";
			cout<<"Select Your Option (1-4) \t";
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
				clrscr();
				found='n';
				cout<<"Enter Item Name : ";
				gets(itmname);
				int serial2=7;
				tableitemname(itmname);
				zin.open("Orders.dat",ios::in|ios::binary|ios::nocreate);
				while(zin)
					{
					zin.read((char*)&o1,sizeof (o1));
					if(!zin.eof())
						{
						if(strcmpi(itmname,o1.retitemname())==0)
							{
							o1.fillintable2(serial2);
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
			case 2 :
				break;
			case 3 :
				clrscr();
				found='n';
				cout<<"Enter Order No. of Manufactured Item : ";
				cin>>ordno;
				zin.open("Orders.dat",ios::binary|ios::nocreate);
				fout.open("tmp.dat",ios::out|ios::binary);
				zin.seekg(0);
				while(zin)
					{
					zin.read((char*)&o1,sizeof (o1));
					if(!zin.eof())
						{
						if(ordno==o1.retorderno())
							{
							found='y';
							o1.putorder();

							cout<<"\n\n\nConfirm Mark the Order as Manufactured ?(Y/N) : ";
							cin>>ch1;
							if(ch1=='Y'||ch1=='y')
								{
								o1.manufacturestatus=1;
								cout<<"\n\nThis Order has been marked as Manufactured...";
								}
							}
						fout.write((char*)&o1, sizeof (o1));
						}
					}
				zin.close();
				fout.close();
				remove("Orders.dat");
				rename("tmp.dat","Orders.dat");
				if(found=='n')
					{
					clrscr();
					cout<<" NO RECORDS for given data found !";
					}
				cout<<"\nPress any key to Continue...";
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