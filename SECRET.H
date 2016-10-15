void secret()
	{
	int ch;
	do
		{
		clrscr();
		cout<<"********************************************************************************";
		cout<<"\n\t\t\t\t  # DEVELOPERS OPTIONS #";
		cout<<"\n\n\t\t\t\t01. Remove 'Orders.dat'";
		cout<<"\n\n\t\t\t\t02. BLANK";
		cout<<"\n\n\t\t\t\t03. BLANK";
		cout<<"\n\n\t\t\t\t04. Exit\n\n\t";
		cout<<"Select Your Option (1-4) \t";
		cin>>ch;
		switch(ch)
			{
			case 1 :remove("Orders.dat");
				break;
			case 2 :
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