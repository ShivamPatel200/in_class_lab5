#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <iostream>
#include <sstream>
#include "in_class_lab_five.h"
#include "doctest.h"
using namespace std;

TEST_CASE("Testing my student struct functions") {
    SUBCASE("student 1"){
        istringstream input("1001\nShivam\n100\n100\n100\n100\n100\n");
        cin.rdbuf(input.rdbuf());
        student student1 = get_student_struct_data();
        // I will be testing the output function a bit different, I will not call it instead test each output that is expected from that function
        CHECK(student1.id == 1001);
        CHECK(student1.name == "Shivam");
        CHECK(student1.midterm == 100);
        CHECK(student1.final == 100);
        double temp1 = compute_class_score(student1);
        CHECK(temp1 == 100);
        CHECK(student1.final_grade == 100);
        CHECK(student1.hw_avg == 100);
    }
    SUBCASE("student 2"){
        istringstream input("1002\nBob\n0\n0\n0\n0\n0\n");
        cin.rdbuf(input.rdbuf());
        student student1 = get_student_struct_data();
        // I will be testing the output function a bit different, I will not call it instead test each output that is expected from that function
        CHECK(student1.id == 1002);
        CHECK(student1.name == "Bob");
        CHECK(student1.midterm == 0);
        CHECK(student1.final == 0);
        double temp1 = compute_class_score(student1);
        CHECK(temp1 == 0);
        CHECK(student1.final_grade == 0);
        CHECK(student1.hw_avg == 0);
    }
    SUBCASE("student 3"){
        istringstream input("1003\nSpongebob\n90\n60\n10\n20\n30\n");
        cin.rdbuf(input.rdbuf());
        student student1 = get_student_struct_data();
        // I will be testing the output function a bit different, I will not call it instead test each output that is expected from that function
        CHECK(student1.id == 1003);
        CHECK(student1.name == "Spongebob");
        CHECK(student1.midterm == 90);
        CHECK(student1.final == 60);
        double temp1 = compute_class_score(student1);
        CHECK(temp1 == 53);
        CHECK(student1.final_grade == 53);
        CHECK(student1.hw_avg == 20);
    }
    SUBCASE("student 4"){
        istringstream input("1004\nPatrick\n90\n90\n90\n90\n");
        cin.rdbuf(input.rdbuf());
        student student1 = get_student_struct_data();
        // I will be testing the output function a bit different, I will not call it instead test each output that is expected from that function
        CHECK(student1.id == 1004);
        CHECK(student1.name == "Patrick");
        CHECK(student1.midterm == 90);
        CHECK(student1.final == 90);
        double temp1 = compute_class_score(student1);
        CHECK(temp1 == 90);
        CHECK(student1.final_grade == 90);
        CHECK(student1.hw_avg == 90);
    }
}