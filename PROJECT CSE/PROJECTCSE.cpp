#include<iostream>
#include<windows.h>
#include<stdlib.h>
#include<conio.h>
#include<fstream>
using namespace std;
void male();
void female();
int age;
char choice1;
float height;
int choice2;
char choice3;
float bmi;
float weight;
char name[20];
char gender;
int choice;
class person
 {
	public:
	void getdata();
	void putdata();
 };
void person::getdata()
  {
	 cout<<"Name: ";
	 cin>>name;
	 system("cls");
	 age1:
	 cout<<"Age: ";
	 cin>>age;
	 if(age<17 || age>60)
	 {
	 system("cls");	
	 cout<<"PLEASE ENTER THE AGE B/W 17-60 years"<<endl;
	 goto age1;	
	  } 
	 system("cls");
	 height1:
	 cout<<"Height (in m): ";
	 cin>>height;
	 if(height<1 || height>2.5)
	 {
	 system("cls");
	 cout<<"ENETER YOUR HEIGHT IN METERS NOT IN CM"<<endl;
	 goto height1;	
	 }
	 system("cls");
	 weight1:
	 cout<<"Weight ( in kg): ";
	 cin>>weight;
	 if(weight<30 || weight>200)
	 {
	 system("cls");	
	 cout<<"INVALID WEIGHT ENTER CORRECT WEIGHT"<<endl;
	 goto weight1;	
	 }
	 system("cls");
  }
 void person::putdata()
  {
  	 system("cls");
  	 again:
  	 	cout<<endl<<endl<<endl;

cout<<"\t"<<"\t"<<"\t"<<"\t"<<"\t"<<"Name: "<<name<<endl;
cout<<"\t"<<"\t"<<"\t"<<"\t"<<"\t"<<"Age: "<<age<<endl;
cout<<"\t"<<"\t"<<"\t"<<"\t"<<"\t"<<"Height: "<<height<<"m"<<endl;
cout<<"\t"<<"\t"<<"\t"<<"\t"<<"\t"<<"Weight: "<<weight<<"kg"<<endl;
	 wapis:
cout<<"\t"<<"\t"<<"\t"<<"\t"<<"\t"<<"Gender: "<<endl<<endl;
	 cout<<"\t"<<"\t"<<"\t"<<"\t"<<"[1] Male\t";
	 cout<<"\t"<<"[2] Female"<<endl;
	 cout<<"\t"<<"\t"<<"\t"<<"\t"<<"\t";
	 cin>>gender;
	 	system("cls");
	switch(gender)
	{
		
		case '1':
		system("color B0");	
		cout<<endl<<endl;	
		cout<<"\t"<<"\t"<<"\t"<<"\t"<<"\t"<<"Name: "<<name<<endl;
	 	cout<<"\t"<<"\t"<<"\t"<<"\t"<<"\t"<<"Age: "<<age<<endl;
	 	cout<<"\t"<<"\t"<<"\t"<<"\t"<<"\t"<<"Height: "<<height<<"m"<<endl;
	 	cout<<"\t"<<"\t"<<"\t"<<"\t"<<"\t"<<"Weight: "<<weight<<"kg"<<endl;
	 	cout<<"\t"<<"\t"<<"\t"<<"\t"<<"\t"<<"Gender: "<<"Male"<<endl;
	  	male();
	  	again2:	
	  	cout<<endl<<"\t"<<"\t"<<"\t"<<"1)-GUDIDENCE"<<"          "<<"2)-DIET"<<"         "<<"3)-EXERCISE";
	  	/*guidence,diet ,exercise*/
		 cout<<endl<<endl<<"\t"<<"\t"<<"\t"<<"\t"<<"ENTER YOUR CHOICE";
		
		 cin>>choice;
		 switch (choice) 	
	  	{
	  	case 1:
	  	system("cls");
	  	cout<<"GUIDENCE"<<endl;
			if(bmi<=18.5)
	{	
	
		cout<<"your body type is ECTOMORPHY"<<endl;
		ifstream ip;
		char ch;
		ip.open("guideecto.txt");
		if(ip.fail())
		{
		cout<<"no such file";	
		}
		while(!ip.eof())
		{
		ch=ip.get();
		cout<<ch;	
		}
		ip.close();
cout<<endl<<endl<<"want to know any thing else...?"<<endl;
	cout<<"press(Y/N)";
	cin>>choice1;
	if(choice1 =='Y')
	goto again2;
	if(choice1=='N')
			{
	system("cls");			
cout<<endl<<"THANK YOU";			
exit(0);
}
	}
 	else if(bmi>=18.6||bmi<=24.9)
	{
		cout<<"your body type is MESOMORPHY"<<endl;
		ifstream iq;
		char cq;
		iq.open("guidemeso.txt");
		if(iq.fail())
		{
		cout<<"no such file";	
		}
		while(!iq.eof())
		{
		cq=iq.get();
		cout<<cq;	
		}
		iq.close();
cout<<endl<<endl<<"want to know any thing else...?"<<endl;
	cout<<"press(Y/N)";
	cin>>choice1;
	if(choice1 =='Y')
	goto again2;
		if(choice1=='N')
			{
	system("cls");			
cout<<endl<<"THANK YOU";			
exit(0);
}	
	}
	else if(bmi>=25||bmi<=29.9)
	{
cout<<"your body type is ENDOMORPHY"<<endl;
	    ifstream ir;
		char cr;
		ir.open("guideendo.txt");
		if(ir.fail())
		{
		cout<<"no such file";	
		}
		while(!ir.eof())
		{
		cr=ir.get();
		cout<<cr;	
		}
		ir.close();	
cout<<endl<<endl<<"want to know any thing else...?"<<endl;
	cout<<"press(Y/N)";
	cin>>choice1;
	if(choice1 =='Y')
	goto again2;
		if(choice1=='N')
			{
cout<<endl<<"THANK YOU";			
exit(0);
}
	}
	else if(bmi>=30)
	{
		cout<<"your body type is ENDOMORPHY"<<endl;
		ifstream ir2;
		char cr2;
		ir2.open("guideendo2.txt");
		if(ir2.fail())
		{
		cout<<"no such file";	
		}
		while(!ir2.eof())
		{
		cr2=ir2.get();
		cout<<cr2;	
		}
		ir2.close();		
	cout<<endl<<endl<<"want to know any thing else...?"<<endl;
	cout<<"press(Y/N)";
	cin>>choice1;
	if(choice1 =='Y')
	goto again2;
		if(choice1=='N')
			{
				system("cls");
cout<<endl<<"THANK YOU";			
exit(0);
}	
	}  	
		break; 
	case 2:
		system("cls");
	cout<<"DIET"<<endl;	
				if(bmi<=18.5)
	{	
		cout<<"your body type is ECTOMORPHY"<<endl;
		ifstream is;
		char cs;
		is.open("dietecto.txt");
		if(is.fail())
		{
		cout<<"no such file";	
		}
		while(!is.eof())
		{
		cs=is.get();
		cout<<cs;	
		}
		is.close();
	cout<<endl<<endl<<"want to know any thing else...?"<<endl;
	cout<<"press(Y/N)";
	cin>>choice1;
	if(choice1 =='Y')
	goto again2;
		if(choice1=='N')
			{
				system("cls");
cout<<endl<<"THANK YOU";			
exit(0);
}
	}
 	else if(bmi>=18.6||bmi<=24.9)
	{
cout<<"your body type is MESOMORPHY"<<endl;
	ifstream it;
		char ct;
		it.open("dietmeso.txt");
		if(it.fail())
		{
		cout<<"no such file";	
		}
		while(!it.eof())
		{
		ct=it.get();
		cout<<ct;	
		}
		it.close();
cout<<endl<<endl<<"want to know any thing else...?"<<endl;
	cout<<"press(Y/N)";
	cin>>choice1;
	if(choice1 =='Y')
	goto again2;		
		if(choice1=='N')
			{
				system("cls");
cout<<endl<<"THANK YOU";			
exit(0);
}	
	}
	else if(bmi>=25||bmi<=29.9)
	{
cout<<"your body type is ENDOMORPHY"<<endl;
	ifstream it;
		char ct;
		it.open("dietendo.txt");
		if(it.fail())
		{
		cout<<"no such file";	
		}
		while(!it.eof())
		{
		ct=it.get();
		cout<<ct;	
		}
		it.close();		
cout<<endl<<endl<<"want to know any thing else...?"<<endl;
	cout<<"press(Y/N)";
	cin>>choice1;
	if(choice1 =='Y')
	goto again2;		
		if(choice1=='N')
			{
				system("cls");
cout<<endl<<"THANK YOU";			
exit(0);
}
}
	else if(bmi>=30)
	{
cout<<"your body type is ENDOMORPHY"<<endl;
		ifstream it2;
		char ct2;
		it2.open("dietendo2.txt");
		if(it2.fail())
		{
		cout<<"no such file";	
		}
		while(!it2.eof())
		{
		ct2=it2.get();
		cout<<ct2;	
		}
		it2.close();
cout<<endl<<endl<<"want to know any thing else...?"<<endl;
	cout<<"press(Y/N)";
	cin>>choice1;
	if(choice1 =='Y')
	goto again2;
		if(choice1=='N')
			{
				system("cls");
cout<<endl<<"THANK YOU";			
exit(0);
}	
	} 
	break;
	case 3:
		system("cls");
	cout<<"EXERCISE"<<endl;
				if(bmi<=18.5)
	{	
	cout<<"your body type is ECTOMORPHY"<<endl;
		ifstream iu;
		char cu;
		iu.open("exerecto.txt");
		if(iu.fail())
		{
		cout<<"no such file";	
		}
		while(!iu.eof())
		{
		cu=iu.get();
		cout<<cu;	
		}
		iu.close();
	cout<<endl<<endl<<"want to know any thing else...?"<<endl;
	cout<<"press(Y/N)";
	cin>>choice1;
	if(choice1 =='Y')
	goto again2;
		if(choice1=='N')
			{
				system("cls");
cout<<"THANK YOU";			
exit(0);
}
	}
 	else if(bmi>=18.6||bmi<=24.9)
	{
		cout<<"your body type is MESOMORPHY"<<endl;	

	ifstream iv;
		char cv;
		iv.open("exermeso.txt");
		if(iv.fail())
		{
		cout<<"no such file";	
		}
		while(!iv.eof())
		{
		cv=iv.get();
		cout<<cv;	
		}
		iv.close();	
	cout<<endl<<endl<<"want to know any thing else...?"<<endl;
	cout<<"press(Y/N)";
	cin>>choice1;
	if(choice1 =='Y')
	goto again2;
		if(choice1=='N')
			{
				system("cls");
cout<<endl<<"THANK YOU";			
exit(0);
}
	}
	else if(bmi>=25||bmi<=29.9)
	{
		cout<<"your body type is ENDOMORPHY"<<endl;
    ifstream iw;
		char cw;
		iw.open("exerendo.txt");
		if(iw.fail())
		{
		cout<<"no such file";	
		}
		while(!iw.eof())
		{
		cw=iw.get();
		cout<<cw;	
		}
		iw.close();	
		cout<<endl<<endl<<"want to know any thing else...?"<<endl;
	cout<<"press(Y/N)";
	cin>>choice1;
	if(choice1 =='Y')
	goto again2;
		if(choice1=='N')
			{
cout<<endl<<"THANK YOU";			
exit(0);
}
	}
	else if(bmi>=30)
	{
		cout<<"your body type is ENDOMORPHY"<<endl;
				ifstream iw2;
		char cw2;
		iw2.open("exerendo2.txt");
		if(iw2.fail())
		{
		cout<<"no such file";	
		}
		while(!iw2.eof())
		{
		cw2=iw2.get();
		cout<<cw2;	
		}
		iw2.close();	
		cout<<endl<<endl<<"want to know any thing else...?"<<endl;
	cout<<"press(Y/N)";
	cin>>choice1;
	if(choice1 =='Y')
	goto again2;
		if(choice1=='N')
		{
			system("cls");
cout<<endl<<"THANK YOU";			
exit(0);
}
	} 
	break;
	default :
		system("cls");
			goto again2;
	cout<<"invalid";
	 	
		  }
		break;
		
		case '2':
		system("color D0");	
		cout<<"\t"<<"\t"<<"\t"<<"\t"<<"\t"<<"Name: "<<name<<endl;
		cout<<"\t"<<"\t"<<"\t"<<"\t"<<"\t"<<"Age: "<<age<<endl;
		cout<<"\t"<<"\t"<<"\t"<<"\t"<<"\t"<<"Height: "<<height<<"m"<<endl;
		cout<<"\t"<<"\t"<<"\t"<<"\t"<<"\t"<<"Weight: "<<weight<<"kg"<<endl;
		cout<<"\t"<<"\t"<<"\t"<<"\t"<<"\t"<<"Gender: "<<"Female"<<endl;
		female();
		again3:
		cout<<endl<<"\t"<<"\t"<<"\t"<<"1)-GUDIDENCE"<<"          "<<"2)-DIET"<<"         "<<"3)-EXERCISE";
	  	/*guidence,diet ,exercise*/
		 cout<<endl<<endl<<"\t"<<"\t"<<"\t"<<"\t"<<"ENTER YOUR CHOICE";

		 cin>>choice2;

		switch (choice2) 	
	  	{
	  		case 1:
	  		system("cls");	
	  		cout<<"GUIDENCE"<<endl;
				if(bmi<=18.5)
				{	
					cout<<"your body type is ECTOMORPHY"<<endl;
					ifstream ia1;
					char cx;
					ia1.open("guideectof.txt");
					if(ia1.fail())
					{
						cout<<"no such file";	
					}
					while(!ia1.eof())
					{
						cx=ia1.get();
						cout<<cx;	
					}
					ia1.close();	
					cout<<endl<<endl<<"want to know any thing else...?"<<endl;
					cout<<"press(Y/N)";
					cin>>choice3;
					if(choice3 =='Y')
					goto again3;
					if(choice3=='N')
					{
						cout<<endl<<"THANK YOU";			
						exit(0);
					}
				}
 				else if(bmi>=18.6||bmi<=24.9)
				{
					cout<<"your body type is MESOMORPHY"<<endl;
					ifstream iy;
					char cy;
					iy.open("guidemesof.txt");
					if(iy.fail())
					{
						cout<<"no such file";	
					}
					while(!iy.eof())
					{
						cy=iy.get();
						cout<<cy;	
					}
					iy.close();	
					cout<<endl<<endl<<"want to know any thing else...?"<<endl;
					cout<<"press(Y/N)";
					cin>>choice3;
					if(choice3 =='Y')
					goto again3;
					if(choice3=='N')
					{
						cout<<endl<<"THANK YOU";			
						exit(0);
					}	
				}
				else if(bmi>=25||bmi<=29.9)
				{
					cout<<"your body type is ENDOMORPHY"<<endl;
					ifstream iz;
					char cz;
					iz.open("guideendof.txt");
					if(iz.fail())
					{
						cout<<"no such file";	
					}
					while(!iz.eof())
					{
						cz=iz.get();
						cout<<cz;	
					}
					iz.close();	
					cout<<endl<<endl<<"want to know any thing else...?"<<endl;
					cout<<"press(Y/N)";
					cin>>choice3;
					if(choice3 =='Y')
					goto again3;
					if(choice3=='N')
					{
						cout<<endl<<"THANK YOU";			
						exit(0);
					}
				}
				else if(bmi>=30)
				{
					cout<<"your body type is ENDOMORPHY"<<endl;
					ifstream iz2;
					char cz2;
					iz2.open("guideendo2f.txt");
					if(iz2.fail())
					{
						cout<<"no such file";	
					}
					while(!iz2.eof())
					{
						cz2=iz2.get();
						cout<<cz2;	
					}
					iz2.close();
					cout<<endl<<endl<<"want to know any thing else...?"<<endl;	
					cout<<"press(Y/N)";
					cin>>choice3;
					if(choice3 =='Y')
					goto again3;
					if(choice3=='N')
					{
						cout<<endl<<"THANK YOU";			
						exit(0);
					}
	}  	
	break; 
			case 2:
				system("cls");
	cout<<"DIET"<<endl;	
				if(bmi<=18.5)
	{	
		cout<<"your body type is ECTOMORPHY"<<endl;
	ifstream ia;
		char ca;
		ia.open("dietectof.txt");
		if(ia.fail())
		{
		cout<<"no such file";	
		}
		while(!ia.eof())
		{
		ca=ia.get();
		cout<<ca;	
		}
		ia.close();	
		cout<<endl<<endl<<"want to know any thing else...?"<<endl;
	cout<<"press(Y/N)";
		cin>>choice3;
	if(choice3 =='Y')
	goto again3;
		if(choice3=='N')
		{
cout<<endl<<"THANK YOU";			
exit(0);
}
	}
 	else if(bmi>=18.6||bmi<=24.9)
	{
cout<<"your body type is MESOMORPHY"<<endl;
	ifstream ib;
		char cb;
		ib.open("guidemesof.txt");
		if(ib.fail())
		{
		cout<<"no such file";	
		}
		while(!ib.eof())
		{
		cb=ib.get();
		cout<<cb;	
		}
		ib.close();	
 cout<<endl<<endl<<"want to know any thing else...?"<<endl;
	cout<<"press(Y/N)";
 	cin>>choice3;
	if(choice3 =='Y')
	goto again3;
		if(choice3=='N')
			{
 cout<<endl<<"THANK YOU";			
 exit(0);
}			
	}
	else if(bmi>=25||bmi<=29.9)
	{
		cout<<"your body type is ENDOMORPHY"<<endl;
	ifstream ic;
	char cc;
	ic.open("dietendof.txt");
	if(ic.fail())
	{
	cout<<"no such file";	
	}
	while(!ic.eof())
	{
	cc=ic.get();
	cout<<cc;	
	}
	ic.close();			
cout<<endl<<endl<<"want to know any thing else...?"<<endl;
	cout<<"press(Y/N)";
		cin>>choice3;
	if(choice3 =='Y')
	goto again3;
		if(choice3=='N')
			{
cout<<endl<<"THANK YOU";			
exit(0);
}
	}
	else if(bmi>=30)
	{
		cout<<"your body type is ENDOMORPHY"<<endl;
	ifstream ic2;
		char cc2;
		ic2.open("dietendo2f.txt");
		if(ic2.fail())
		{
		cout<<"no such file";	
		}
		while(!ic2.eof())
		{
		cc2=ic2.get();
		cout<<cc2;	
		}
		ic2.close();	
	cout<<endl<<endl<<"want to know any thing else...?"<<endl;
	cout<<"press(Y/N)";
		cin>>choice3;
	if(choice3 =='Y')
	goto again3;
		if(choice3=='N')
			{
cout<<endl<<"THANK YOU";			
exit(0);
}	
	} 
	break;
	case 3:
	system("cls");
	cout<<"EXERCISE"<<endl;
				if(bmi<=18.5)
	{	
	cout<<"your body type is ECTOMORPHY"<<endl;
	ifstream ig;
		char cg;
		ig.open("exerectof.txt");
		if(ig.fail())
		{
		cout<<"no such file";	
		}
		while(!ig.eof())
		{
		cg=ig.get();
		cout<<cg;	
		}
		ig.close();	
	cout<<endl<<endl<<"want to know any thing else...?"<<endl;
	cout<<"press(Y/N)";
		cin>>choice3;
	if(choice3 =='Y')
	goto again3;
		if(choice3=='N')
			{
cout<<endl<<"THANK YOU";			
exit(0);
}
	}
 	else if(bmi>=18.6||bmi<=24.9)
	{
		cout<<"your body type is MESOMORPHY"<<endl;	
	ifstream ii;
		char ci;
		ii.open("exermesof.txt");
		if(ii.fail())
		{
		cout<<"no such file";	
		}
		while(!ii.eof())
		{
		ci=ii.get();
		cout<<ci;	
		}
		ii.close();
	cout<<endl<<endl<<"want to know any thing else...?"<<endl;	
	cout<<"press(Y/N)";
		cin>>choice3;
	if(choice3 =='Y')
	goto again3;
		if(choice3=='N')
			{
cout<<endl<<"THANK YOU";			
exit(0);
}
	}
	else if(bmi>=25||bmi<=29.9)
	{
		cout<<"your body type is ENDOMORPHY"<<endl;
	ifstream ij;
		char cj;
		ij.open("exerendof.txt");
		if(ij.fail())
		{
		cout<<"no such file";	
		}
		while(!ij.eof())
		{
		cj=ij.get();
		cout<<cj;	
		}
		ij.close();	
		cout<<endl<<endl<<"want to know any thing else...?"<<endl;
	cout<<"press(Y/N)";
		cin>>choice3;
	if(choice3 =='Y')
	goto again3;
		if(choice3=='N')
			{
cout<<endl<<"THANK YOU";			
exit(0);
}
	}
	else if(bmi>=30)
	{
		cout<<"your body type is ENDOMORPHY"<<endl;
		
	    ifstream ik;
		char ck;
		ik.open("exerendo2f.txt");
		if(ik.fail())
		{
		cout<<"no such file";	
		}
		while(!ik.eof())
		{
		ck=ik.get();
		cout<<ck;	
		}
		ik.close();	
		cout<<endl<<endl<<"want to know any thing else...?"<<endl;
	cout<<"press(Y/N)";
		cin>>choice3;
	if(choice3 =='Y')
	goto again3;
		if(choice3=='N')
			{	
				cout<<endl<<endl<<"THANK YOU";			
				exit(0);
		
			}
			
	} 
	break;
	default :
	system("cls");
	goto again3;
	cout<<"Invalid Selection"<<endl<<endl;
	
			 	
}
default:
	system("cls");
		goto wapis;
	cout<<"Invalid Selection";
	

}

}

void female()
{
	bmi=(weight)/(height*height);
	cout<<"\t"<<"\t"<<"                        "<<"BMI: "<<bmi<<endl;
		cout<<endl<<"\t"<<"\t"<<"                      "<<"YOU ARE:-";
	if(bmi<=18.5)
	{	
	cout<<"Underweight"<<endl;
	}

 	if(bmi>=18.6 &&bmi<=24.9)
	{
	cout<<"Healthy"<<endl;	
	}
	if(bmi>=25&&bmi<=29.9)
	{
	cout<<"Overweight"<<endl;
	}
   if(bmi>=30)
	{
	cout<<"Obese"<<endl;	
	}
}


void male()
{	
	bmi=(weight)/(height*height);
	cout<<"\t"<<"\t"<<"                        "<<"BMI: "<<bmi<<endl;
		cout<<endl<<"\t"<<"\t"<<"                      "<<"YOU ARE:-";
	if(bmi<=18.5)
	{	
	cout<<"Underweight"<<endl;
	}

 if(bmi>=18.6&&bmi<=24.9)
	{
	cout<<"Healthy"<<endl;	
	}
	if(bmi>=25&&bmi<=29.9)
	{
	cout<<"Overweight"<<endl;
	}
	if(bmi>=30)
	{
	cout<<"Obese"<<endl;	
	}
}


void gotoxy (long x, long y)                                                         
{
	 COORD pos ={x,y};
 	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}


int main()
{
	system(" color 02");
	int i,n,c,d,e,g,j;
	char a[]="Fitness",k[]="Calculator";
	
	float h,f;
	cout<<"\n\n\n\n\n";
	cout<<"\t\t\t\t\t    **********************\n";
	
	cout<<"\t\t\t\t     * * * * * * * * * * * * * * * * * \n";
	cout<<"\t\t\t*************************************************************\n";
	cout<<"\t\t\t\t* * * * * * \t\t\t* * * * * * \n";
	
	cout<<"\t\t\t\t* * * * * * \t\t\t* * * * * * \n";
	cout<<"\t\t\t*************************************************************\n";
	cout<<"\t\t\t\t     * * * * * * * * * * * * * * * * * \n";
	cout<<"\t\t\t\t\t    **********************\n";
	
	for(i=0;i<7;i++)
	{   gotoxy(46+i,8);
		cout<<a[i];
		Sleep(100);
	}
	for(i=0;i<10;i++)
	{   gotoxy(52+i,9);
		cout<<k[i];
		Sleep(100);
	}
	system("CLS");
	person p;
	p.getdata();
	p.putdata();

			getch();
			return 0; 	 	
}
