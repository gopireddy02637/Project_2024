#include<iostream>
#include<fstream>

using namespace std;

int main(){

    ofstream
    myfile("fileopen.txt");
    myfile<<"open a file and read and write";
    myfile.close();
    string mytext;
    ifstream
    myreadfile("fileopen.txt");
    while(getline(myreadfile,mytext));
    cout<<mytext;
    myreadfile.close();
    

    return 0;
}