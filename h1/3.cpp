#include <iostream>
using namespace std;

int main() {

    int firstTime;
    int secondTime;

    cout << "Please enter the first time: " << flush;
    cin >> firstTime;
    cout << "Please enter the second time: " << flush;
    cin >> secondTime;

    int time1InMinutes;
    int time2InMinutes;

    int MinutesInADay;
    MinutesInADay = (24*60);

    time1InMinutes = ((floor(firstTime/100))*60) + (firstTime % 100);
    time2InMinutes = ((floor(secondTime/100))*60) + (secondTime % 100);
    int time1Diff;

    time1Diff = time1InMinutes - MinutesInADay;
    int differenceInTimes = (time2InMinutes - time1InMinutes);

    differenceInTimes = differenceInTimes + 1440;
    differenceInTimes = differenceInTimes % 1440;

    int hoursApart = floor(differenceInTimes/60);
    int minutesApart = (differenceInTimes % 60);

    cout << hoursApart << " hours " << minutesApart << " minutes" << endl;
}
