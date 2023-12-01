#ifndef FILE_OPERATIONS_H
#define FILE_OPERATIONS_H

#include <string>
#include <vector>

// ��������� ��� ��������� �����
struct TextFile {
    std::vector<std::string> lines;
};

// ������� ��� ������� ����� � ����� �� ��������� �� � ��������
TextFile readFile(const std::string& fileName);

// ������� ��� ������ ����� � ��������� � ���� � ����������� �������
void writeReversedToFile(const TextFile& textFile, const std::string& outputFileName);

#endif // FILE_OPERATIONS_H
