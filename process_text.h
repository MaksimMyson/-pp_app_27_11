#ifndef PROCESS_TEXT_H
#define PROCESS_TEXT_H

#include <string>

// Структура для зберігання даних про слово
struct Word {
    std::string text;
    Word(const std::string& t);
};

// Функція для обробки вмісту файлу
void processFile(const std::string& inputFileName, const std::string& outputFileName);

#endif // PROCESS_TEXT_H

