#include <iostream>
#include <string>
using namespace std;

class NumDays
{
private:
    double workHours;
    double workDays;
public:
    NumDays()
    {
        workHours = 0;
        workDays = 0;
    }
    
    NumDays(double hours)
    {
        workHours = hours;
        workDays = hours / 8;
    }
    
    double getHours()
    {
        return workHours;
    }
    
    double getDays()
    {
        return workDays;
    }
    
    void setHours(double hours)
    {
        workHours = hours;
    }
    
    void setDays(double days)
    {
        workDays = days;
    }

    double operator + (const NumDays &right)
    {
        return workHours + right.workHours;
    }
    double operator - (const NumDays &right)
    {
        return workHours - right.workHours;
    }
    NumDays operator ++ ()
    {
        ++workHours;
        workDays = workHours / 8;
        return *this;
    }
    NumDays operator ++ (int)
    {
        NumDays temp(workHours);
        workHours++;
        workDays = (workHours + 1) / 8;
        return temp;
    }
    NumDays operator -- ()
    {
        --workHours;
        workDays = workHours / 8;
        return *this;
    }
    NumDays operator -- (int)
    {
        NumDays temp(workHours);
        workHours--;
        workDays = (workHours - 1) / 8;
        return temp;
    }
};

int main()
{
    NumDays set1 = NumDays(8);
    NumDays set2 = NumDays(12);
    NumDays set3 = NumDays(16);
    NumDays set4 = NumDays(36);
    
    cout << "Hours: " << set1.getHours() << endl;
    cout << "Days: " << set1.getDays() << endl;
    cout << endl;
    cout << "Hours: " << set2.getHours() << endl;
    cout << "Days: " << set2.getDays() << endl;
    cout << endl;
    cout << "Hours: " << set3.getHours() << endl;
    cout << "Days: " << set3.getDays() << endl;
    cout << endl;
    cout << "Hours: " << set4.getHours() << endl;
    cout << "Days: " << set4.getDays() << endl;
    
    cout << set4 + 0 << endl;
    cout << set3 - set2 << endl;
    ++set4;
    cout << "Hours: " << set4.getHours() << endl;
    cout << "Days: " << set4.getDays() << endl;
    --set4;
    cout << "Hours: " << set4.getHours() << endl;
    cout << "Days: " << set4.getDays() << endl;
    cout << ++set3 + set2-- << endl;
    cout << "Hours: " << set2.getHours() << endl;
    cout << "Days: " << set2.getDays() << endl;
    cout << "Hours: " << set3.getHours() << endl;
    cout << "Days: " << set3.getDays() << endl;
    return 0;
}
