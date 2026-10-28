#include <stdio.h>
int main() {
    int numapplicants, i;
    float gwa, totalGWA = 0, averageGWA;
    int qualifiedCount = 0;

    printf("Enter number of application: ");
    scanf("%d", &numapplicants);

    for (i = 1; i <= numapplicants; i++) {

        // Validation: GWA must be 1.00 to 5.00 only
        do {
            printf("Enter GWA of applicant %d (1.00 - 5.00): ", i);
            scanf("%f", &gwa);
            if (gwa < 1.00 || gwa > 5.00) {
                printf("Invalid! Please enter betwwen 1.00 to 5.00 only. \n");

            }
        } while (gwa < 1.00 || gwa > 5.00);

        totalGWA = totalGWA + gwa;

        // In the Philippine grading, 1.00 is highest, so <= 1.75 is qualified
        if (gwa <= 1.75) {
            printf("Applicant %d: GWA = %.2f - QUALIFIED\n", i, gwa);
            qualifiedCount++;

        } else {
            printf("Applicant %d: GWA = %.2f - NOT QUALIFIED\n", i, gwa);
        }
    }

    averageGWA = totalGWA / numapplicants;


    printf("\n--- SUMMARY ---\n");
    printf("Total Qualified Applicants: %d out of %d\n", qualifiedCount, numapplicants);
    printf("Average GWA : %.2f\n", averageGWA);


    return 0;
}