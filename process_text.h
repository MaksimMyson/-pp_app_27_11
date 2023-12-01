#ifndef PROCESS_TEXT_H
#define PROCESS_TEXT_H

#include <string>

// ��������� ��� ��������� ����� ��� �����
struct Word {
    std::string text;
    Word(const std::string& t);
};

// ������� ��� ������� ����� �����
void processFile(const std::string& inputFileName, const std::string& outputFileName);

#endif // PROCESS_TEXT_H

