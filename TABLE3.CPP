#include<ankus.h>

void main()
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

	gotoxy(33,3);cout<<"Item Name : "<<"[sa]";


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

	gotoxy(5,7);cout<<"101";
	gotoxy(14,7);cout<<"26/07/1998";
	gotoxy(29,7);cout<<"Ankush Garg";
	gotoxy(49,7);cout<<"Blue Chip";
	gotoxy(67,7);cout<<"100000";

	getch();
	}