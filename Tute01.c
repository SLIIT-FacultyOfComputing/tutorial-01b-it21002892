/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
    int subjects, i;  
    float marks, total=0.0f, averageMarks;
   
    printf("Enter number of subjects\n");  
    scanf("%d", &subjects);  
   
    printf("Enter marks of subjects\n");  
    for(i = 0; i < subjects; i++){
     scanf("%f", &marks);
     total += marks; 
    }  
    averageMarks = total / subjects;
    
   
    printf("Total Marks of %d Subjects = %0.2f\n",subjects,total);  
    printf("Average Marks = %.2f\n", averageMarks);  
     
    return 0;  
} 


