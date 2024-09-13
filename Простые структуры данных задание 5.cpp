#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstring> 
using namespace std;

struct student {
    char famil[20];  // фамилия
    char name[20];   // имя
    char facult[20]; // факультет
    int Nomzach;     // номер зачетной книжки
};

int main() {
    setlocale(LC_ALL, "Russian"); // Поддержка русского языка

    student stud[3];
    int i;

    // Ввод данных о студентах
    for (i = 0; i < 3; i++) {
        cout << "Введите фамилию студента: ";
        cin >> stud[i].famil;

        cout << "Введите имя студента: ";
        cin >> stud[i].name;

        cout << "Введите название факультета студента: ";
        cin >> stud[i].facult;

        cout << "Введите номер зачетной книжки студента: ";
        cin >> stud[i].Nomzach;
    }

    // Поиск студента по фамилии
    char searchFamil[20];
    cout << "\nВведите фамилию для поиска: ";
    cin >> searchFamil;

    bool found = false;
    for (i = 0; i < 3; i++) {
        if (strcmp(stud[i].famil, searchFamil) == 0) {
            cout << "\nНайден студент: " << stud[i].famil << " " << stud[i].name << "\n";
            cout << "Факультет: " << stud[i].facult << "\n";
            cout << "Номер зачетной книжки: " << stud[i].Nomzach << "\n";
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Студент с фамилией " << searchFamil << " не найден.\n";
    }

    return 0;
}
