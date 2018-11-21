#include <iostream>
#include <fstream>
#include <string>
#include "Menu.h"

void Menu::show_menu() {
    std::cout << "1. Import course list" << std::endl;
    std::cout << "2. Load master list" << std::endl;
    std::cout << "3. Store master list" << std::endl;
    std::cout << "4. Mark absences" << std::endl;
    std::cout << "5. BONUS: Edit absences" << std::endl;
    std::cout << "6. Generate report" << std::endl;
    std::cout << "7. Exit" << std::endl;
}

bool Menu::read_option() {
    std::string input;
    int option;

    this->show_menu();
    getline(std::cin, input);

    option = stoi(input);

    switch (option) {
        case 1:
            this->import_course_list();
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            break;
        case 6:
            break;
        default:
            break;

    }
    return option != 7;
}


void Menu::import_course_list() {
    std::ifstream file;
    std::string line;

    file.open("./classList.csv");
    if (!file) {
        std::cout << "Unable to open file";
        exit(1);
    }

    getline(file,line); // discard the first row with the headers

    while(!file.eof())
    {
        getline(file,line);
        if (line != "")
            this->master.insert(Data(line));
    }

    file.close();

}

void Menu::mark_absences() {

}