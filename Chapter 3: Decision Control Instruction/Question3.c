/*According to the Gregorian calendar, it was Monday on the date 01/01/1900. If any year is 
input through the keyboard write a program to find out what is the day on 1st January of this
year.*/

#include<stdio.h>

int main(){
    int difference_years, total_days = 0, leap_years = 0, ref_days = 0, reference_year = 1900;
    int entered_year = 1965;
    /* logic Of Program
    -----------------------
    Step 1: Finding the difference between entered year and reference year.
    Step 2: Checking for all the leap years.
    Step 3: Calculate the exact number of days between user entered year and reference year.
            [Total Days = (Difference_Years - Leap_Years)*365 + Leap_Years*366]
    Step 4: Dividing Total_Days/7 --> storing remainder in a variable.
    */
   difference_years = entered_year - reference_year;
   while (entered_year>reference_year)
   {
    if(entered_year%4==0){
        if (entered_year%100==0){
            if(entered_year%400==0){
                leap_years++;
            }
        }else{
            leap_years++;
            }
        }reference_year++;
   }total_days = (difference_years-leap_years)*365 + leap_years*366;
   ref_days = total_days%7;
   /*
   As mentioned 01/01/1900 -->> Monday, First day is monday so we can take Monday as reference
   as a first day.
   0 --> Monday
   1 --> Tuesday
   2 --> Wednesday
   3 --> Thursday
   4 --> Friday
   5 --> Saturday
   6 --> Sunday
   */
  if(ref_days==0){
    printf("01/01/%d : Monday\n", entered_year);
  }else if(ref_days==1){
    printf("01/01/%d : Tuesday\n", entered_year);
  }else if(ref_days==2){
    printf("01/01/%d : Wednesday\n", entered_year);
  }else if(ref_days==3){
    printf("01/01/%d : Thursday\n", entered_year);
  }else if(ref_days==4){
    printf("01/01/%d : Friday\n", entered_year);
  }else if(ref_days==5){
    printf("01/01/%d : Saturday\n", entered_year);
  }else if(ref_days==6){
    printf("01/01/%d : Sunday\n", entered_year);
  }
    return 0;
}