#include <iostream>
#include <fstream>
#include "in_class_lab_five.h"
using namespace std;

student get_student_struct_data() {
    student student_temp;
    cout << "Enter the students id: ";
    cin >> student_temp.id;

    cout << "Enter the students name: ";
    cin >> student_temp.name;

    cout << "Enter the students midterm exam grade: ";
    cin >> student_temp.midterm;

    cout << "Enter the students final exam grade: ";
    cin >> student_temp.final;

    int score;
    cout << "Enter a homework score (^D to exit): " <<endl;
    while (cin >> score) {
        cout << "Enter a homework score (^D to exit): " <<endl;
        student_temp.hw_grades.push_back(score);
    }
    return student_temp;
}

double compute_class_score(student &student_temp) {
    double final_total_score{0.0}, sum{0.0}, hw_avg{0.0};
    for (auto i : student_temp.hw_grades) {
        sum += i;
    }

    hw_avg = sum/student_temp.hw_grades.size();
    student_temp.hw_avg = hw_avg;
    final_total_score = (0.3*student_temp.midterm) + (0.3*student_temp.final) + (0.4*hw_avg);
    student_temp.final_grade = final_total_score;
    return final_total_score;
}

void output_student_struct_data(const student &student_temp) {
    cout << student_temp.name << " (ID: " << student_temp.id << ") earned a final grade of " << student_temp.final_grade <<endl;
    cout << "Homework average was " << student_temp.hw_avg << endl;
    cout << "Midterm exam grade was " << student_temp.midterm <<endl;
    cout << "Final exam grade was " << student_temp.final <<endl;
}