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

	gotoxy(33,3);cout<<"Sales Code : "<<"[sa]";


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

	gotoxy(4,7);cout<<"101";
	gotoxy(11,7);cout<<"26/07/1998";
	gotoxy(23,7);cout<<"Ankush Garg";
	gotoxy(37,7);cout<<"Blue Chip";
	gotoxy(49,7);cout<<"9000";
	gotoxy(58,7);cout<<"100000";
	gotoxy(69,7);cout<<"ws";

	getch();
	}