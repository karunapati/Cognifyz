#include <iostream>

int main()
{
    int numSubjects;
    double totalGrade = 0.0;

    std::cout << "Enter the number of subjects: ";
    std::cin >> numSubjects;
    if (numSubjects <= 0)
    {
        std::cout << "Invalid number of subjects. It should be greater than zero." << std::endl;
        return 1;
    }
    for (int i = 1; i <= numSubjects; ++i)
    {
        double grade;
        std::cout << "Enter the grade for subject " << i << ": ";
        std::cin >> grade;

        if (grade < 0 || grade > 100)
        {
            std::cout << "Invalid grade. Grade should be between 0 and 100." << std::endl;
            return 1;
        }

        totalGrade += grade;
    }

    double averageGrade = totalGrade / numSubjects;
    std::cout << "The average grade is: " << averageGrade << std::endl;

    return 0;
}
