#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<cstring>
using namespace std;
class telephone
{
    char name[20];
int number;
public:
void accept()
{
cout<<"\n enter name and telephone number: ";
cin>>name>>number;
}
void display()
{
 cout<<"\n"<<name<<"\t"<<number;
}
int search(int num)
{
    if(number==num)
    {
   	 cout<<"\n record found";
cout<<"\n"<<name<<"\t"<<number;
return 1;
}
else
return 0;
}
int search(char(n[ ]))
{
	 if(!strcmp(name,n))
{
cout<<"\n record found";
cout<<"\n"<<name<<"\t"<<number;
return 1;
}
else
return 0;
}
};
int main()
{
 telephone t;
fstream file;
int ch,i,n,flag;
int number;
char name[100];
while(1)
{
    cout<<"\n 1.enter information";
cout<<"\n 2.display information";
cout<<"\n 3.search using number";
cout<<"\n 4. search using name";
cout<<"\n 5.exit";
cout<<"\n enter your choice: ";
cin>>ch;
switch(ch)
{
case 1:
file.open("/home/comp/Documents/number.txt",ios::out);
cout<<"\n how many number you want to add:";
cin>>n;
for(i=0;i<n;i++)
{
t.accept();
file.write((char *)&t,sizeof(t));
}
file.close();
break;
case 2:
file.open("/home/comp/Documents/number.txt",ios::in);
cout<<"\n telephone information is:";
while(file)
{
file.read((char *)&t,sizeof(t));
t.display();
}
file.close();
break;
case 3:
file.open("/home/comp/Documents/number.txt",ios::in);
cout<<"\n enter number you wanted to search: ";
cin>>number;
flag=0;
while(file)
{
file.read((char *)&t,sizeof(t));
if(t.search(number))
{
flag=1;
break;
}
}
if(flag==0)
cout<<"\n record not found";
file.close();
break;
case 4:
file.open("/home/comp/Documents/number.txt",ios::in);
cout<<"\n enter name you wanted to search:";
cin>>name;
flag=0;
while(file)
{
file.read((char *)&t, sizeof(t));
if(t.search(name))
{
flag=1;
break;
}
}
if (flag==0)
cout<<"\n record not found";
file.close();
break;
case 5:
    exit(0);
}
}
return 0;
}

