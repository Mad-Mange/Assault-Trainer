#include <iostream>
#include <string>
#include <cwchar>
#include "proc.h"

using std::string;
using std::cout;
using std::endl;

class AbstractEmployee {
    virtual void AskForPromotion() = 0;
};

class Employee : AbstractEmployee {
     string Company;
     int Age;
protected:
    string Name;

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

    void AskForPromotion() {
        if (Age > 30)
            cout << Name << " you got promoted!!" << endl;
        else
            cout << Name << " sorry no promotion for you..." << endl;
    }

     void presentation() {
         cout << "My name is " << Name << " and working at " << 
             this->Company << " and Im " << this->Age << " old.\n";
     }

     virtual void Work() {
         cout << Name << " is checking email, task backlog, performing tasks..." << endl;
     }
};

class Developer : public Employee {
public:
    string FavProgrammingLanguage;
    Developer(string name, string comp, int age, string favProgrammingLanguage) : Employee(name, comp , age){
        FavProgrammingLanguage = favProgrammingLanguage;
    }

    void FixBug() {
        cout << Name << " fixed bug using " << FavProgrammingLanguage << endl;
        cout << "Your age is: " << this->getAge() << endl;
    }

    void Work() {
        cout << Name << " is writing " << FavProgrammingLanguage << " code!" << endl;
    }
};

class Teacher : public Employee {
public:
    string Subject;
    Teacher(string name, string comp, int age, string subject) : Employee(name, comp, age) {
        Subject = subject;
    }
    void PrepareLesson() {
        cout << Name << " is preparing " << Subject << " lesson." << endl;
    }
    void Work() {
        cout << Name << " is teching " << Subject << " to children" << endl;
    }
};

int main(int argc, char** argv)
{
    Employee e = Employee("Sture", "Bygge", 46);
    Developer d = Developer("Kerstin", "Frukt & Grönt", 76, "Perl");
    Teacher t = Teacher("Stina","Skolan",31,"Python");
    
    Employee* e1 = &d;
    Employee* e2 = &t;

    e.Work();
    e1->Work();
    e2->Work();

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



