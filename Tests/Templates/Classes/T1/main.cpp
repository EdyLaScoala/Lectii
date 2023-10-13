#include <iostream>

using namespace std;

class Serban
{
private:
    int age=16;
    string animal = "Soparla";
public:
    void getAge()
    {
        cout << "Serban's age is " << age << endl;
    }

    void setAge()
    {
        cout << "Set a new age for Serban: ";
        cin >> age;
        cout << "Set new age for Serban: " << age << endl;
    }

    void getAnimal()
    {
        cout << "Serban's favourite animal is " << animal << endl;
    }

    void setAnimal()
    {
        cout << "Set a new favourite animal for Serban: ";
        cin >> age;
        cout << "New favourite animal set for Serban: " << age << endl;
    }

    Serban();
    ~Serban();
};


int main()
{
    Serban serbi = Serban();
    serbi.getAge();
    serbi.setAnimal();
}
