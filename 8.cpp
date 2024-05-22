#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Структура для хранения информации о студенте
struct Student {
    string name;
    int totalScore; // Общий балл за ЕГЭ
    double averageScore; // Средний балл за сессию
    bool isFirstYear; // Является ли студент первокурсником
};

// Функция для проверки, прошел ли студент отбор
bool isQualified(const Student& student) {
    if (student.totalScore < 245) {
        return false;
    }
    if (!student.isFirstYear && student.averageScore < 4.5) {
        return false;
    }
    return true;
}

int main() {
    system("chcp 65001");
    // Создаем список студентов
    vector<Student> students = {
        {"Никита", 250, 4.8, false},
        {"Петя", 240, 4.0, true},
        {"Алёна", 270, 4.9, false},
        {"Кристина", 230, 4.2, true},
    };

    // Удаляем неподходящих студентов
    auto newEnd = remove_if(students.begin(), students.end(), [](const Student& s) {
        return !isQualified(s);
    });
    students.erase(newEnd, students.end());

    // Выводим счастливчиков
    cout << "Счастливчики:" << endl;
    for (const auto& student : students) {
        cout << student.name << endl;
    }

    return 0;
}
