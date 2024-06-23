#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Task {
    string description;
    bool completed;
};

int main() {
    vector<Task> tasks;

    while (true) {
        cout << "To-Do List App" << endl;
        cout << "1. Add task" << endl;
        cout << "2. Remove task" << endl;
        cout << "3. Mark task as completed" << endl;
        cout << "4. Quit" << endl;

        int choice;
        cin >> choice;

        switch (choice) {
            case 1: {
                Task task;
                cout << "Enter task description: ";
                cin >> task.description;
                task.completed = false;
                tasks.push_back(task);
                break;
            }
            case 2: {
                int index;
                cout << "Enter task index to remove: ";
                cin >> index;
                if (index >= 0 && index < tasks.size()) {
                    tasks.erase(tasks.begin() + index);
                } else {
                    cout << "Invalid index!" << endl;
                }
                break;
            }
            case 3: {
                int index;
                cout << "Enter task index to mark as completed: ";
                cin >> index;
                if (index >= 0 && index < tasks.size()) {
                    tasks[index].completed = true;
                } else {
                    cout << "Invalid index!" << endl;
                }
                break;
            }
            case 4:
                return 0;
            default:
                cout << "Invalid choice!" << endl;
        }

        cout << "Tasks:" << endl;
        for (int i = 0; i < tasks.size(); i++) {
            cout << i << ". " << tasks[i].description << " (" << (tasks[i].completed? "Completed" : "Not completed") << ")" << endl;
        }
    }

    return 0;
}