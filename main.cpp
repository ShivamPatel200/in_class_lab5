#include <iostream>
#include "in_class_lab_five.h"
using namespace std;

int main() {
    student student1 = get_student_struct_data();
    compute_class_score(student1);
    output_student_struct_data(student1);    
    return 0;
}