//Writs data to a file. 
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	ofstream outputFile;
	outputFile.open("demofile.txt");

	cout << "Now writing data to the file. \n";

	//Write four names to the file.
	outputFile << "Bruce.\n";
	outputFile << "Peter.\n";
	outputFile << "Clark.\n";
	outputFile << "Alfred.\n";

	//Close the file.

	outputFile.close();
	cout << "Done.\n";

	return 0;

}