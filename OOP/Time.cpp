//
// Created by usama on 2/26/18.
//

#include "Time.h"
#include <iostream>
using namespace std;

Time::Time() {
    hours = 1;
    minutes = 1;
    seconds = 1;
    am = true;
}
Time::Time(unsigned h, unsigned m, unsigned s, bool is) {
    if (h>=0 && h<12)  hours = h;
    else hours = 1;
    if (m>=0 && m<=60) minutes = m;
    else minutes = 1;
    if(s>=0 && s<=60) seconds = s;
    else seconds = 1;
    am = is;
}

void Time::incrementHours() {
    if (hours == 11)
    {
        hours = 0;
        if(am == false) am = true;
        else am = false;
    } else hours+=1;
}
void Time::incrementMinutes() {
    if (minutes == 59)
    {
        hours+=1;
        minutes = 0;
    } else minutes+=1;
}

void Time::incrementSeconds() {
    if(seconds == 59)
    {
        minutes+=1;
        seconds=0;
    } else seconds++;
}
void Time::displayTime() {
    string temp;
    if (am) temp = "AM";
    else temp = "PM";
    cout<< "Current Time is:"<<hours<<":"<<minutes<<":"<<seconds<<":"<<temp<<endl;
}
void Time::resetTime() {
    hours = 0;
    minutes = 0;
    seconds = 0;
}