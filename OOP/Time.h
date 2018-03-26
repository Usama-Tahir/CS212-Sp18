//
// Created by usama on 2/26/18.
//

#ifndef OOP_TIME_H
#define OOP_TIME_H


class Time {
private:
    unsigned int hours;
    unsigned int minutes;
    unsigned int seconds;
    bool am;
public:
    Time();
    Time(unsigned, unsigned, unsigned, bool);
    void incrementHours();
    void incrementMinutes();
    void incrementSeconds();
    void displayTime();
    void resetTime();
};


#endif //OOP_TIME_H
