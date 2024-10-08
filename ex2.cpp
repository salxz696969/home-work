#include <iostream>
using namespace std;


// Function to check if a year is a leap year
bool isLeapYear(int year) {
    return (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
}

/**
 * Validate a given date
 * @param year, month, day : the date
 * @return true if the date is valid, false otherwise
 */
bool isValidDate(int year, int month, int day) {
    // TODO
    // The year shall be a positive number
    // The month shall be a number between 1 and 12
    // The day shall be a number between 1 and the max days
    int check=0;
    
    if(year>=1 && year<=2024){
        check++;
    }
    if(month > 0 && month < 13){
        check++;
    }
    switch(month){
        case 2:
            if(isLeapYear(year)){
                if(day>=1&&day<=29){
                    check++;
                }
            }else{
                if(day>=1&&day<=28){
                    check++;
                }
            }
        break;
        case 4: case 6: case 9: case 11: 
            if(day>=1&&day<=30){
                check++;
            }
        break;
        default: 
            if(day>=1&&day<=31){
                check++;
            }
        break;
    }
    if(check==3){
        return true;
    }else{
        return false;
    }
}

/**
 * Compare 2 dates (date1 and date2)
 * @param year1, month1, day1 : date 1
 * @param year2, month2, day2 : date 2
 * @return
 *      -1 if date1 < date2
 *      0 if they are the same
 *      1 if date1 > date2
 */
int compare(int year1, int month1, int day1, int year2, int month2, int day2) {
    if(year1<year2){
        return -1;
    }else if(year1>year2){
        return 1;
    }else{
        if(month1<month2){
            return -1;
        }else if(month1>month2){
            return 1;
        }else{
            if(day1<day2){
                return -1;
            }else if(day1>day2){
                return 1;
            }else{
                return 0;
            }
        }
    }
}

int main() {
    // 1- Input the dates
    int year1, month1, day1;
    int year2, month2, day2;
    while(1){
        int check=0;
        cout << "Enter the first person's date of birth (year/month/day): ";
        cin >> year1 >> month1 >> day1;

        
        cout << "Enter the second person's date of birth (year/month/day): ";
        cin >> year2 >> month2 >> day2;

        // 2- Validate the dates (BONUS)
        if(!isValidDate(year1, month1, day1)){
            cout<<"Invalid date for person 1 \n";
        }else{
            check++;
        }
        if(!isValidDate(year2, month2, day2)){
            cout<<"Invalid date for person 2\n";
        }else{
            check++;
        }
        if(check==2){
            break;
        }
    }
    // TODO

    // 3- Compare the dates
    int result=compare(year1, month1, day1, year2, month2, day2);
    if(result==1){
        cout<<"The first person is the youngest";
    }
    else if(result==-1){
        cout<<"The second person is the youngest";
    }
    else{
        cout<<"They are both the same age";
    }
    // TODO

    return 0;
}
