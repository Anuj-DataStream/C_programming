// write a program to determine whether a student has passed or failed. to pass,a student required to a total of 40% and at least 33% in each subject. Assume there are three subjects and take the marks as input from the user.

#include <stdio.h>
int main() {
    float subject1, subject2, subject3;
    printf("Enter marks for subject 1: ");
    scanf("%f", &subject1);
    printf("Enter marks for subject 2: ");
    scanf("%f", &subject2);
    printf("Enter marks for subject 3: ");
    scanf("%f", &subject3);

    float total = subject1 + subject2 + subject3;
    float percentage = (total / 300) * 100; // Assuming each subject is out of 100 marks
    if (percentage >= 40 ){
        if(subject1 <= 33)
        printf("you are failed in subject 1\n you have only %f marks in subject 1\n", subject1);
        else if(subject2 <= 33)
        printf("you are failed in subject 2\n you have only %f marks in subject 2\n", subject2);
        else if(subject3 <= 33)
        printf("you are failed in subject 3\n you have only %f marks in subject 3\n", subject3);
        else
        printf("You have passed. Your total percentage is %f\n", percentage);
    }

    else {
        printf("You have failed. Your total percentage is %f\n", percentage);
    }
    return 0;
}