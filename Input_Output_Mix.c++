#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string names, str2;

    ofstream out;
    out.open("Sample_IO_Mix.txt");
    cout << " Output \n\n";
    for (int i = 1; i <= 4; i++)
    {
        cout << "Enter name " << i << endl;
        cin >> names;
        out << names << endl;
    }

    out.close();
    cout << endl;

    ifstream in;
    in.open("Sample_IO_Mix.txt");
    cout << " Input \n\n";
    while (in.eof() == 0)
    {
        getline(in, str2);
        cout << str2 << endl;
    }

    return 0;
}