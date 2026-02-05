#include <iostream>
#include <string>
#include <vector>

using namespace std;

class School {
    public:
        int number_of_groups;
        
    private:
        void update_students();
        void update_schedule();

};

class Groups : School {
    public:
        string group_name;
        int student_count;
        string specialisation;
    
    private:
        void assign_group();
        void add_student();
        void update_group();
};

class Lessons : Groups {
    public:
        string lesson_name;
        string lesson_time;
        string homework;
        string theme;
        int lesson_number;
    private:
        void update_lessons();
        void add_lesson();
};

class Entity {
    public:
        string name;
        int id;
        
};

class Student : Entity {
    public:
        string address;
        string birthdate;
        string specialisation;
};

class Teacher : Entity {
    public:
        string address;
        string birthdate;
        string education;
        int salary;
};