#include <string>
#include <sstream>

#include "Stack.h"
#include "Data.h"

Data::Data(std::string line) {
    std::stringstream ss(line);
    std::string s;
    int current_field = 0;

    this->number_of_absences = 0;
    // parse the csv into the data fields
    while (getline(ss, s, ',')) { // split in the commas
        switch (current_field) {
            case 0:
                this->record_number = stoi(s);
                break;
            case 1:
                this->id = stoi(s);
                break;
            case 2:
                this->name = s;
                break;
            case 3:
                this->name += "," + s;
                break;
            case 4:
                this->email = s;
                break;
            case 5:
                this->units = s == "AU" ? -1 : stoi(s);
                break;
            case 6:
                this->program = s;
                break;
            case 7:
                this->level = s;
                break;
            default:
                break;
        }
        current_field++;
    }
    this->name.erase(0, 1); // remove the " caracter from the start and end of the name
    this->name.erase(this->name.size() - 1);
}

void Data::add_absence() {
    std::chrono::system_clock::time_point p;
    std::time_t t;
    std::string current_time;
    // get the current sys time and convert it to string
    p = std::chrono::system_clock::now();
    t = std::chrono::system_clock::to_time_t(p);
    current_time = std::ctime(&t);

    this->number_of_absences++; // increment the numeber of absences
    this->stack.push(current_time); // and add the current time to the stack
}