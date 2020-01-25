#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream dienain;
    ofstream dienaout;
    int dayNumber;
    int month;

    dienain.open("diena.in");
    dienaout.open("diena.out");

    dienain >> dayNumber;

    if(dayNumber <= 31) {
        month = 1;
        dienaout << dayNumber << " " << month;
    }
    if((dayNumber >= 31) && (dayNumber <= 59)) {
        month = 2;
        dayNumber = dayNumber - 31;
        dienaout << dayNumber << " " << month;
    }
    if((dayNumber >= 59) && (dayNumber <= 90)) {
        month = 3;
        dayNumber = dayNumber - (31 + 28);
        dienaout << dayNumber << " " << month;
    }
    if((dayNumber >= 90) && (dayNumber <= 120)) {
        month = 4;
        dayNumber = dayNumber - (31 + 28 + 30);
        dienaout << dayNumber << " " << month;
    }
    if((dayNumber >= 120) && (dayNumber <= 151)) {
        month = 5;
        dayNumber = dayNumber - (31 + 28 + 30 + 31);
        dienaout << dayNumber << " " << month;
    }
    if((dayNumber >= 151) && (dayNumber <= 181)) {
        month = 6;
        dayNumber = dayNumber - (31 + 28 + 30 + 31 + 30);
        dienaout << dayNumber << " " << month;
    }
    if((dayNumber >= 181) && (dayNumber <= 212)) {
        month = 7;
        dayNumber = dayNumber - (31 + 28 + 30 + 31 + 30 + 31);
        dienaout << dayNumber << " " << month;
    }
    if((dayNumber >= 212) && (dayNumber <= 243)) {
        month = 8;
        dayNumber = dayNumber - (31 + 28 + 30 + 31 + 30 + 31 + 31);
        dienaout << dayNumber << " " << month;
    }
    if((dayNumber >= 243) && (dayNumber <= 273)) {
        month = 9;
        dayNumber = dayNumber-(31 + 28 + 30 + 31 + 30 + 31 + 31 + 30);
        dienaout << dayNumber << " " << month;
    }
    if((dayNumber >= 273) && (dayNumber <= 304)) {
        month = 10;
        dayNumber = dayNumber - (31 + 28 + 30 + 31 + 30 + 31 + 31 + 30 + 31);
        dienaout << dayNumber << " " << month;
    }
    if((dayNumber >= 304) && (dayNumber <= 334)) {
        month = 11;
        dayNumber = dayNumber - (31 + 28 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30);
        dienaout << dayNumber << " " << month;
    }
    if((dayNumber >= 334) && (dayNumber <= 365)) {
        month = 12;
        dayNumber = dayNumber - (31 + 28 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 + 31);
        dienaout << dayNumber << " " << month;
    }


    dienain.close();
    dienaout.close();


    return 0;
}
