#include <iostream>
#include <iomanip>
#include <string>
#include <vector>

#define DECIMAL_DIGIT 2

struct Student {
    int id;
    std::string name;
    std::vector<int> scores;
};

std::vector<Student> students  = {
    {1, "Alice", {85, 92, 78, 94, 88}},
    {2, "Bob", {76, 81, 72, 85, 79}},
    {3, "Charlie", {93, 89, 84, 91, 95}},
    {4, "David", {65, 70, 75, 60, 80}},
    {5, "Eve", {54, 68, 72, 77, 65}}
};

/**
 * Calculate the average score of the given student
 * @param Student : the student
 * @return the average of students scores
 */
float calculateAverage(Student student) {
    
    // TODO
    float average= (student.scores[0]+student.scores[1]+student.scores[2]+student.scores[3]+student.scores[4])/5;
    

    return average;    // To change
}

/**
 * Calculate GPA based on average score
 * @param Student : the student
 * @return the average of students scores
 */
float calculateGPA(Student student) {

    // TODO
    float gpa=calculateAverage(student);
    if(gpa>=90 && gpa<=100){
        return 4.00;
    }
    if(gpa>=80 && gpa<90){
        return 3.00;
    }
    if(gpa>=70 && gpa<80){
        return 2.00;
    }
    if(gpa>=60 && gpa<70){
        return 1.00;
    }else{
        return 0.00;
    }
}


/**
 * Calculate letter grade based on GPA
 * @param Student : the student
 * @return the average of students scores
 */
std::string calculatGrade(Student student) {

    // TODO
    int grade=calculateGPA(student);
    switch(grade){
        case 1:
            return "D";
            break;
        case 2:
            return "C";
            break;
        case 3:
            return "B";
            break;
        case 4:
            return "A";
            break;
        default:
            return "E";
            break;
    }
}


/**
 * Compute and print students statistic (average, GPA, grade letter) on console
 * @param Student : the student
 */
void printStudentStatistics(const Student& student) {
        float average = calculateAverage(student);
        float gpa = calculateGPA(student);
        std::string grade = calculatGrade(student);

        std::cout << "| " << std::setw(10) << student.id << " | "
                  << std::setw(10) << student.name << " | "
                  << std::setw(14) << average << " | "
                  << std::setw(4) << gpa << " | "
                  << std::setw(5) << grade << " |\n";
}


int main() {
    std::cout << std::fixed << std::setprecision(DECIMAL_DIGIT); // Set decimal precision for average and GPA
    std::cout << "------------------------------------------------------------\n";
    std::cout << "| Student ID | Name      | Average Score |  GPA | Grade |\n";
    std::cout << "------------------------------------------------------------\n";
    for (const auto& student : students) {
        printStudentStatistics(student);
    }

    // Call the function printStudentStatistics for each student
    // TODO
 
    std::cout << "------------------------------------------------------------\n";
    
    return 0;
}