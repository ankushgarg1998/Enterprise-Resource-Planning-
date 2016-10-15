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

	gotoxy(3,3);cout<<"Customer Name : "<<"[customername]";
	gotoxy(50,3);cout<<"Sales Code : "<<"[sa]";


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

	getch();
	}