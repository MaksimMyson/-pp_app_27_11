#include "file_operations.h"

int main() {
    // ������� ����� � �����
    TextFile textFile = readFile("input.txt");

    // ����� ����� � ����������� ������� � ����� ����
    writeReversedToFile(textFile, "output_reversed.txt");

    return 0;
}
