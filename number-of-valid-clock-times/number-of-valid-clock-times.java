class Solution {
    public int countTime(String time) {
        int hourPossibilities = 0;
        int minutePossibilities = 0;

        if (time.charAt(0) == '?' && time.charAt(1) == '?') {
            hourPossibilities = 24;
        } else if (time.charAt(0) == '?') {
            if (time.charAt(1) >= '0' && time.charAt(1) <= '3') {
                hourPossibilities = 3;
            } else {
                hourPossibilities = 2;
            }
        } else if (time.charAt(1) == '?') {
            if (time.charAt(0) == '2') {
                hourPossibilities = 4;
            } else {
                hourPossibilities = 10;
            }
        } else {
            hourPossibilities = 1;
        }

        if (time.charAt(3) == '?' && time.charAt(4) == '?') {
            minutePossibilities = 60;
        } else if (time.charAt(3) == '?') {
            minutePossibilities = 6;
        } else if (time.charAt(4) == '?') {
            minutePossibilities = 10;
        } else {
            minutePossibilities = 1;
        }

        return hourPossibilities * minutePossibilities;
    }
}