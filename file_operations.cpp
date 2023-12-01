#include "file_operations.h"
#include <iostream>
#include <fstream>

using namespace std;

// ������� ��� ��������� ����� � ������ ����� � �����
void copyFile(const std::string& inputFileName, const std::string& outputFileName) {
    // ³������� ��������� ����� ��� �������
    ifstream inputFile(inputFileName);
    if (!inputFile.is_open()) {
        cerr << "Unable to open input file.\n";
        return;
    }

    // ³������� ������ ����� ��� ������
    ofstream outputFile(outputFileName);
    if (!outputFile.is_open()) {
        cerr << "Unable to open output file.\n";
        inputFile.close();  // ��������� ������� ���� ����� ����������� ��������
        return;
    }

    // ������� �� ����� ����� � ����� ����
    string line;
    while (getline(inputFile, line)) {
        // ����� ����� � ����� ����
        outputFile << line << '\n';
    }

    // �������� �����
    inputFile.close();
    outputFile.close();

    cout << "Copying complete. Check the '" << outputFileName << "' file.\n";
}
