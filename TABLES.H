void tablecustomername(char customername[30],char salescode[3])
	{
	clrscr();
	for(int i=2;i<=79;i++)
		{
		gotoxy(i,1);
		cout<<"_";
		}
	for(i=2;i<=20;i++)
		{
		gotoxy(80,i);cout<<"|";
		gotoxy(1,i);cout<<"|";
		}
	for(i=2;i<=79;i++)
		{
		gotoxy(i,20);
		cout<<"_";
		}

	gotoxy(3,3);cout<<"Customer Name : "<<customername;
	gotoxy(50,3);cout<<"Sales Code : "<<salescode;


	for(i=2;i<=79;i++)
		{
		gotoxy(i,4);
		cout<<"_";
		}

	gotoxy(3,5);cout<<"Order No";
	gotoxy(16,5);cout<<"Date";
	gotoxy(29,5);cout<<"Item Name";
	gotoxy(50,5);cout<<"Rate";
	gotoxy(58,5);cout<<"Quantity";
	gotoxy(71,5);cout<<"Amount";

	for(i=2;i<=79;i++)
		{
		gotoxy(i,6);
		cout<<"_";
		}


	for(i=5;i<=20;i++)
		{
		gotoxy(12,i);cout<<"|";
		gotoxy(24,i);cout<<"|";
		gotoxy(47,i);cout<<"|";
		gotoxy(56,i);cout<<"|";
		gotoxy(67,i);cout<<"|";
		}

	}

void tablesalescode(char salescode[3])
	{
	clrscr();
	for(int i=2;i<=79;i++)
		{
		gotoxy(i,1);
		cout<<"_";
		}
	for(i=2;i<=20;i++)
		{
		gotoxy(80,i);cout<<"|";
		gotoxy(1,i);cout<<"|";
		}
	for(i=2;i<=79;i++)
		{
		gotoxy(i,20);
		cout<<"_";
		}

	gotoxy(33,3);cout<<"Sales Code : "<<salescode;


	for(i=2;i<=79;i++)
		{
		gotoxy(i,4);
		cout<<"_";
		}

	gotoxy(2,5);cout<<"Order No";
	gotoxy(14,5);cout<<"Date";
	gotoxy(22,5);cout<<"Customer Name";
	gotoxy(37,5);cout<<"Item Name";
	gotoxy(50,5);cout<<"Rate";
	gotoxy(58,5);cout<<"Quantity";
	gotoxy(71,5);cout<<"Amount";

	for(i=2;i<=79;i++)
		{
		gotoxy(i,6);
		cout<<"_";
		}


	for(i=5;i<=20;i++)
		{
		gotoxy(10,i);cout<<"|";
		gotoxy(21,i);cout<<"|";
		gotoxy(35,i);cout<<"|";
		gotoxy(47,i);cout<<"|";
		gotoxy(56,i);cout<<"|";
		gotoxy(67,i);cout<<"|";
		}
	}

void tableitemname(char itemname[20])
	{
	clrscr();
	for(int i=2;i<=79;i++)
		{
		gotoxy(i,1);
		cout<<"_";
		}
	for(i=2;i<=20;i++)
		{
		gotoxy(80,i);cout<<"|";
		gotoxy(1,i);cout<<"|";
		}
	for(i=2;i<=79;i++)
		{
		gotoxy(i,20);
		cout<<"_";
		}

	gotoxy(33,3);cout<<"Item Name : "<<itemname;


	for(i=2;i<=79;i++)
		{
		gotoxy(i,4);
		cout<<"_";
		}

	gotoxy(3,5);cout<<"Order No";
	gotoxy(17,5);cout<<"Date";
	gotoxy(29,5);cout<<"Customer Name";
	gotoxy(50,5);cout<<"Item Name";
	gotoxy(67,5);cout<<"Quantity";

	for(i=2;i<=79;i++)
		{
		gotoxy(i,6);
		cout<<"_";
		}


	for(i=5;i<=20;i++)
		{
		gotoxy(12,i);cout<<"|";
		gotoxy(26,i);cout<<"|";
		gotoxy(45,i);cout<<"|";
		gotoxy(63,i);cout<<"|";
		}
	}

void tablecustomername(char customername[20])
	{
	clrscr();
	for(int i=2;i<=79;i++)
		{
		gotoxy(i,1);
		cout<<"_";
		}
	for(i=2;i<=20;i++)
		{
		gotoxy(80,i);cout<<"|";
		gotoxy(1,i);cout<<"|";
		}
	for(i=2;i<=79;i++)
		{
		gotoxy(i,20);
		cout<<"_";
		}

	gotoxy(30,3);cout<<"Customer Name : "<<customername;


	for(i=2;i<=79;i++)
		{
		gotoxy(i,4);
		cout<<"_";
		}

	gotoxy(2,5);cout<<"Order No";
	gotoxy(15,5);cout<<"Date";
	gotoxy(24,5);cout<<"Sales Code";
	gotoxy(37,5);cout<<"Item Name";
	gotoxy(50,5);cout<<"Rate";
	gotoxy(58,5);cout<<"Quantity";
	gotoxy(71,5);cout<<"Amount";

	for(i=2;i<=79;i++)
		{
		gotoxy(i,6);
		cout<<"_";
		}


	for(i=5;i<=20;i++)
		{
		gotoxy(10,i);cout<<"|";
		gotoxy(23,i);cout<<"|";
		gotoxy(35,i);cout<<"|";
		gotoxy(47,i);cout<<"|";
		gotoxy(56,i);cout<<"|";
		gotoxy(67,i);cout<<"|";
		}
	}