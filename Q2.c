// WAP that accepts the marks of 5 subjects and finds the sum and percentage marks obtained  by the student.

#include <stdio.h>
int main(){
    int marks[5], sum = 0;
    float percentage;
    
    // Accepting marks for 5 subjects
    printf("Enter marks for 5 subjects:\n");
    for(int i = 0; i < 5; i++){
        printf("Subject %d: ", i + 1);
        scanf("%d", &marks[i]);
        sum += marks[i];
    }
    
    // Calculating percentage
    percentage = (sum / 500.0) * 100; // Assuming each subject is out of 100
    
    // Displaying results
    printf("Total Marks: %d\n", sum);
    printf("Percentage: %.2f%%\n", percentage);
    
    return 0;
}