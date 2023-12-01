#include "file_operations.h"
#include <fstream>
#include <algorithm>

using namespace std;

// ������� ��� ������� ����� � ����� �� ��������� �� � ��������
TextFile readFile(const string& fileName) {
    TextFile textFile;
    ifstream inputFile(fileName);

    if (!inputFile.is_open()) {
        cerr << "Unable to open input file.\n";
        return textFile; // ��������� ������ ��'��� TextFile
    }

    string line;
    while (getline(inputFile, line)) {
        textFile.lines.push_back(line);
    }

    inputFile.close();
    return textFile;
}

// ������� ��� ������ ����� � ��������� � ���� � ����������� �������
void writeReversedToFile(const TextFile& textFile, const string& outputFileName) {
    ofstream outputFile(outputFileName);

    if (!outputFile.is_open()) {
        cerr << "Unable to open output file.\n";
        return;
    }

    for (auto it = textFile.lines.rbegin(); it != textFile.lines.rend(); ++it) {
        outputFile << *it << '\n';
    }

    outputFile.close();
    cout << "Writing complete. Check the '" << outputFileName << "' file.\n";
}
