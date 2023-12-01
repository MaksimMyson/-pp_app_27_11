#include "file_operations.h"

int main() {
    // Читання рядків з файлу
    TextFile textFile = readFile("input.txt");

    // Запис рядків у зворотньому порядку у новий файл
    writeReversedToFile(textFile, "output_reversed.txt");

    return 0;
}
