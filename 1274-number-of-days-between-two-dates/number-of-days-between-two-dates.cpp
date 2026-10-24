class Solution {
public:
    bool isLeap(int y) { 
        return (y % 4 == 0 && y % 100 != 0) || y % 400 == 0; 
    }

    int daysFrom1971(string date) {
        vector<int> days = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        int year = stoi(date.substr(0, 4));
        int month = stoi(date.substr(5, 2));
        int day = stoi(date.substr(8, 2));

        for(int yr = 1971; yr < year; yr++) day += isLeap(yr) ? 366 : 365;
        for(int i = 0; i < month - 1; i++) day += days[i];
        return day + (month > 2 && isLeap(year));
    }

    int daysBetweenDates(string date1, string date2) {
        return abs(daysFrom1971(date1) - daysFrom1971(date2));
    }
};