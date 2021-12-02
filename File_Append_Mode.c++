#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    char str[40];
    string str2;
    cout << "Enter Something\n";
    cin.getline(str, 40);

    ofstream out;
    out.open("Append.txt", ios::app);

    if (out.is_open())
    {
        out << str << endl;
    }
    out.close();

    ifstream in;
    in.open("Append.txt");

    if (in.is_open())
    {
        while (in.eof() == 0)
        {
            getline(in, str2);
            cout << str2<<endl;
        }
    }
    in.close();

    return 0;
}