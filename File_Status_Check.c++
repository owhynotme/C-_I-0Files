#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string str, str2;
    ofstream out;
    out.open("Sample.txt");
    if (out.is_open())
    {
        cout << "File is opened\n";

        for (int i = 1; i <= 4; i++)
        {
            cout << "Enter Numbers " << i << endl;
            cin >> str;
            out << str << endl;
        }
    }
    out.close();

    ifstream in;
    in.open("Sample.txt");

    if (in.is_open())
    {
        cout << "File is open and ready to use\n";

        while (in.eof() == 0)
        {
            getline(in, str2);
            cout
                << str2 << endl;
        }
    }
    in.close();

    return 0;
}