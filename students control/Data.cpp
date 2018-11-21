#include <string>
#include <sstream>

#include "Stack.h"
#include "Data.h"

Data::Data(std::string line) {
    std::stringstream ss(line);
    std::string s;
    int current_field = 0;

    while (getline(ss, s, ',')) {
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
    this->name.erase(0, 1);
    this->name.erase(this->name.size() - 1);
}