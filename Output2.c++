#include<iostream>
#include<fstream>
using namespace std;
 
 
int main()
{
   char str[29];
   cout<<"Enter you Name\n";
   cin.getline(str,29);
   ofstream out;
   out.open("xyz.txt");
    if (out.is_open())
    {
        out<<str;
    }
    out.close();
    

  
 return 0;
}