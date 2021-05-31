// ofstream.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <fstream>
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    string filename;
    cout << "what do you want your file name to be ?" << endl;

    cin >> filename;
    ofstream file(filename, ios::app); 
    

    if (file.is_open())
    {
        cout << "success" << endl;
    }
    file << "hey"<<"  ";
    vector<string> names;
    names.push_back("lucas");
    names.push_back("wish");
    names.push_back("nightly");
    names.push_back("nightlywish");
    for (string name : names)
    {
        file << name << endl;
    }
    file.close();
    return 0;
}

