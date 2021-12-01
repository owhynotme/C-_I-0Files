#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string st = "Yo boy";
    string st2;

    // //Opening file through Constructor and writing in it..
    // ofstream out("Sample.txt"); // Opening file
    // out << st; // Writing into the file

    // Opening and reading through File
    ifstream in("Sample2.txt");
    //in >> s2; // This will take only one string
    getline(in,st2); // This will take string which is there in one line
    //getline(in,st2); // This will take string of next line and exclude the 1st line
    cout << st2;

    return 0;
}