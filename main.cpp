#include <iostream>

using namespace std;

#define WEEKDAY_STR_1 "Monday"
#define WEEKDAY_STR_2 "Tuesday"
#define WEEKDAY_STR_3 "Wednesday"
#define WEEKDAY_STR_4 "Thursday"
#define WEEKDAY_STR_5 "Friday"
#define WEEKDAY_STR_6 "Saturday"
#define WEEKDAY_STR_7 "Sunday"
#define STR_CONCAT(x, y) x ## y
#define WEEKDAY_TO_STR(x) cout << STR_CONCAT(WEEKDAY_STR_, x)

int main() {
    int day;
    cout << "Enter the number day of week: ";
    cin >> day;

    switch (day) {
        case 1:
            WEEKDAY_TO_STR(1);
            break;
        case 2:
            WEEKDAY_TO_STR(2);
            break;
        case 3:
            WEEKDAY_TO_STR(3);
            break;
        case 4:
            WEEKDAY_TO_STR(4);
            break;
        case 5:
            WEEKDAY_TO_STR(5);
            break;
        case 6:
            WEEKDAY_TO_STR(6);
            break;
        case 7:
            WEEKDAY_TO_STR(7);
            break;
    }
    return 0;
}
