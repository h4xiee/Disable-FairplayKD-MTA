#include <cstdlib>
#include <string>
#include <iostream>
#include <windows.h>

void setConsoleColor(WORD color) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, color);
}

int main() {
    std::cout << " [+] Excluding and deactivating anti cheat mta fairplaykd driver\n";

    Sleep(5000);

    system("reg delete HKLM\\SYSTEM\\ControlSet001\\Services\\FairplayKD /f");
    system("reg delete HKLM\\SYSTEM\\ControlSet001\\Services\\FairplayKD1 /f");
    system("reg delete HKLM\\SYSTEM\\ControlSet001\\Services\\FairplayKD2 /f");
    system("reg delete HKLM\\SYSTEM\\ControlSet001\\Services\\FairplayKD3 /f");
    system("reg delete HKLM\\SYSTEM\\ControlSet001\\Services\\FairplayKD4 /f");

    system("sc delete fairplaykd");
    system("sc delete fairplaykd1");
    system("sc delete fairplaykd2");
    system("sc delete fairplaykd3");
    system("sc delete fairplaykd4");

    setConsoleColor(FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    std::cout << " [+] Successful deleted driver\n";
    setConsoleColor(FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);

    std::cout << " open mta";
    std::cin.get();

    return 0;
}
