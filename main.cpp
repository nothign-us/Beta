#include "Airport.h"
#include <iostream>
#include <fstream>
 #include "Time.h"
 #include "makeMenu.h"
#include <vector>
using namespace std;
int main()
{
    int option = -1;
    while (option != 5)
    {
        option = selectOption(mainMenu());
        runMainMenu(option);
        system("clear");
    }
    // make Airport schedule
}