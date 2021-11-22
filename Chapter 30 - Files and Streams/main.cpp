#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    char data[100];

    // Open File in Write Mode
    ofstream outfile;
    outfile.open("file.txt");
    
    cout << "Writing to File" << endl;
    cout << "Input Name: ";
    cin.getline(data, 100);

    // Write to File
    outfile << data << endl;

    cout << "Input Age: ";
    cin >> data;
    cin.ignore();

    // Write to File
    outfile << data << endl;

    // Close File
    outfile.close();

    // Open File in Read Mode
    ifstream infile;
    infile.open("file.txt");

    // Read File
    cout << "Reading from File" << endl;
    infile >> data;

    // Print Data
    cout << data << endl;

    // Perform another Read
    infile >> data;
    cout << data << endl;

    // Close File
    infile.close();

    // Seek
    ifstream infile_seek;
    infile_seek.open("file.txt");

    // Seek to the nth byte of file
    int n = 3;
    infile_seek.seekg(n);
    infile_seek >> data;
    cout << data << endl;
    infile_seek.close();

    return 0;
}