#include <iostream>
#include <string>
#include <cwchar>
#include "proc.h"

using std::string;
using std::cout;
using std::endl;

class AbstractEmployee {
    void AskForPromotion();
};

class Employee {
     string Name;
     string Company;
     int Age;

public:
    void setName(string name) { Name = name; }
    string getName() { return Name; }
    void setCompany(string comp) { Company = comp; }
    string getCompany() { return Company; }
    void setAge(int age) {
        if(age >= 18)
        Age = age;
    }
    int getAge() { return Age; }

    Employee(string name, string comp, int age) { Name = name; Company = comp; Age = age; }

     void presentation() {
         cout << "My name is " << Name << " and working at " << 
             this->Company << " and Im " << this->Age << " old.\n";
     }
};

int main(int argc, char** argv)
{
    Employee emp = Employee("Mange","Crime AB", 49);
    Employee emp1 = Employee("Lisa", "El o Vatten", 21);
    Employee emp3 = Employee("Anders", "Bull & Bång", 35);



    emp.presentation();
    emp1.presentation();
    emp3.setName("Bullen");
    cout << "Hämtar namn med getter!! " << emp3.getName() << endl;
    emp3.presentation();


    // Get proc id
    const wchar_t* namn = L"Notepad";
    DWORD processID = GetProcId(L"Notepad");
    cout << "ProcessId: " << processID << "\n";

    // Get module base adddress

    // Get Handle to process

    // Resolve base address

    // Resolve Ammo Value pointer chain

    // Read ammo value

    // Write to it

    // Read out again


    return 0;
}



