#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<process.h>
#include<stdio.h>
#include<fstream.h>
class Facebook
{
 public:
 char a[100],b[100],c[100],g[100],h[100],i[100],n,p[100],q[100],r[100],s[100],
 t[100],x[100];
 int d,e,f,o,u,v,w;
};

 class F:public Facebook
{
 public:
 void enter();
 void dis();
 void odis();
 void mod();
};
void main()
{
 clrscr();
  int j;
  char k='y',l[100],m[100];
  long z;
  F f1;
  cout<<"\n******************************************************************************\n";
  cout<<"******************************************************************************";
  cout<<"\n******************************************************************************\n";
  cout<<"##                                                                          ##";
  cout<<"\n##                                                                          ##\n";
  cout<<"##                                                                          ##";
  cout<<"\n##                                FACEBOOK                                  ##\n";
  cout<<"##                                                                          ##";
  cout<<"\n##                                                                          ##\n";
  cout<<"##                                                                          ##";
  cout<<"\n******************************************************************************\n";
  cout<<"******************************************************************************";
  cout<<"\n******************************************************************************\n";
  cout<<"\n EFORTS BY CHIRAG VERMA";
  cout<<"\n CLASS:-XII A";
  cout<<"\n ROLL NO.:-";
  cout<<"\n\nPress enter to continue:-";
  getch();
  clrscr();
  while(k=='y')
  {
   cout<<"\n$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$";
   cout<<"!!                                MAIN MENU                                   !!";
   cout<<"!!  1.To create your own facebook id:-                                        !!";
   cout<<"!!  2.To open your  id:-                                                      !!";
   cout<<"!!  3.To display all id's:-                                                   !!";
   cout<<"!!  4.EXIT                                                                    !!";
   cout<<"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$";
   cout<<"\nEnter your choice:-";
    cin>>j;
   switch(j)
   {
    case 1: {
	     clrscr();
	     f1.enter();
	     ofstream of;
	     of.open("FACEBOOK.binary",ios::app);
	     of.write((char*)&f1,sizeof f1);
	     of.close();
	     cout<<"\n Press enter ";
	     getch();
	     clrscr();
	    }
	   break;
    case 2: {
	     cout<<"\nEnter your facebook id:- ";
	     gets(l);
	     cout<<"\nEnter your password:-";
	     gets(m);
	     fstream f;
	     f.open("FACEBOOK.binary",ios::in|ios::out);
	     while(!f.eof())
	     {
	      f.read((char*)&f1,sizeof f1);
	      {
	       if((strcmp(l,f1.a)==0)&&(strcmp(m,f1.b)==0))
		{
		 f1.odis();
		 break;
		}
	      }
	     }
	     if((strcmp(l,f1.a)==0)&&(strcmp(m,f1.b)==0))
	     {
	      cout<<" Do you want to see pivacy settings(y/n):-";
	      cin>>f1.n;
	      if(f1.n=='y')
	      {
	       cout<<"\n PRIVACY SETTINGS:-";
	       cout<<"\n 1.Do you want to modify your id:-";
	       cout<<"\n 2.Do you want to delete your id:-";
	       cout<<"\n Enter your choice:-";
	       cin>>f1.o;
	       switch(f1.o)
	       {
		case 1: {
			 while(f.eof())
			 {
			  z=f.tellg();
			  f.read((char*)&f1,sizeof f1);
			  if(strcmp(l,f1.a)==0)
			  {
			   f1.mod();
			   f.seekp(z);
			   f.write((char*)&f1,sizeof f1);
			   break;
			  }
			 }
			}
		       break;
	       // case 2: del();
		      // break;
		default:cout<<"\n You enter invalid option:-";
	       }
	      }
	     }
	     f.close();
	    }
	   break;
    case 3: {
	     clrscr();
	     ifstream fi;
	     fi.open("FACEBOOK.binary",ios::app);
	     while(!fi.eof())
	     {
	      fi.read((char*)&f1,sizeof f1);
	      f1.dis();
	      getch();
	      clrscr();
	     }
	     fi.close();
	    }
	   break;
    case 4: exit(0);
	   break;
     default:cout<<"\n You enter wrong option:-";
   }
   cout<<"\n Do you want to go back at main menu(y/n):-";
   cin>>k;
  }
 getch();
}
void F::enter()
{
 cout<<"\n Enter your id:- ";
 gets(a);
 do
 {
  cout<<"\n Enter your password in word limit(4-8characters):- ";
  gets(b);
  if(strlen(b)<4)
  {
   cout<<"\n Password is too short";
  }
  if(strlen(b)>8)
  {
   cout<<"\n Password is too long";
  }
 }while(4>strlen(b)||strlen(b)>8);
 do
 {
  cout<<"\n Retype your your password:- ";
  gets(c);
  if(strcmp(b,c)==0)
    ;
    else
       {
	cout<<"\n Pasword doesn't match";
       }
 }while(strcmp(b,c)!=0);
 cout<<"\n Enter your first name:- ";
 gets(g);
 cout<<"\n Enter your surname:- ";
 gets(h);
 cout<<"\n Enter your date of birth";
 cout<<"\n Your day:- ";
 cin>>d;
 cout<<" Your month:- ";
 cin>>e;
 cout<<" Your year:- ";
 cin>>f;
 if(f>2004)
 {
  cout<<"\n You are too short to make a facebook ID:-";
  getch();
  exit(0);
 }
 cout<<"\n Enter your gender:- ";
 cin>>i;
 cout<<"\n Your id is sucessfully created:-";
 cout<<"\n Thank you for making facebook id:-";
}
void F::dis()
{
 cout<<"\n         ****     *      ****  ****  *****  ****  ****  *  *";
 cout<<"\n         *       * *     *     *     *   *  *  *  *  *  * * ";
 cout<<"\n         ***    *****    *     ***   ****   *  *  *  *  **  ";
 cout<<"\n         *     *     *   *     *     *   *  *  *  *  *  * * ";
 cout<<"\n         *    *       *  ****  ****  *****  ****  ****  *  *\n\n";
 cout<<"********************************************************************************%%";
 cout<<"\n%% Your ID:- "<<a;
 cout<<"\n%% Your password:- ";
 for(int j=0; j<strlen(b);j++)
 cout<<"*";
 cout<<"\n%% Your first name:- "<<g;
 cout<<"\t\t Your surname:- "<<h;
 cout<<"\n%% Your date of birth:- "<<d<<"/"<<e<<"/"<<f;
 cout<<"\n%% Your gender:- "<<i;
 cout<<"\n%%";
 cout<<"\n********************************************************************************";
}
void F::odis()
{
 clrscr();
 dis();
 getch();
}
void F::mod()
{
 cout<<"\n Enter your id(enter'.'to retain old one):-";
 gets(p);
 if(strcmp(p,".")==0)
  strcpy(p,a);
  else
      strcpy(a,p);
 do
 {
  cout<<"\n Enter your password in 4-8characters(enter'.'to retain old one):- ";
  gets(q);
  if(strcmp(q,".")==0)
   strcpy(q,b);
   else
       strcpy(b,q);
  if(strlen(q)<4)
  {
   cout<<"\n Password is too short";
  }
  if(strlen(q)>8)
  {
   cout<<"\n Password is too long";
  }
 }while(4>strlen(q)||strlen(q)>8);
 cout<<"\n Enter your first name(enter'.'to retain old one):- ";
 gets(s);
 if(strcmp(s,".")==0)
  strcpy(s,g);
  else
      strcpy(g,s);
 strcpy(r,"gh");
 cout<<"\n Enter your surname(enter'.'to retain old one):- ";
 gets(t);
 if(strcmp(t,".")==0)
  strcpy(t,h);
  else
      strcpy(h,t);
 cout<<"\n Enter your date of birth";
 cout<<"\n Your day(enter'-1'to retain old one):- ";
 cin>>u;
 if(u==-1)
  u=d;
  else
      d=u;
 cout<<" Your month(enter'-1'to retain old one):- ";
 cin>>v;
 if(v==-1)
  v=e;
  else
      e=v;
 do
 {
  cout<<" Your year(enter'-1'to retain old one):- ";
  cin>>w;
  if(w==-1)
   w=f;
   else
       f=w;
  if(w>2004)
  {
   cout<<"\n Year must be greater than 2004:-";
   getch();
  }
 }while(w>2004);
 cout<<"\n Enter your gender(enter'.'to retain old one):- ";
 cin>>x;
 if(strcmp(x,".")==0)
  strcpy(x,i);
  else
      strcpy(i,x);
 cout<<"\n Your id is sucessfully modified:-";
}