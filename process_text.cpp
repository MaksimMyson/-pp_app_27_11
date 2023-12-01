#include "process_text.h"
#include <iostream>
#include <fstream>

using namespace std;

// Реалізація конструктора структури Word
Word::Word(const std::string& t) : text(t) {}

// Реалізація функції для обробки вмісту файлу
void processFile(const std::string& inputFileName, const std::string& outputFileName) {
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

    // Читання та обробка вмісту вхідного файлу
    string wordText;
    while (inputFile >> wordText) {
        Word word(wordText);

        // Перевірка довжини слова
        if (word.text.length() >= 7) {
            // Запис слова у новий файл
            outputFile << word.text << " ";
        }
    }

    // Закриття файлів
    inputFile.close();
    outputFile.close();

    cout << "Processing complete. Check the '" << outputFileName << "' file.\n";
}
