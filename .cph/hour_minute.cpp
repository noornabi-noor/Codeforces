#include <bits/stdc++.h>
using namespace std;

class Time
{

private:
    int hour;

    int minute;

public:
    void insert(void);

    void sum(Time m1, Time m2);

    void display(void);
};

void Time::insert(void)
{
    cout << "Enter hour and minute: ";
    cin >> hour >> minute;
}

void Time::sum(Time m1, Time m2)
{
    minute = (m1.hour * 60) + (m2.hour * 60) + m1.minute + m2.minute;
    hour = (minute / 60);

    minute = minute - (hour * 60);
}
void Time::display(void)
{
    cout << "The final time is: " << hour << " hour " << minute << " minute " << endl;
}
int main()
{
    Time m1, m2, m3;
    m1.insert();
    m2.insert();
    m3.sum(m1, m2);
    m3.display();
    return 0;
}
