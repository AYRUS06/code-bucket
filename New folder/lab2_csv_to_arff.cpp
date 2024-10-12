#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    string inputFileName = "airtravel.csv";
    string outputFileName = "output.arff";
    string relationName = "relationName";
    ifstream inputFile(inputFileName);
    ofstream outputFile(outputFileName);

    outputFile << "@RELATION " << relationName << endl
               << endl;
    string line;
    getline(inputFile, line);
    size_t pos = 0;
    while ((pos = line.find(',')) != string::npos)
    {
        string attributeName = line.substr(0, pos);
        outputFile << "@ATTRIBUTE " << attributeName << " NUMERIC" << endl;
        line.erase(0, pos + 1);
    }
    outputFile << "@ATTRIBUTE " << line << " NUMERIC" << endl;

    outputFile << endl
               << "@DATA" << endl;
    while (getline(inputFile, line))
    {
        outputFile << line << endl;
    }

    inputFile.close();
    outputFile.close();
}