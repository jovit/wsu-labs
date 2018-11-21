#ifndef STUDENTS_CONTROL_MENU_H
#define STUDENTS_CONTROL_MENU_H
#include "List.h"
#include "Data.h"

class Menu {
public:
    bool read_option();
private:
    List<Data> master;
    void show_menu();
    void import_course_list();
    void mark_absences();
};


#endif //STUDENTS_CONTROL_MENU_H
