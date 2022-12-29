#include<iostream>
#include<fstream>
using namespace std;

int main()
{

fstream file;

file.open("new.txt",ios::app);
string s;
int ch;
if(file.is_open())
{
   while(1)	
  {
   cout<<"enter choice 1-line , 2-exit"<<endl;
   cin>>ch;
   
   if(ch==1)
  {
   cin.get();                        // it jumps to next line
   getline(cin,s);                   // it takes a full line for writing
   file<<s<<endl;                    // for typing
   }
   
   else if(ch==0)
   {
   	cout<<"exited"<<endl;
   	break;
   }
 }
}
file.close();

file.open("new.txt",ios::in);
{
	while(!file.eof())
	{
		getline(file,s);
		cout<<s<<endl;
	}
}

return 0;
}
