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
		cout<<"\n\n\t\t03. Administration";
		cout<<"\t\t04. Consumers' Section";
		cout<<"\n\n\t\t05. About us";
		cout<<"\t\t\t06. Credits";
		cout<<"\n\n\t\t07. Exit";
		cout<<"\n\n\tSelect Your Option (1-7) \t";
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
				admin();
				break;
			case 4 :
				cust();
				break;
			case 5 :
				aboutus();
				break;
			case 6 :
				credits();
				break;
			case 99 :
				secret();
				break;
			default :
				cout<<"\a";
				break;
			}
		}while(ch!=7);
	}
