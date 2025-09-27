#include <stdio.h>

int main() {
    int courseNumber;
    char courseGrade;
    
    printf("Enter your course number (1, 2, or 3): \n");
    scanf("%d", &courseNumber);
    
    switch (courseNumber) {
        case 1:
            printf("Enter your grade\nA\nB\nC\nD\nF\n");
            scanf(" %c", &courseGrade);
            switch (courseGrade) {
                case 'A':
                    printf("Excellent performance in course %d", courseNumber);
                    break;
                case 'B':
                    printf("You have good performance in the course %d", courseNumber);
                    break;
                case 'C':
                    printf("You have average performance in the course %d", courseNumber);
                    break;
                case 'D':
                    printf("You need improvement in the course %d", courseNumber);
                    break;
                case 'F':
                    printf("You have failed this course %d", courseNumber);
                    break;
                default:
                    printf("Invalid grade");
                    break;
            }
            break;

        case 2:
            printf("Enter your grade\nA\nB\nC\nD\nF\n");
            scanf(" %c", &courseGrade);
            switch (courseGrade) {
                case 'A':
                    printf("Excellent performance in course %d", courseNumber);
                    break;
                case 'B':
                    printf("You have good performance in the course %d", courseNumber);
                    break;
                case 'C':
                    printf("You have average performance in the course %d", courseNumber);
                    break;
                case 'D':
                    printf("You need improvement in the course %d", courseNumber);
                    break;
                case 'F':
                    printf("You have failed this course %d", courseNumber);
                    break;
                default:
                    printf("Invalid grade");
                    break;
            }
            break;

        case 3:
            printf("Enter your grade\nA\nB\nC\nD\nF\n");
            scanf(" %c", &courseGrade);
            switch (courseGrade) {
                case 'A':
                    printf("Excellent performance in course %d", courseNumber);
                    break;
                case 'B':
                    printf("You have good performance in the course %d", courseNumber);
                    break;
                case 'C':
                    printf("You have average performance in the course %d", courseNumber);
                    break;
                case 'D':
                    printf("You need improvement in the course %d", courseNumber);
                    break;
                case 'F':
                    printf("You have failed this course %d", courseNumber);
                    break;
                default:
                    printf("Invalid grade");
                    break;
            }
            break;

        default:
            printf("Invalid course number");
            break;
    }

    return 0;
}

