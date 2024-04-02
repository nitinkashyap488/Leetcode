class Solution {
    private static final int[] daysInMonth = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    public int daysBetweenDates(String date1, String date2) {
        return Math.abs(calculateDays(date1) - calculateDays(date2));
    }

    private boolean isLeapYear(int year) {
        return (year % 400 == 0 || (year % 100 != 0 && year % 4 == 0));
    }

    private int calculateDays(String date) {
        String[] parts = date.split("-");
        int year = Integer.parseInt(parts[0]);
        int month = Integer.parseInt(parts[1]);
        int day = Integer.parseInt(parts[2]);

        int days = day;

        for (int i = 1970; i < year; i++) {
            days += isLeapYear(i) ? 366 : 365;
        }

        for (int i = 0; i < month - 1; i++) {
            days += daysInMonth[i];
        }

        if (month > 2 && isLeapYear(year)) {
            days++;
        }

        return days;
    }
}