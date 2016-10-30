#include <iostream>
#include <string>
using namespace std;

class Numbers {
private:
    int number;
    static string ones[];
    static string twentyAbove[];
    static string tenAbove[];
    static string hundreds[];
    static string thousands[];
    
public:
    Numbers();
    Numbers(int num)
    {
        setNum(num);
    };
    void setNum(int num)
    {
        number = num;
    };
    void print();
};

string Numbers::ones[] = { "one ", "two ", "three ", "four ", "five ", "six ", "seven ", "eight ", "nine " };

string Numbers::tenAbove[] = { "ten ", "eleven ", "twelve ", "thirteen ", "fourteen ", "fifteen ", "sixteen ", "seventeen ", "eighteen ", "nineteen " };

string Numbers::twentyAbove[] = { "twenty ", "thirty ", "forty ", "fifty ", "sixty ", "seventy ", "eighty ", "ninety " };

string Numbers::hundreds[] = { "one hundred ", "two hundred ", "three hundred ", "four hundred ", "five hundred ", "six hundred ", "seven hundred ", "eight hundred ", "nine hundred " };

string Numbers::thousands[] = { "one thousand ", "two thousand ", "three thousand ", "four thousand ", "five thousand ", "six thousand ", "seven thousand ", "eight thousand ", "nine thousand " };

void Numbers::print()
{
    if (number < 0)
    {
        number = -number;
    }
    
    if (number == 0)
    {
        cout << "Zero ";
    }
    
    if (number >= 1000)
    {
        cout << thousands[number / 1000];
        number %= 1000;
    }
    
    if (number >= 100)
    {
        cout << hundreds[number / 100];
        number %= 100;
    }
    
    if (number >= 20)
    {
        cout << twentyAbove[(number / 10) +1];
        number %= 10;
    }
    
    if (number >= 10 && number <= 19)
    {
        cout << tenAbove[(number % 10)];
    }
    
    if (number > 0)
    {
        cout << ones[number];
    }
    
    cout << "dollars";
}

int main()
{
    cout << " Please enter the number: ";
    
    int number;
    
    cin >> number;
    
    while (number >= 0) {
        Numbers n(number);
        n.print();
        cout << "\n Please enter another number: ";
        cin >> number;
    }
    return 0;
}
