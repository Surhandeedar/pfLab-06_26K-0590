#include <stdio.h>

int main() {
    int totalStudents;
    int i;

    printf("Enter number of students in class: ");
    scanf("%d", &totalStudents);

    for(i = 0; i < totalStudents; i++) {
        float mark1, mark2, mark3;
        
        printf("\nStudent %d:\n", i + 1);
        printf("Enter mark for Subject 1: ");
        scanf("%f", &mark1);
        printf("Enter mark for Subject 2: ");
        scanf("%f", &mark2);
        printf("Enter mark for Subject 3: ");
        scanf("%f", &mark3);

        float average = (mark1 + mark2 + mark3) / 3.0f;
        char grade;

        switch ((int)average / 10) {
            case 10:
            case 9:
                grade = 'A';
                break;
            case 8:
                grade = 'B';
                break;
            case 7:
                grade = 'C';
                break;
            case 6:
                grade = 'D';
                break;
            default:
                grade = 'F';
                break;
        }

        char *status = (average >= 60.0f && mark1 >= 40.0f && mark2 >= 40.0f && mark3 >= 40.0f) ? "Passed" : "Failed";

        printf("Average: %.2f\n", average);
        printf("Grade: %c\n", grade);
        printf("Status: %s\n", status);
    }

    return 0;
}
