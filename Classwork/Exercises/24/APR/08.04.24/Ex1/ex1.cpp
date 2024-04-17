#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Record {
    int id;
    string name;
};

vector<Record> database;

void addRecord(int id, string name) {
    Record r;
    r.id = id;
    r.name = name;
    database.push_back(r);
}

void viewRecords() {
    for (Record r : database) {
        cout << "ID: " << r.id << ", Name: " << r.name << endl;
    }
}

void deleteRecord(int id) {
    for (int i = 0; i < database.size(); i++) {
        if (database[i].id == id) {
            database.erase(database.begin() + i);
            break;
        }
    }
}

int main() {
    int choice, id;
    string name;

    while (true) {
        cout << endl << endl << "1. Add Record\n2. View Records\n3. Delete Record\n4. Exit\nEnter your choice: ";
        cin >> choice;
        system("clear");
        switch (choice) {
            case 1:
                cout << "Enter ID: ";
                cin >> id;
                cout << "Enter Name: ";
                cin >> name;
                addRecord(id, name);
                break;
            case 2:
                viewRecords();
                break;
            case 3:
                cout << "Enter ID of the record to delete: ";
                cin >> id;
                deleteRecord(id);
                break;
            case 4:
                exit(0);
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    }

    return 0;
}
