#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void distributeStudents(vector<string>& students,vector<string>& group1,vector<string>& group2) {

    cout << "Отсортированный список: " << endl;
    for (auto lastname : students) {
        cout << lastname << " ";
    }
    cout << endl;
    
    // Вывод групп
    cout << "Группа 1: ";
    for (auto student : group1) {
        cout << student << " ";
    }
    cout << endl;

    cout << "Группа 2: ";
    for (auto student : group2) {
        cout << student << " ";
    }
    cout << endl;
}

int main() {
    system("chcp 65001");
    // Пример массива учеников, записанных не по порядку
    vector<string> students = {"Иванов", "Петров", "Бендеров", "Головчиц", "Выборнов", "Герасимова", "Леонова"};

   // Сортируем учеников по порядку
    sort(students.begin(), students.end());

    vector<string> group1, group2;
    bool isGroup1 = true;

    // Распределение учеников по группам через одного
    for (auto student : students) {
        if (isGroup1) {
            group1.push_back(student);
        } else {
            group2.push_back(student);
        }
        isGroup1 = !isGroup1;
    }


    distributeStudents(students, group1, group2);



    return 0;
}
