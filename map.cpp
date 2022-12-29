#include<iostream>
#include<bits/stdc++.h>
#include<map>
using namespace std;

int main()
{

   map<string , int>statedb;
   
   statedb["gujarat"]=879000;
   statedb["lucknow"]=7635545;
   statedb["jharkhand"]=675400;
   statedb["delhi"]=7635545;
   
  int i=1;
  do{

   string s;
   cout<<"enter state name"<<endl;
   cin>>s;
   
   cout<<"state of "<< s << " is having population "<<statedb[s]<<endl;
   i++;
}while(i!=5);

return 0;
   	
}
