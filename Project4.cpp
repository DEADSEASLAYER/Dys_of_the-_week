#include <iostream>
#include <string>

int main()
{
    int year, month, day;

    std::cout << "Enter year (e.g., 2012): ";
    std::cin >> year;
    std::cout << "Enter month (1-12): ";
    std::cin >> month;
    std::cout << "Enter the day of the month (1-31): ";
    std::cin >> day;

    int m = month;
    int q = day;

    if (month == 1 || month == 2){
        month += 12;
        year -=1;
    }
     
    int j = year / 100;
    int k = year % 100;

    int h = (day + (13 * (month + 1)) / 5 + k + k / 4 + j / 4 + 5 * j) % 7;

    std::string dayOfWeek;
    switch (h) {
        case 0: dayOfWeek = "Saturday"; break;
        case 1: dayOfWeek = "Sunday"; break;
        case 2: dayOfWeek = "Monday"; break;
        case 3: dayOfWeek = "Tuesday"; break;
        case 4: dayOfWeek = "Wednesday"; break;
        case 5: dayOfWeek = "Thursday"; break;
        case 6: dayOfWeek = "Friday"; break;
    }

    std::cout << "Day of the week is: " << dayOfWeek << std::endl;

    return 0;
}