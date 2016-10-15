class order:public day
	{
	int orderno;
	//char formatno[10];
	char customername[20];
	char itemname[20];
	float rate;
	double qty;
	char salescode[3];

	public:
	int manufacturestatus;
	int paymentstatus;

	void getorder();
	void putorder();
	void writeorder();
	void calcorderno();
	//void calcformatno();
	void fillintable(int);
	void fillintable1(int);
	void fillintable2(int);
	void fillintable3(int);
	char* retsalescode()
		{
		return salescode;
		}
	char* retcustomername()
		{
		return customername;
		}
	char* retitemname()
		{
		return itemname;
		}
	int retorderno()
		{
		return orderno;
		}
	}o1;


void order::getorder()
		{
		cout<<"Enter your Sales Code : ";
		gets(salescode);
		//calcformatno();
		//cout<<"\nFormat No. : "<<formatno;
		calcorderno();
		cout<<"\nOrder No. : "<<orderno;
		cout<<"\nEnter today's Date(DD/MM/YYYY) : ";
		getday(34,4);
		cout<<"Enter Customer's Name : ";
		gets(customername);
		cout<<"Enter Item Name : ";
		gets(itemname);
		cout<<"Enter Rate of "<<itemname<<" : ";
		cin>>rate;
		cout<<"Enter Quantity : ";
		cin>>qty;
		manufacturestatus=0;
		}


void order::putorder()
	{
	cout<<"\nCustomer Name : "<<o1.customername;
	cout<<"\nOrder No. : "<<o1.orderno;
	cout<<"\t\t\tOrder Date : ";o1.showday();
	cout<<"\nItem Name : "<<o1.itemname;
	cout<<"\t\tQuantity : "<<o1.qty;
	}


void order::calcorderno()
		{
		order oo;
		orderno=101;
		ifstream zin;
		zin.open("Orders.dat",ios::in|ios::binary|ios::nocreate);
		while(zin)
			{
			zin.read((char*)&oo,sizeof (oo));
			if(!zin.eof())
				{
				orderno++;
				}
			}
		zin.close();
		}


void order::writeorder()
		{
		ofstream zout;
		zout.open("Orders.dat",ios::binary|ios::app);
		zout.write((char*)this,sizeof (*this));
		zout.close();
		}


/*void order::calcformatno()
		{
		char number[2]="1";
		strcpy(formatno,salescode);
		strcat(formatno,number);
		}*/


void order::fillintable(int row)
	{
	gotoxy(5,row);cout<<orderno;
	gotoxy(14,row);showday();
	gotoxy(26,row);cout<<itemname;
	gotoxy(49,row);cout<<rate;
	gotoxy(58,row);cout<<qty;
	gotoxy(69,row);cout<<(rate*qty);
	}

void order::fillintable1(int row1)
	{
	gotoxy(4,row1);cout<<orderno;
	gotoxy(11,row1);showday();
	gotoxy(23,row1);cout<<customername;
	gotoxy(37,row1);cout<<itemname;
	gotoxy(49,row1);cout<<rate;
	gotoxy(58,row1);cout<<qty;
	gotoxy(69,row1);cout<<(rate*qty);
	}

void order::fillintable2(int row2)
	{
	gotoxy(5,row2);cout<<orderno;
	gotoxy(14,row2);showday();
	gotoxy(29,row2);cout<<customername;
	gotoxy(49,row2);cout<<itemname;
	gotoxy(67,row2);cout<<qty;
	}

void order::fillintable3(int row3)
	{
	gotoxy(4,row3);cout<<orderno;
	gotoxy(12,row3);showday();
	gotoxy(28,row3);cout<<salescode;
	gotoxy(37,row3);cout<<itemname;
	gotoxy(49,row3);cout<<rate;
	gotoxy(58,row3);cout<<qty;
	gotoxy(69,row3);cout<<(rate*qty);
	}