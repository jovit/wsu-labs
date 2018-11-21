#include <iostream>
#include "Menu.h"
#include "Data.h"
#include "Stack.h"

int main() {
    Menu menu;
    Data data("1,1111,\"Smith,John\",smithj@cpts122.edu,4,CS,Freshman");
    Stack s;

    s.push("a");
    s.push("b");
    s.push("c");
    s.push("d");
    s.pop();
    s.pop();
    s.pop();

    while (menu.read_option()){}

    return 0;
}