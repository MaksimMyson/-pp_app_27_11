#ifndef FILE_OPERATIONS_H
#define FILE_OPERATIONS_H

#include <string>
#include <vector>

// Структура для зберігання рядків
struct TextFile {
    std::vector<std::string> lines;
};

// Функція для читання рядків з файлу та зберігання їх у структурі
TextFile readFile(const std::string& fileName);

// Функція для запису рядків зі структури у файл у зворотньому порядку
void writeReversedToFile(const TextFile& textFile, const std::string& outputFileName);

#endif // FILE_OPERATIONS_H
