#include <iostream>
#include <string>
using namespace std;

class DayOfYear
{
private:
    int day;
public:
    DayOfYear(int day1)
    {
        day = day1;
    }
    static const int monthDay[];
    static const string monthName[];
    void print(int num);
};

void DayOfYear::print(int day)
{
    int month = 0;
    while (DayOfYear::monthDay[month] < day)
    {
        month = (month + 1) %12;
        cout << DayOfYear::monthName[month] << " " << day - DayOfYear::monthDay[month-1];
    }
}

const int DayOfYear::monthDay[]={31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334, 365};
const string DayOfYear::monthName[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

int main()
{
    int day;
    
    cout << "Enter a number of day in a year: " << endl;
    cin >> day;
    
    if(day < 0 || day > 365)
    {
        cout << "Invalid!" << endl;
    }
    
    DayOfYear input;
    input.setDay(day);
    input.print();
    
    
    return 0;
}
