#include <stdio.h>

int main() {
    float marks[5], total = 0.0, average;
    char grade;

    printf("📘 Enter marks for 5 subjects (out of 100):\n");
    for (int i = 0; i < 5; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%f", &marks[i]);
        total += marks[i];
    }

    average = total / 5;

    if (average >= 90)
        grade = 'A';
    else if (average >= 75)
        grade = 'B';
    else if (average >= 60)
        grade = 'C';
    else if (average >= 40)
        grade = 'D';
    else
        grade = 'F';

    printf("\n📊 Total Marks = %.2f/500\n", total);
    printf("📈 Average = %.2f\n", average);
    printf("🎓 Grade = %c\n", grade);

    return 0;
}
