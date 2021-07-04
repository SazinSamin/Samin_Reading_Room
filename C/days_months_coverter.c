#include<stdio.h>

static char array[2][13] = {
    {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
    {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}};

int day_to_month(int year, int yeardays, int *months, int *days);
int month_to_days(int year, int month);


int main(){
        int month = 0, days= 0;

        printf("\nConvert months and days from days: ");
        day_to_month(2012, 55, &month, &days);
        printf("\nMonths: %d, days: %d", month, days);

        printf("\nCovert days from month: ");
        printf("\nDays: %d", month_to_days(2012, 4));
}

int month_to_days(int year, int month){
        int leap = year % 4 == 0 && year % 100 != 0 || year % 400 == 0;
        int days = 0;

        for (int i = 1; i <= month; i++){
                days += array[leap][i];
        }
        return days;
}

int day_to_month(int year, int yeardays, int *months, int *days){
        int leap = ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0);

        for (int i = 1; yeardays > array[leap][i]; i++){
                yeardays -= array[leap][i];
                (*months)++;
        }
        *days = yeardays;
}
