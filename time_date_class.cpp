#include <iostream>
#include <ctime>

using namespace std;

class Time
{
private:
    int hour, minute, secs;
    void setTime();

public:
    void getTime();
    Time sleepTime(Time t1, Time t2);
};

class Date
{
private:
    int day, month, year;
    void setDate();

public:
    int bd = 0;
    int bm = 0;
    int by = 0;
    void getDate();
    void setDoB(int d, int mo, int y);
    void findAge(int current);
};

// time functions
void Time::setTime()
{
    time_t now = time(0);
    tm *ltm = localtime(&now);
    hour = ltm->tm_hour;
    minute = ltm->tm_min;
    secs = ltm->tm_sec;
}
void Time::getTime()
{
    setTime();
    cout << "\ncurrent time is: " << hour << ":" << minute << ":" << secs << "\n";
}
Time Time::sleepTime(Time t1, Time t2)
{
    Time t3;
    t3.hour = t2.hour-t1.hour;
    t3.minute = t2.minute-t1.minute;
    t3.secs = t2.secs-t1.secs;
    return t3;
}

// date functions
void Date::setDate()
{
    time_t now = time(0);
    tm *ltm = localtime(&now);
    day = ltm->tm_mday;
    month = ltm->tm_mon;
    year = 1900 + ltm->tm_year;
}
void Date::getDate()
{
    setDate();
    cout << "\ncurrent date is: " << day << "-" << month << "-" << year << "\n";
}
void Date::setDoB(int d, int mo, int y)
{
    bd = d;
    bm = mo;
    by = y;
    cout << "\nbirth date is: " << bd << "-" << bm << "-" << by << "\n";
}
void Date::findAge(int current)
{
    cout << "\ncurrent age is: " << year - current << "\n";
}

int main()
{

    // get current time
    Time time1;
    Time time2;
    Time time3;
    Time time4;
    // time1.setTime();
    time1.getTime();
    cout << "sleeptime called" << endl;
    time3 = time3.sleepTime(time1, time2);
    time3.getTime();

    Date date1;
    // date1.setDate();
    date1.getDate();
    date1.setDoB(11, 11, 1000);
    date1.getDate();
    date1.findAge(2000);

    // cout << "Year:" << 1900 + ltm->tm_year<<endl;
    // cout << "Month: "<< 1 + ltm->tm_mon<< endl;
    // cout << "Day: "<< ltm->tm_mday << endl;

    // cout << "Hour: "<< ltm->tm_hour;
    // cout << "\nMinutes: " << ltm->tm_min;
    // cout << "\nSeconds " << ltm->tm_sec;

    return 0;
}