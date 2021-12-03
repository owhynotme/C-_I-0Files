#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    char str[17];
    string strr;
    // cout << "Enter Some data\n";
    // cin.getline(str, 17);

    // ofstream out;
    // out.open("xyz.txt", ios::app);
    // out << endl
    //     << str << endl;

    // out.close();

    // // Current position of write pointer
    // cout << "File pointer Position is at " << out.tellp();



    ifstream in;
    in.open("xyz.txt");
    while (in.eof() == 0)
    {
        getline(in, strr);
        cout << strr << endl;
    }
    in.seekg(5,ios::beg);
    // Current position of read pointer
    cout << "File pointer Position is at " << in.tellg()<<endl;

    in.seekg(5,ios::cur);
    cout << "File pointer Position is at " << in.tellg()<<endl;

    return 0;
}