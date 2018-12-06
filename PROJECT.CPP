#include<iostream.h>
#include<iomanip.h>
#include<conio.h>
#include<string.h>
#include<fstream.h>
#include<stdlib.h>
class passenger
{
	protected:
	char fname[20],lname[20],from[20],to[20];
	int r_no,t,a,dd,mm,yy;
	public:
	void enter()
	{
		cout<<"Enter the information of the passenger "<<endl;
		cout<<"Enter the firstname of passenger: ";
		cin.getline(fname,20);
		cout<<endl;
		cout<<"Enter the lastname of passenger: ";
		cin.getline(lname,20);
		cout<<endl;
		cout<<"Enter city of Departure:  ";
		cin.getline(from,20);
		cout<<endl;
		cout<<"Enter city of Arrival:  ";
		cin.getline(to,20);
		cout<<"Enter Day: ";
		cin>>dd;
		cout<<"Enter Month: ";
		cin>>mm;
		cout<<"Enter Year: ";
		cin>>yy;
		cout<<endl;
		clrscr();
	}
	 void show()
	{
		cout<<"Your Ticket is : "<<endl;
		cout<<"			  * * * * * * * * *                 "<<endl;
		cout<<"              	    *  FLIGHT TICKET  *		    "<<endl;
		cout<<"			  * * * * * * * * *                 "<<endl;
		cout<<"*Ticket No.";


		srand(time(NULL));
		 t = rand()%4000+1;
		cout<<setw(4)<<t;

		cout<<"\n***********************************************************"<<endl;
		cout<<"*Resevation No. :";
		srand(time(NULL));
		 r_no = rand()%31+1;
		cout<<setw(2)<<r_no;
		cout<<"\n***********************************************************"<<endl;
		cout<<"*Passenger Information :                                   "<<endl;
		cout<<"*Name :"<<fname<<" "<<lname<<"                             "<<endl;
		cout<<"***********************************************************"<<endl;
		cout<<"*flight Information :                                      "<<endl;
		cout<<"*Date: "<<dd<<"/"<<mm<<"/"<<yy                              <<endl;
		cout<<"*Airliner:";
		randomize();
		  a=random(6);
		 switch(a)
		  {
			case 0: cout<<"Airbus A380";break;
			case 1: cout<<"Airbus A320";break;
			case 2: cout<<"Douglas DC - 10";break;
			case 3: cout<<"Douglas DC - 3";break;
			case 4: cout<<"Boeing-747";break;
			case 5: cout<<"Boeing-787 Dreamliner";break;

		  }
		cout<<"\n***********************************************************"<<endl;
		cout<<"*Depart :"<<from<<"                                        "<<endl;
		cout<<"*Arrive :"<<to<<"                                          "<<endl;
		cout<<"***********************************************************"<<endl;
	ofstream outfile("c:\\ticket.txt",ios::out);
	outfile<<"                           FLIGHT TICKET                           "<<endl<<
	"*Ticket No."<<t<<endl<<
	"*Resevation No. :"<<r_no<<"                                                "<<endl<<
	"*__________________________________________________________________________"<<endl<<
	"*Passenger Information :                                                  "<<endl<<
	"*Name :"<<fname<<" "<<lname<<"                                            "<<endl<<
	"*_________________________________________________________________________"<<endl<<
	"*flight Information :                                                     "<<endl<<
	"*Date: "<<dd<<"/"<<mm<<"/"<<yy<<"                                          "<<endl<<
	"*_________________________________________________________________________"<<endl<<
	"|Depart :"<<from<<"                                                       "<<endl<<
	"|Arrive :"<<to<<"                                                         "<<endl<<
	"|_________________________________________________________________________"<<endl;
	outfile.close();
	}
};
void main()
{
	clrscr();
	passenger pass;
	pass.enter();
	pass.show();
	getch();
}