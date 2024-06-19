// main.cpp
#include <iostream>
#include <vector>
#include <fstream>
#include "student.h"

using namespace std;

vector<Student> students;

void addStudent() {
    Student s;
    cout << "Enter ID: ";
    cin >> s.id;
    cout << "Enter name: ";
    cin.ignore();
    getline(cin, s.name);
    cout << "Enter age: ";
    cin >> s.age;
    cout << "Enter major: ";
    cin.ignore();
    getline(cin, s.major);

    students.push_back(s);
    cout << "Student added successfully.\n";
}

void displayStudents() {
    if (students.empty()) {
        cout << "No students to display.\n";
        return;
    }
    for (const auto &s : students) {
        cout << "ID: " << s.id << "\nName: " << s.name << "\nAge: " << s.age << "\nMajor: " << s.major << "\n\n";
    }
}

void searchStudentById() {
    int id;
    cout << "Enter student ID to search: ";
    cin >> id;
    for (const auto &s : students) {
        if (s.id == id) {
            cout << "ID: " << s.id << "\nName: " << s.name << "\nAge: " << s.age << "\nMajor: " << s.major << "\n";
            return;
        }
    }
    cout << "Student with ID " << id << " not found.\n";
}

void deleteStudentById() {
    int id;
    cout << "Enter student ID to delete: ";
    cin >> id;
    for (auto it = students.begin(); it != students.end(); ++it) {
        if (it->id == id) {
            students.erase(it);
            cout << "Student deleted successfully.\n";
            return;
        }
    }
    cout << "Student with ID " << id << " not found.\n";
}

void saveToFile() {
    ofstream outFile("students.txt");
    if (!outFile) {
        cout << "Error opening file for writing.\n";
        return;
    }
    for (const auto &s : students) {
        outFile << s.id << "\n" << s.name << "\n" << s.age << "\n" << s.major << "\n";
    }
    outFile.close();
    cout << "Students saved to file successfully.\n";
}

void loadFromFile() {
    ifstream inFile("students.txt");
    if (!inFile) {
        cout << "Error opening file for reading.\n";
        return;
    }
    students.clear();
    Student s;
    while (inFile >> s.id) {
        inFile.ignore();
        getline(inFile, s.name);
        inFile >> s.age;
        inFile.ignore();
        getline(inFile, s.major);
        students.push_back(s);
    }
    inFile.close();
    cout << "Students loaded from file successfully.\n";
}

int main() {
    int choice;
    do {
        cout << "\nStudent Management System\n";
        cout << "1. Add a Student\n";
        cout << "2. Display All Students\n";
        cout << "3. Search for a Student by ID\n";
        cout << "4. Delete a Student by ID\n";
        cout << "5. Save Students to File\n";
        cout << "6. Load Students from File\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addStudent();
                break;
            case 2:
                displayStudents();
                break;
            case 3:
                searchStudentById();
                break;
            case 4:
                deleteStudentById();
                break;
            case 5:
                saveToFile();
                break;
            case 6:
                loadFromFile();
                break;
            case 0:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 0);

    return 0;
}
