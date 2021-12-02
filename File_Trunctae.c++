#include<iostream>
#include<fstream>
using namespace std;
 
 
int main()
{
   string str2;
//    char str[40];
//    cout<<"Enter Something\n";
//    cin.getline(str,40);
   ofstream out;
   out.open("Truncate.txt",ios::trunc); 
   cout<<"Succefully Truncated";
//    out<<str<<endl;
   out.close();

  
 return 0;
}