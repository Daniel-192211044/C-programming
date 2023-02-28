#include <stdio.h>

int main() {
    int num_as = 0, num_bs = 0, num_cs = 0, num_ds = 0, num_fs = 0;
    int student_num, grade;

    for (int i = 1; i <= 10; i++) {
        printf("Enter student number and grade (separated by a space) for student %d: ", i);
        scanf("%d %d", &student_num, &grade);
        char letter_grade;
        if (grade >= 90) {
            letter_grade = 'A';
            num_as++;
        } else if (grade >= 78) {
            letter_grade = 'B';
            num_bs++;
        } else if (grade >= 65) {
            letter_grade = 'C';
            num_cs++;
        } else if (grade >= 50) {
            letter_grade = 'D';
            num_ds++;
        } else {
            letter_grade = 'F';
            num_fs++;
        }
        printf("Student number: %d\n", student_num);
        printf("Number grade: %d\n", grade);
        printf("Letter grade: %c\n", letter_grade);
    }
    printf("Grade distribution:\n");
    printf("A: %d\n", num_as);
    printf("B: %d\n", num_bs);
    printf("C: %d\n", num_cs);
    printf("D: %d\n", num_ds);
    printf("F: %d\n", num_fs);

    return 0;
}

