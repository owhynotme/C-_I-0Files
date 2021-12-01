#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string name, str;

    cout << "Enter your Name\n";
    cin >> name;
    ofstream out("Sample_output.txt");
    out << name;

    out.close(); // Close the File

    return 0;
}