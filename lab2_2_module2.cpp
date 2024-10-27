#include <iostream>
#include <string>
using namespace std;

// �������������� ��� ��� ������
enum Months { January = 1, February, March, April, May, June, July, August, September, October, November, December };

// ��������� ��� ����� ������� ��������
struct StudentBirthInfo {
    string name;
    int birthDay;
    Months birthMonth;
};

// ��������� ��� ����� ������� ��������
struct StudentAcademicInfo {
    char citizenship;  // 'U' - ����������, 'F' - ���������
    int course;
    float averageGrade;
};

int main() {
    const int NUM_STUDENTS = 7;
    StudentBirthInfo birthInfo[NUM_STUDENTS];
    StudentAcademicInfo academicInfo[NUM_STUDENTS];

    // ������� ���������� ������ ��������
    birthInfo[0] = { "Ivan", 15, July };
    academicInfo[0] = { 'U', 3, 4.5 };

    birthInfo[1] = { "Oleg", 22, June };
    academicInfo[1] = { 'F', 2, 5.0 };

    birthInfo[2] = { "Anna", 10, May };
    academicInfo[2] = { 'U', 1, 3.8 };

    birthInfo[3] = { "Maria", 30, August };
    academicInfo[3] = { 'F', 2, 5.0 };

    birthInfo[4] = { "John", 5, March };
    academicInfo[4] = { 'F', 4, 4.2 };

    birthInfo[5] = { "Olga", 18, September };
    academicInfo[5] = { 'U', 3, 4.9 };

    birthInfo[6] = { "Paul", 27, July };
    academicInfo[6] = { 'F', 4, 5.0 };

    // ϳ�������� ��������, ���������� �����
    int summerCount = 0;
    for (int i = 0; i < NUM_STUDENTS; i++) {
        if (birthInfo[i].birthMonth == June || birthInfo[i].birthMonth == July || birthInfo[i].birthMonth == August) {
            summerCount++;
        }
    }
    double summerPercentage = (static_cast<double>(summerCount) / NUM_STUDENTS) * 100;
    cout << "³������ ��������, ���������� �����: " << summerPercentage << "%" << endl;

    // ϳ�������� ��������� ��������-�������� (������� ��� = 5.0)
    int foreignExcellentCount = 0;
    for (int i = 0; i < NUM_STUDENTS; i++) {
        if (academicInfo[i].citizenship == 'F' && academicInfo[i].averageGrade == 5.0) {
            foreignExcellentCount++;
        }
    }
    double foreignExcellentPercentage = (static_cast<double>(foreignExcellentCount) / NUM_STUDENTS) * 100;
    cout << "³������ ��������� ��������-��������: " << foreignExcellentPercentage << "%" << endl;

    return 0;
}

