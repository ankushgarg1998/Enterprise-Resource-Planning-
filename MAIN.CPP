#include<proj.h>
void main()
	{
	int ch;
	do
		{
		clrscr();
		cout<<"\n\t\t\t\t  MAIN MENU";
		cout<<"\n\n\t\t01. Sales Dept.";
		cout<<"\t\t\t02. Production Dept.";
		cout<<"\n\n\t\t03. Transport Dept.";
		cout<<"\t\t04. Administration";
		cout<<"\n\n\t\t05. Consumers' Section";
		cout<<"\t\t06. About us";
		cout<<"\n\n\t\t07. Credits";
		cout<<"\t\t\t08. Exit";
		cout<<"\n\n\tSelect Your Option (1-8) \t";
		cin>>ch;
		clrscr();
		switch(ch)
			{
			case 1 :
				sales();
				break;

			case 2 :
				produc();
				break;
			case 3 :
				transport();
				break;
			case 4 :
				admin();
				break;
			case 5 :
				cust();
				break;
			case 6 :
				aboutus();
				break;
			case 7 :
				credits();
				break;
			case 99 :
				secret();
				break;
			default :
				cout<<"\a";
				break;
			}
		}while(ch!=8);
	}
