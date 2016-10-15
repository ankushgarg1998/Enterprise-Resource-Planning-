void transport()
	{
	int ch,serial3,ordno;
	char cusname[20],ch1,found;
	ifstream zin;
	ofstream fout;
	do
		{
		clrscr();
		cout<<"********************************************************************************";
		cout<<"\n\t\t\t\t  TRANSPORT DEPARTMENT";
		cout<<"\n\n\t\t\t\t01. Check Manufactured Orders of a Customer ";
		cout<<"\n\n\t\t\t\t02. Upload Transported Orders";
		cout<<"\n\n\t\t\t\t03. Print Bills for a Customer";
		cout<<"\n\n\t\t\t\t04. Exit\n\n\t";
		cout<<"Select Your Option (1-4) \t";
		cin>>ch;
		switch(ch)
			{
			case 1 :clrscr();
				found='n';
				cout<<"Enter Customer Name : ";
				gets(cusname);
				int serial3=7;
				tablecustomername(cusname);
				zin.open("Orders.dat",ios::in|ios::binary|ios::nocreate);
				while(zin)
					{
					zin.read((char*)&o1,sizeof (o1));
					if(!zin.eof())
						{
						if(strcmpi(cusname,o1.retcustomername())==0)
							{
							o1.fillintable3(serial3);
							found='y';
							serial3++;
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
				clrscr();
				found='n';
				cout<<"Enter Order No. of Item : ";
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

							cout<<"\n\n\nHas this Order been transported ?(Y/N) : ";
							cin>>ch1;
							if(ch1=='Y'||ch1=='y')
								{
								o1.paymentstatus=1;
								cout<<"\n\nTransportation status successfully updated...";
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
			case 3 :
				clrscr();
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