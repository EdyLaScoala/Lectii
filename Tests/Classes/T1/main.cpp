#include <iostream>
using namespace std;

class Serban {
private:
    int age = 16;
    string animal = "Soparla";
public:
    void getAge() {
        cout << "Serban's age is " << age << endl;
    }

    void setAge() {
        cout << "Set a new age for Serban: ";
        cin >> age;
        cout << "New age set for Serban: " << age << endl;
    }

    void getAnimal() {
        cout << "Serban's favorite animal is " << animal << endl;
    }

    void setAnimal() {
        cout << "Set a new favorite animal for Serban: ";
        cin >> animal;
        cout << "New favorite animal set for Serban: " << animal << endl;
    }

    Serban() {
        // Constructor (optional)
    }

    ~Serban() {
        // Destructor (optional)
    }
};

int main() {
    Serban serbi = Serban();
    
    while (true) {
        cout << "Enter a command (getAge, setAge, getAnimal, setAnimal, or exit): ";
        string command;
        cin >> command;
        
        if (command == "getAge") {
            serbi.getAge();
        } else if (command == "setAge") {
            serbi.setAge();
        } else if (command == "getAnimal") {
            serbi.getAnimal();
        } else if (command == "setAnimal") {
            serbi.setAnimal();
        } else if (command == "exit") {
            break; // Exit the loop
        } else {
            cout << "Invalid command. Please enter a valid command." << endl;
        }
    }
    
    return 0;
}
