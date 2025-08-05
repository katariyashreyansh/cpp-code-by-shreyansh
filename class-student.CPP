#include<iostream.h>
#include<conio.h>

class student{
public:
int roll;
char name[50];

 void getdata(){
 cout<<"enter a roll number :";
 cin>>roll;
 cout<<"enter a name:";
 cin>>name;
 }
 void displaydata(){
 cout<<"\n student details \n";
 cout<<"roll number:"<<roll<<"\n";
 cout<<"name"<<name<<"\n";
  }
};
 void main(){
 clrscr();
 student s;
 s.getdata();
 s.displaydata();
 getch();
 }




