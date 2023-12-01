#include "process_text.h"
#include <iostream>
#include <fstream>

using namespace std;

// ��������� ������������ ��������� Word
Word::Word(const std::string& t) : text(t) {}

// ��������� ������� ��� ������� ����� �����
void processFile(const std::string& inputFileName, const std::string& outputFileName) {
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

    // ������� �� ������� ����� �������� �����
    string wordText;
    while (inputFile >> wordText) {
        Word word(wordText);

        // �������� ������� �����
        if (word.text.length() >= 7) {
            // ����� ����� � ����� ����
            outputFile << word.text << " ";
        }
    }

    // �������� �����
    inputFile.close();
    outputFile.close();

    cout << "Processing complete. Check the '" << outputFileName << "' file.\n";
}
