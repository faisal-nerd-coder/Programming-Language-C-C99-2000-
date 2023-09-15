/* Write a program to calculate overtime pay of 10 employees. Overtime is paid at the rate of Rs. 12.00 
per hour for every hour worked above 40 hours. Assume that employees do not work for fractional part 
of an hour. */

#include<stdio.h>

int main(){
    int overtime_pay = 12, min_working_hours = 40, nos_employee = 10, total_overtime_hours, 
        counter = 0, total_overtime_pay = 0, total_working_hours = 0;
    while (counter<nos_employee){   
        printf("Enter the total working hours for employee %d: ", counter+1);
        scanf("%d", &total_working_hours);
        if (total_working_hours>min_working_hours){ // checking if the employye is eligible for the overtime pay
            // Calculation of over time hours worked and the pay
            total_overtime_hours = total_working_hours - min_working_hours;
            total_overtime_pay = overtime_pay*total_overtime_hours;
            printf("Employee %d eligible for overtime pay, \nOvertime hours: %d\nOvertime Pay: %d\n",
             counter+1, total_overtime_hours, total_overtime_pay);
             counter++;
        }else{
            printf("Employee %d not eligible for overtime pay!!\n", counter+1);
            counter++;
        }
    }
    return 0;
}