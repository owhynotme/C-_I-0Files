#include<iostream>
#include<fstream>
using namespace std;
 
 
int main()
{
    string str;
   //Reading the Same file

    ifstream in("Sample_Output.txt");
    cout<<"Reading from file\n\n";
    getline(in,str);
    cout << str;
    in.close();

  
 return 0;
}