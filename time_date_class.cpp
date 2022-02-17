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
    void sleepTime(int h, int m, int s);
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
void Time::sleepTime(int h, int m, int s)
{
    cout << "\nsleep time is: " << h - hour << ":" << m - minute << ":" << s - secs << "\n";
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
    // time1.setTime();
    time1.getTime();
    time1.sleepTime(21, 0, 0);

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