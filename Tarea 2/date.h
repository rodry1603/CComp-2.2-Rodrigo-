#include <iostream>
#include <string>
using namespace std;

class date{
private:
int month_a;
int day_a;
int year_a;

public:
date(int day, int month, int year)
: day_a{day}, month_a{month}, year_a{year}{
    if (month<1 && month>12){
        month=1;
    }
}

 void setMonth(int month){
    month_a=month;
 }

 int getMonth()const{
    return month_a;
 }

 void setDay(int day){
    day_a=day;
 }

 int getDay()const{
    return day_a;
 }

void setYear(int year){
    year_a=year;
}

int getYear()const{
    return year_a;
}

void displayDate()const{
cout<<getDay()<<"/"<<getMonth()<<"/"<<getYear();
}
};