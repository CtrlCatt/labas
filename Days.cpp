#include <iostream>
#include "header.h"

bool days(std::string day, int number)
{
    if ((day == "Monday") && (number == 12))
        return 0;
    if ((day == "Tuesday") && (number > 95))
        return 0;
    if ((day == "Wednesday") && (number == 34))
        return 0;
    if ((day == "Thursday") && (number == 0))
        return 0;
    if ((day == "Friday") && ((number % 2) == 0))
        return 0;
    if ((day == "Saturday") && (number == 56))
        return 0;
    if ((day == "Sunday") && ((number == 666) || (number == -666)))
        return 0;
        
    return 1;
}