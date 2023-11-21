#include <stdio.h>

int main() {
    int numSubjects, i;
    float totalGPA = 0.0, averageGPA;

    printf("Enter the number of subjects: ");
    scanf("%d", &numSubjects);

    float GPA[numSubjects];

    printf("Enter the GPA of each course:\n");
    for (i = 0; i < numSubjects; i++) {
        printf("Subject %d GPA: ", i + 1);
        scanf("%f", &GPA[i]);
        totalGPA += GPA[i];
    }

    averageGPA = totalGPA / numSubjects;
    printf("The average GPA is: %.2f\n", averageGPA);

    return 0;
}
