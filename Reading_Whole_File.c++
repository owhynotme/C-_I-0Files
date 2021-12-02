#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string str,str2;
    ifstream in,in2;

    // 1. Using Files not stored in the Project Folder
    in.open(R"(C:\Users\Tarun\Desktop\Text dox\Imp.txt)"); // This is how we can open a file which is not present in the folder by using (Raw Literal)
    
    // 2. Using Files not stored in the Project Folder
    in2.open("C:/Users/Tarun/Desktop/Text dox/Username.txt"); // Another way of using Files not stored in the Project folder

    if (in.is_open())
    {
        cout << "File is opened\n";
        while (in.eof() == 0)
        {
            getline(in, str);
            cout << str<<endl;
        }
    }
    in.close();

    if (in2.is_open())
    {
        cout << "File is opened\n";
        while (in2.eof() == 0)
        {
            getline(in2, str2);
            cout << str2<<endl;
        }
    }
    in2.close();

    return 0;
}