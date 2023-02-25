#include <vector>
using namespace std;

#ifndef IN_CLASS_LAB_FIVE
#define IN_CLASS_LAB_FIVE

struct student {
    int id;
    string name;
    int final;
    int midterm;
    vector<int> hw_grades;
    double hw_avg;
    double final_grade;
};
student get_student_struct_data();
double compute_class_score(student &student_temp);
void output_student_struct_data(const student &student_temp);
#endif