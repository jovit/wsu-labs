#include <iostream>
#include "Menu.h"
#include "Data.h"
#include "Stack.h"

int main() {
    Menu menu;

    while (menu.read_option()){} // while the program has not exited, keep reading the options

    return 0;
}