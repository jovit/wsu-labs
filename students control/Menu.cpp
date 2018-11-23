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

    this->show_menu(); // print the whole menu
    getline(std::cin, input);

    option = stoi(input); // converting to int to allow the use of a switch for more readable and efficient comparisons

    // for each option, run the corresponding function
    switch (option) {
        case 1:
            this->import_course_list();
            break;
        case 2:
            this->load_master();
            break;
        case 3:
            this->store_master();
            break;
        case 4:
            this->mark_absences();
            break;
        case 5: // not implemented
            break;
        case 6:
            this->generate_reports();
            break;
        default:
            break;

    }

    return option != 7; // returns if the program has exited by the user
}


void Menu::import_course_list() {
    std::ifstream file;
    std::string line;

    file.open("./classList.csv");
    if (!file) {
        std::cout << "Unable to open file";
        exit(1);
    }

    getline(file, line); // discard the first row with the headers

    while (!file.eof()) {
        getline(file, line);
        if (!line.empty()) // last line is empty
            this->master.insert(Data(line)); // create a new Data object and insert it into the list
    }

    file.close();

}

void Menu::mark_absences() {
    Node<Data> *current;
    std::string input;
    bool valid;

    for (current = this->master.get_head(); current != nullptr; current = current->get_next()) { // go through the whole list
        std::cout << "Was " << current->get_data()->get_name() << " absent?(yes/no)" << std::endl; // prompt the user
        valid = false;
        while (!valid) { // while the user has not typed a valid option
            getline(std::cin, input);

            if (input == "yes") {
                current->get_data()->add_absence(); // add a new absence to data
                valid = true;
            } else if (input == "no") {
                valid = true;
            } else {
                std::cout << "Type a valid input (yes/no)" << std::endl; // re-prompt the user
            }
        }
    }
}

void Menu::store_master() {
    Node<Data> *current;
    std::ofstream file;
    file.open("master.txt"); // open for writing

    for (current = this->master.get_head(); current != nullptr; current = current->get_next()) {
        Data *current_data = current->get_data();
        Stack s = current_data->get_stack(); // get a copy of the stack

        file << current_data->get_record_number() << ',' << current_data->get_id() << ',' << '"'
             << current_data->get_name() << '"' << ',' << current_data->get_email() << ','
             << (current_data->get_units() < 0 ? "AU" : std::to_string(current_data->get_units())) << ','
             << current_data->get_program()
             << ',' << current_data->get_level()
             << std::endl; // store the data in the same csv style

        file << current_data->get_number_of_absences() << std::endl; // store the number of absences
        while (!s.isEmpty()) {
            file << s.pop(); // store all the absences dates
        }
    }

    file.close();
}

void Menu::load_master() {
    std::ifstream file;
    std::string line;

    this->master.clear(); // empty the whole master for reading

    file.open("./master.txt"); // open for reading
    if (!file) {
        std::cout << "Unable to open file";
        exit(1);
    }

    while (!file.eof()) {
        getline(file, line);
        if (!line.empty()) {
            Data new_data(line); // create a new data from the line read

            getline(file, line);
            int number_of_absences = stoi(line);
            new_data.set_number_of_absences(number_of_absences);

            for (int i = 0; i < number_of_absences; i++) { // read all the absences dates
                getline(file, line);
                new_data.add_to_stack(line + "\n"); // add them to the stack
            }

            this->master.insert(new_data); // add the new data to the master
        }
    }

    file.close();
}

void Menu::generate_reports() {
    Node<Data> *current;
    std::string input;
    bool valid = false;

    std::cout << "1. Generate report for all students; showing only the most recent absence for each student."
              << std::endl;
    std::cout << "2. Generate report for students with absences that match or exceed" << std::endl;

    while (!valid) { // while the user has not typed an valid option
        getline(std::cin, input);

        if (input == "1") {
            valid = true;
            // print the most current absence of each student
            for (current = this->master.get_head(); current != nullptr; current = current->get_next()) {
                std::cout << current->get_data()->get_name() << std::endl;
                std::cout << current->get_data()->get_most_recent_absence() << std::endl;
                std::cout << "----------------------------" << std::endl;
            }
        } else if (input == "2") {
            std::cout << "Enter the amount of absences: ";
            getline(std::cin, input);
            int num_of_absences = stoi(input);
            // print the most current absence for each student with more absences than inputed
            for (current = this->master.get_head(); current != nullptr; current = current->get_next()) {
                if (num_of_absences <= current->get_data()->get_number_of_absences()) {
                    std::cout << current->get_data()->get_name() << std::endl;
                    std::cout << current->get_data()->get_most_recent_absence() << std::endl;
                    std::cout << "----------------------------" << std::endl;
                }
            }
            valid = true;
        } else {
            std::cout << "Choose a valid option (1/2)" << std::endl; // re-prompt the user if not a valid option
        }
    }

}