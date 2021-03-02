#include <iostream>
#include <string>
#include <cwchar>
#include "proc.h"

class Employee {

};

int main()
{
    Employee emp;

    // Get proc id
    const wchar_t* namn = L"Notepad";
    DWORD processID = GetProcId(L"Notepad");
    std::cout << "ProcessId: " << processID << "\n";

    // Get module base adddress

    // Get Handle to process

    // Resolve base address

    // Resolve Ammo Value pointer chain

    // Read ammo value

    // Write to it

    // Read out again


    return 0;
}



