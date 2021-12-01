#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string name, str;

    // cout << "Enter your Name\n";
    // cin >> name;
    // ofstream out("Sample_output.txt");
    // out << name;

    // out.close(); // Close the File

    // Reading the Same file

    ifstream in("Sample_Output.txt");
    cout<<"Reading from file\n";
    getline(in,str);
    cout << str;
    in.close();

    return 0;
}