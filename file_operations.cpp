#include "file_operations.h"
#include <iostream>
#include <fstream>

using namespace std;

// Функція для копіювання рядків з одного файлу в інший
void copyFile(const std::string& inputFileName, const std::string& outputFileName) {
    // Відкриття вихідного файлу для читання
    ifstream inputFile(inputFileName);
    if (!inputFile.is_open()) {
        cerr << "Unable to open input file.\n";
        return;
    }

    // Відкриття нового файлу для запису
    ofstream outputFile(outputFileName);
    if (!outputFile.is_open()) {
        cerr << "Unable to open output file.\n";
        inputFile.close();  // Закриваємо вхідний файл перед завершенням програми
        return;
    }

    // Читання та запис рядків у новий файл
    string line;
    while (getline(inputFile, line)) {
        // Запис рядка у новий файл
        outputFile << line << '\n';
    }

    // Закриття файлів
    inputFile.close();
    outputFile.close();

    cout << "Copying complete. Check the '" << outputFileName << "' file.\n";
}
