/**********************************************
		Header file
***********************************************/
#include<iostream.h>
#include<dos.h>
#include<conio.h>
#include<process.h>
#include<stdio.h>
#include<fstream.h>
#include<string.h>

/**********************************************
		Classes used
***********************************************/
class Case
{
	int cno;
	char nature[20];
	char cname[20];
	char cdetail[100];
	char dohearing[20];
	char party1[20];
	char party2[20];
	char judge[30];
	char status[20];
 public:
	Case();               //constructor
	void input();
	void output();

	int getcno();

	void assign_judge();
	void assign_nature();
	void assign_status();
};

class login
{
	char user_name[30];
	char pass[30];
 public:
	login();             //constructor
	void Enter_un_pass();
};

class judgeasset
{	int choice;
	char ch;
 public:
	void judgelist();
};

/**********************************************
	Function definations
***********************************************/

//constructors
Case::Case()
{
 cno=0;
 strcpy(cname,"Not assigned");
 strcpy(cdetail,"Not assigned");
 strcpy(nature,"Not assigned");
 strcpy(dohearing,"Not assigned");
 strcpy(party1,"Not assigned");
 strcpy(party2,"Not assigned");
 strcpy(judge,"Not assigned");
 strcpy(status,"Not assigned");
}

login::login()
{
 strcpy(user_name,"no");
 strcpy(pass,"no");
}

//functions
void Case::input()
{
 cout<<"ENTER CASE NO.: ";
 cin>>cno;
 cout<<"ENTER CASE NAME: ";
 gets(cname);
 cout<<"ENTER DATE OF HEARING: ";
 gets(dohearing);
 cout<<"ENTER NATURE OF CASE: "<<endl;
 assign_nature();
 cout<<"ENTER THE NAME OF PETITIONER: ";
 gets(party1);
 cout<<"ENTER NAME OF RESPONDENT: ";
 gets(party2);
 cout<<"ENTER JUDGE NAME: "<<endl;
 assign_judge();
 cout<<"ENTER CASE DETAILS: ";
 gets(cdetail);
 cout<<"ENTER CASE STATUS: ";
 assign_status();
}

void Case::output()
{
 cout<<"===========================================================";
 cout<<"\n\t\t\tCase Details\n";
 cout<<"==========================================================="<<endl;
 cout<<"Case no:"<<cno;
 cout<<"\t\tDate of hearing: "<<dohearing<<endl;
 cout<<"Case name: "<<cname<<endl;
 cout<<"Judge assigned: "<<judge<<endl;
 cout<<"Case nature: "<<nature<<endl;
 cout<<"Status: "<<status<<endl;
 cout<<"Petitioner: "<<party1<<endl;
 cout<<"Respondent: "<<party2<<endl;
 cout<<"case details: "<<cdetail<<endl;
}

int Case::getcno()
{return cno;
}

void Case::assign_judge()
{int ch;
 target:
 cout<<"\nCHOOSE FROM THE FOLLOWING JUDGES "<<endl;
 cout<<"1.Justice Sanjay Kishan Kaul\n";
 cout<<"2.Justice Badar Durrez Ahmed\n";
 cout<<"3.Justice Pradeep Nandrajog\n";
 cin>>ch;
 switch(ch)
 {case 1:strcpy(judge,"Justice Sanjay Kishan Kaul");
	 break;
  case 2:strcpy(judge,"Justice Badar Durrez Ahmed");
	 break;
  case 3:strcpy(judge,"Justice Pradeep Nandrajog");
	 break;
  default: cout<<"invalid entry!!";
	  goto target;
 }
}

void Case::assign_nature()
{
 int ch;
 lable:
 cout<<"\nCHOOSE FROM THE FOLLOWING OPTINS "<<endl;
 cout<<"1.Criminal"<<endl;
 cout<<"2.Banking"<<endl;
 cout<<"3.Matrimonial"<<endl;
 cout<<"4.Service"<<endl;
 cin>>ch;
 switch(ch)
 {case 1:strcpy(nature,"Criminal");
	 break;
  case 2:strcpy(nature,"Banking");
	 break;
  case 3:strcpy(nature,"Matrimonial");
	 break;
  case 4:strcpy(nature,"Service");
	 break;
  default: cout<<"invalid entry!!"<<endl;
	  goto lable;
 }
}

void Case::assign_status()
{
 int ch;
 lable:
 cout<<"\nCHOOSE FROM THE FOLLOWING"<<endl;
 cout<<"1.Pending"<<endl;
 cout<<"2.Decided"<<endl;
 cin>>ch;
 switch(ch)
 {
  case 1:strcpy(nature,"Pending");
	 break;
  case 2:strcpy(nature,"Decided");
	 break;
  default: cout<<"Invalid entry!!"<<endl;
	   goto lable;
 }
}

void login::Enter_un_pass()
{
 lable:
 clrscr();
 cout<<"Username: ";
 gets(user_name);
 cout<<"password: ";
 gets(pass);
 if(strcmpi(user_name,"admin")==0 &&strcmpi(pass,"12345")==0)
 {
 cout<<"\nlogin successful ";
 delay(1000);
 clrscr();
 }
 else if(strcmp(user_name,"0"))
 {
  goto lable;
 }
 else
 {
  cout<<"\n!!Wrong username or password"<<endl<<endl;
  delay(1000);
  clrscr();
  goto lable;
  }
}
void judgeasset::judgelist()
{
 do
 {
  lable:
  clrscr();
  cout<<"\n YOU CAN CHOOSE FROM THE FOLLOWING JUDGES TO VIEW THEIR ASSETS\n";
  cout<<endl;
  cout<<"1. Justice Sanjay Kishan Kaul\n";
  cout<<"2. Justice Badar Durrez Ahmed\n";
  cout<<"3. Justice Pradeep Nandrajog\n";
  cout<<"4. Justice Gita Mittal\n";
  cout<<"5. Justice S.Rvindra Bhatt\n";
  cout<<"0. EXIT";
  cout<<"\n ENTER THE NUMBER FOR THE JUDGE WHOSE ASSETS YOU WANT TO SEE\n";
   cin>>choice;
   switch(choice)
   {
    case 1 :clrscr();
	    cout<<"==============================================================================\n";
	    cout<<"   			JUDGES ASSETS\n";
	    cout<<"==============================================================================\n";
	    cout <<"1. Undivided Share in the Residential Property at lal Mandi, Sringar\n";
	    cout <<"2. Undivided share in approximately 70  of nambal\n";
	    cout <<"3. Balance in bank Accounts = Rs. 1,22,115 /-";
	    cout <<"4. PPF Account with SBI = Rs. 9,30,845/-";
	    getch();
	    break;
    case 2 :clrscr();
	    cout<<"==============================================================================\n";
	    cout<<"   			JUDGES ASSETS\n";
	    cout<<"==============================================================================\n";
	    cout<<endl;
	    cout<<endl;
	    cout<<"\n Undivided share in commercial property at 5.5. Road, Lakhtokia";
	    cout<<"Guwahati, Assam comprised of 2 storeyed building.\n";
	    cout<<"\nUndivided share in property at village Ulubari, Mauza Beltola, Guwahati";
	    cout<<"Assam. Total area (approx) = 1 bigha \n";
	    cout<<"\nUndivided share in property at village F1!tasil, Mauza  Beltola";
	    cout<<" Assam. Total area (approx) =2 bighas  4 kathas - 7 lechas.\n";
	    cout<<"\nUndivided share in agricultural lands at Kalmani, Rangiya,  Assam. ";
	    cout<<"Total area (approx) =202 bighas 1 katha 5 lechas. \n";
	    break;
    case 3 :clrscr();
	    cout<<"==============================================================================\n";
	    cout<<"   			JUDGES ASSETS\n";
	    cout<<"==============================================================================\n";
	    cout<<endl;
	    cout<<endl;
	    cout<<"\nHALF OWNER OF FLAT AT RIDGEWOOD ESTATE, DLF PHASE -IV, GURGAON, HARYANA AD-MEASURING 1720 SO.FT. (SUPER AREA)\n";
	    cout<<"\nFIRST FLOOR (AD-MEASURING ABOUT 1000 SO. FT.) WITH ROOF RIGHTS OF CODAGE AT RADHA BHAWAN ESTATE LIBRARY, MUSSOURIE, UDARAKHAND . ALF OWNER OF FLAT AT RIDGEWOOD ESTATE, ' DLF\n";
	    cout<<"PHASE-IV, GURGAON, ARYANA A~MEASURINGI H2O . SO.FT. (SUPER AREA) \n";
	    cout<<"\nFIXED DEPOSITS IN BANK \n";
	    break;
    case 4 :clrscr();
	    cout<<"==============================================================================\n";
	    cout<<"   			JUDGES ASSETS\n";
	    cout<<"==============================================================================\n";
	    cout<<endl;
	    cout<<endl;
	    cout<<"\nUndivided share in house property in Friends Colony (West), New Delhi [2}'2 storeyed + garages +servant Qtrs]. \n";
	    cout<<"\nJoint commercial property (four office spaces) in building in Barakhamba Road, New Delhi.\n";
	    cout<<"\nClaim to undivided share in properties in District Rampur, UP left by paternal grandfather\n";
	    cout<<"\nReal Estate (immoveable property) of the Judge's dependent (son) \n";
	    break;
    case 5 :clrscr();
	    cout<<"==============================================================================\n";
	    cout<<"   			JUDGES ASSETS\n";
	    cout<<"==============================================================================\n";
	    cout<<endl;
	    cout<<endl;
	    cout<<"\nUndivided share in property in Gali Qasim Jaan & Gali Murghewali, Ballimaran, Delhi\n";
	    cout<<"\nUndivided share in agricultural lands at Khubnikuchi,";
	    cout<<"Rangiya, Assam. Total area (approx) =214 bighas 7kathas 6lechas.\n";
	    cout<<"\nTempleton India Corporate Bond Opportunities Fund Dividend Payout.\n";
	    break;
    case 0 :exit(0);
	   break;
    default: cout<<"Invalid entry!!";
	     delay(1000);
	     clrscr();
	     goto lable;
   }
  cout<<"\nWant to know more? ";
  cin>>ch;
 } while(ch=='Y'||ch=='y');
}

/**********************************************
     Function prototyping for D.F.H.
***********************************************/
void add_record();
void display_record();
void search_record();
void delete_record();
void update_record();

/**********************************************
Global declaration for variables and stream objects
***********************************************/
int cno,ch,view,flag;
char stat[20],ans;
fstream f1,f2;
Case c;
judgeasset j;
login l;

/**********************************************
	The main function of the program
***********************************************/
void main()
{
 clrscr();
 cout<<"\n\n\n\n\t\t\t  Court Management System"<<endl;
 delay(1000);
 cout<<"\n\n\n\n\t\t\t\tCoded by:\n\t\t\t Atrij Sharma and Rithin Jose";
 cout<<"\n\n\n\n\n\n\n\n\n\n\n\nPress any key to continue...";
 getch();


 lable:
 clrscr();
 cout<<"\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
 cout<<"\t\t\tWELCOME TO DELHI HIGH COURT"<<endl;
 cout<<"\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
 cout<<"\t\tYOU CAN DO THE FOLLOWING OPERATIONS:"<<endl;
 cout<<"\t\t1. USE AS A VIEWER"<<endl;
 cout<<"\t\t2. USE AS AN ADMIN"<<endl;
 cout<<"\n\n\n\n\t\t\t0. EXIT"<<endl;
 cout<<"ENTER YOUR CHOICE: ";
 cin>>view;
 switch(view)
 {
  case 1:int v_ch;
	 lable1:
	 clrscr();
	 cout<<"\n\n\n\n\n\tDELHI HIGH COURT";
	 cout<<"\n\t\tYOU CAN DO THE FOLLOWING OPERATIONS: "<<endl;
	 cout<<"\t\t1.View case"<<endl;
	 cout<<"\t\t2.Search case"<<endl;
	 cout<<"\t\t3.View judges asset"<<endl;
	 cout<<"\t\t4.Return to main menu"<<endl;
	 cout<<"ENTER YOUR CHOICE: ";
	 cin>>v_ch;
	 if(v_ch==1)
	 {
	  clrscr();
	  display_record();
	  getch();
	  goto lable1;
	 }
	 else if(v_ch==2)
	 {
	  clrscr();
	  search_record();
	  goto lable1;
	 }
	 else if(v_ch==3)
	  {
	   j.judgelist();
	   goto lable1;
	  }
	 else if(v_ch==4)
	  goto lable;
	 else
	 {
	  cout<<"Invalid entry!!";
	  getch();
	  goto lable1;
	 }

  case 2:l.Enter_un_pass();
	 int a_ch;
	 lable2:
	 clrscr();
	 cout<<"\n\n  Welcome ADMIN";
	 cout<<"\n\n\t\tYOU CAN DO THE FOLLOWING OPERATIONS:"<<endl;
	 cout<<"\t\t1.Add case"<<endl;
	 cout<<"\t\t2.Delete case"<<endl;
	 cout<<"\t\t3.Update case"<<endl;
	 cout<<"\t\t4.Display case"<<endl;
	 cout<<"\t\t5.Search case"<<endl;
	 cout<<"\t\t6.Log out and Return to main menu";
	 cout<<"\n\n\n\t\tENTER YOUR CHOICE: ";
	 cin>>a_ch;
	 if(a_ch==1)
	 {
	  clrscr();
	  add_record();
	  goto lable2;
	 }
	 else if(a_ch==2)
	 {
	  clrscr();
	  delete_record();
	  goto lable2;
	 }
	 else if(a_ch==3)
	 {
	  clrscr();
	  update_record();
	  goto lable2;
	 }
	 else if(a_ch==4)
	 {
	  clrscr();
	  display_record();
	  getch();
	  goto lable2;
	 }
	 else if(a_ch==5)
	 {
	  clrscr();
	  search_record();
	  goto lable2;
	 }
	 else if(a_ch==6)
	  goto lable;
	 else
	 {
	  cout<<"Invalid entry!!";
	  getch();
	  goto lable2;
	 }

  case 0:exit(0);
	 break;
  default: cout<<"Invalid entry!!";
	   getch();
	   goto lable;
 }
 getch();
}
/**********************************************
	D.F.H function defination
***********************************************/
void add_record()
{
 do
 {
  clrscr();
  f1.open("court.dat",ios::out|ios::app);
  cout<<"Enter new case details: "<<endl;
  c.input();
  f1.write((char*)&c,sizeof(c));
  cout<<"\n\n\t\tCASE ADDED";
  cout<<"\n\nDo you wish to add another case? ";
  cin>>ans;
 }while(ans=='y'||ans=='Y');
 f1.close();
}

void display_record()
{
 f1.open("court.dat",ios::in);
 if(!f1)
 cout<<"\nNo case available.\n"<<"Try entering case by viewing as admin"<<endl;
 else
 {
  f1.read((char*)&c,sizeof(c));
  while(!f1.eof())
  {
   c.output();
   f1.read((char*)&c,sizeof(c));
  }
 }
  f1.close();
 }

void search_record()
{
 flag=0;
 char arr[20];
 do
 {
  clrscr();
  cout<<"\nEnter case no. to be searched for: ";
  cin>>cno;
  f1.open("court.dat",ios::in);
  if(!f1)
   cout<<"File does not exist."<<endl;
  else
  {
   f1.read((char*)&c,sizeof(c));
   while(!f1.eof())
   {
    if(c.getcno()==cno)
    {
     flag=1;
     cout<<"Case exists"<<endl;
     c.output();
     break;
    }
    f1.read((char*)&c,sizeof(c));
   }
   if(flag==0)
   cout<<"\nCase does not exist.\n";
   f1.close();
  }
  cout<<"Do you wish to search another case? ";
  cin>>ans;
 }while(ans=='Y'||ans=='y');
}

void delete_record()
{
 flag=0;
 do
 {
  clrscr();
  cout<<"Enter the case no.to be deleted: ";
  cin>>cno;
  f1.open("court.dat",ios::in);
  f2.open("temp.dat",ios::out|ios::app);
  if(!f1)
   cout<<"File does not exist."<<endl;
  else
  {
   f1.read((char*)&c,sizeof(c));
   while(!f1.eof())
   {
    if(c.getcno()==cno)
    {
     cout<<"\nCase found.";
     flag=1;
    }
    else
    {
     f2.write((char*)&c,sizeof(c));
    }
    f1.read((char*)&c,sizeof(c));
   }
   if(flag==1)
   {
   cout<<"\nCase no. "<<cno<<" is deleted."<<endl;
   }
   else
   cout<<"\nCase does not exist."<<endl;
   f1.close();
   f2.close();
   remove("court.dat");
   rename("temp.dat","court.dat");
  }
  cout<<"Do you want to delete more cases? ";
  cin>>ans;
 }while(ans=='Y'||ans=='y');
}

void update_record()
{
 flag=0;
 char ans;
 do
 {
  clrscr();
  f1.open("court.dat",ios::in|ios::out);
  if(!f1)
   cout<<"File does not exist"<<endl;
  else
  {
   cout<<"Enter case no to be updated: ";
   cin>>cno;
   f1.read((char*)&c,sizeof(c));
   while(!f1.eof())
   {
    if(cno==c.getcno())
    {
     cout<<"Case exist.Old information is: "<<endl;
     c.output();
     flag=1;
     break;
    }
    f1.read((char*)&c,sizeof(c));
   }

   if(flag==1)
   {
    int pos=f1.tellg()-sizeof(c);
    f1.seekp(pos,ios::beg);
    cout<<"\nENTER NEW INFORMATION: "<<endl;
     c.input();
    f1.write((char*)&c,sizeof(c));
    cout<<"Case updated"<<endl;
   }
   else
   cout<<"Case does not exist"<<endl;
  }
  f1.close();
  cout<<"Do you wish to update more cases? ";
  cin>>ans;
 }while(ans=='Y'||ans=='y');
}






