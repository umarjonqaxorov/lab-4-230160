//
// Created by ...
//
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include
<string>
using namespace std;
int main() {
    cout << "PROBLEM 1\n";
    int x ;
    cin >> x ;
    if (x>0){
        cout << "Postiviv n" ;
    }
    else {
        cout << "Negative /n" ;
    }
    cout << "PROBLEM 2\n";
    int x1 ;
    cin >> x1 ;
    if (x1>=0 ) {
        if (x1 % 2==0 ){
            {
            }
        }
        cout << " Positive and even" ;
        else {
            cout << " Positive and even" ;
        }
    }
    else {
        if(x1 % 2 ==0) {
            cout << " Negative and even" ;
        }
        else {
            cout << " negative and odd" ;
        }
    }
    cout << "PROBLEM 3\n";
    int a, b,c ;
    cin >> a ;
    cin >> b ;
    cin >> c ;
    if (a>b) {
        if (a>c ) {
            cout << " a is the largest" ;
        }
        else {
            if ( b>c)
            {
            }
            cout << " b is the largest" ;
            else {
                cout << " c is the largest" ;
            }
        }
    }
    else {
        if (b>c) {
            cout << " b is the largest" ;
        }
        else {
            if (c>a) {
                cout << " c is the largest" ;
            }
            else {
                cout << " b is the largest" ;
            }
        }
    }
    cout << "PROBLEM 4\n";
    int num1, num2 ;
    cin >> num1;
    cin >> num2 ;
    if ( num1 % num2==0){
        cout << " num1 is divisible num2 " ;
    }
    else {
        cout << " num1 is not divisible num2" ;
    }
    cout << "PROBLEM 5\n";
    int year ;
    cin >> year ;
    if ( year % 4 ==0 and year %100 != 0or year % 400== 0) {
        cout << " is the leap year" ;
    }
    else {
        cout << " is not leap year" ;
    }
    cout << "PROBLEM 6\n";
    float a1, b1, c1 ;
    cin >> a1 ;
    cin >> b1 ;
    cin >> c1 ;
    float descrimin = sqrt( b1*b1- 4* a1* c1) / 2*a ;
    if ( descrimin > 0) {
        float x1 = (-b1+ descrimin) / 2*a1 ;
        float x2 = (-b1-descrimin) / 2*a1 ;
        cout << " x1 is equal to" << x1 << endl ;
        cout << " x2 is equal to" << x2 << endl ;
    }
    else {
        if ( descrimin == 0) {
            float x1 = (-b1/2*a) ;
            float x2 = (-b1/2*a) ;
            cout << " x1 is equal to" << x1 << endl ;
            cout << " x2 is equal to" << x2 << endl ;
        }
    }
    cout << "PROBLEM 7\n";
    int angle1, angle2, angle3;
    cout << "Enter the three angles of the triangle: ";
    cin >> angle1 >> angle2 >> angle3;
    if (angle1 + angle2 + angle3 == 180 && angle1 > 0 && angle2 > 0 && angle3 > 0) {
        cout << "The triangle is valid." <<endl;
    } else {
        cout << "The triangle is not valid." << endl;
    }
    cout << "PROBLEM 8\n";


    char mychar ;
    cin >> mychar ;
    if ( mychar >= 'A' && mychar <= 'Z') {
        cout << " Uppercase" << endl ;
    }
    else if ( mychar >= 'a' && mychar <= 'z') {
        cout << " lowercase" << endl ;
    }else {
        cout << "It is not an alhabet" << endl ;
    }
    cout << "PROBLEM 9\n";
    int s1 ;
    cin >> s1 ;
    if (s1 < 20) {
        cout << " too slow" << endl ;
    }
    else if ( s1 >20 and s1 < 80 ) {
        cout << " just right" << endl;
    }else if (s1 > 80) {
        cout << " too fast" << endl;
    }
    cout << "PROBLEM 10\n";
    int x2, y2;
    cout << " Enter the number for 'x'" ;
    cout << " Enter the number for 'y'" ;
    cin >> x2 ;
    cin >> y2 ;
    double area = sqrt(x2^2 + y2^2) ;
    if ( area <= 10 ) {
        cout << "Point (" << x2 << "," << y2 << ") is in the circle." << endl;
    } else {
        cout << "Point (" << x2 << "," << y2 << ") is not in the circle." << endl;
    }
    cout << "PROBLEM 11\n";
    float w1 , p1 ;
    cout << " enter the number for weight" << endl ;
    cin >> w1 ;
    cout << " enter the number for price" << endl ;
    cin >> p1 ;
    float w2, p2 ;
    cout << " enter the number for weight in the second" << endl ;
    cin >> w2 ;
    cout << " enter the number for price in the second " << endl;
    cin >> p2 ;
    float pac1 = w1*p1 ;
    float pac2= w2*p2 ;
    if (pac1>pac2) {
        cout << " the first package is better" ;
    }
    else if (pac1==pac2) {
        cout << " Two packages have the same price.";
    }
    else {
        cout << " the second package is better" ;
    }
    cout << "PROBLEM 12\n";
    int pal1 ;
    cout << " enter the-digit number for it " ;
    cin >> pal1 ;
    float numb1 = pal1 / 100 ;
    float numb3 = pal1 %2 ;
      if (numb1 == numb3) {
        cout << " is a palindrome" << endl ;
    }
    else {
        cout << " is not a palindrome" << endl ;
    }
    cout << "PROBLEM 13\n";
    char b;
    cin >> b ;
    If ( b == 'g') {
        cout << " Go!" ;
    }
    if ( b == 'y') {
        cout <<"Get ready!" ;}

        if ( b == ' r' ) {
            cout << " Stop ! " ;
        }
        cout << "PROBLEM 14\n";
        int today ;
        int days_after ;
        cin >> today >> days_after ;
        int future_day =(today + days_after) % 7 ;
        cout << " Today is " ;
        switch (today) {
            case 0:
                cout << "Sunday" ;
                break;
            case 1:
                cout << "Monday" ;
                break;
            case 2:
                cout << "Tuesday" ;
                break;
            case 3:
                cout << "Wednesday" ;
                break;
            case 4:
                cout << "Thursday" ;
                break;
            case 5:
                cout << "Friday" ;
                break;
            case 6:
                cout << "Saturday" ;
                break;
        }
        cout << " and the future day is " ;
        switch (future_day) {
            case 0:
                cout << "Sunday" ;
                break;
            case 1:
                cout << "Monday" ;
                break;
            case 2:
                cout << "Tuesday" ;
                break;
            case 3:
                cout << "Wednesday" ;
                break;
            case 4:
                cout << "Thursday" ;
                break;
            case 5:
                cout << "Friday" ;
                break;
            case 6:
                cout << "Saturday" ;
                break;
        }
        cout << "PROBLEM 15\n";
        int grade;
        char scale;
        cout << "Enter the student's grade ";
        cin >> grade;
        switch (grade / 10) {
            case 10:
            case 9:
                scale = 'A';
                break;
            case 8:
                scale = 'B';
                break;
            case 7:
                scale = 'C';
                break;
            case 6:
                scale = 'D';
                break;
            default:
                scale = 'F';
        }
        cout << "Grade scale: " << scale << endl;
        cout << "PROBLEM 16\n";
        int number;
        cout << "Enter a number: ";
        cin >> number;
        switch (number > 0 ? 1 : (number < 0 ?-1 : 0)) {
            case 1:
                cout << "Positive" << endl;
                break;
            case-1:
                cout << "Negative" <<endl;
                break;
            default:
                cout << "It is zero" <<endl;
        }
        cout << "PROBLEM 17\n";
        char b;
        cin >> b;
        if ( b == 'u' ) {
            cout << " Assalomu alaykum" ;
        }
        if ( b == ' r') {
            cout << " Привет" ;
        }
        if ( b == 'g' ) {
            cout << " Hello " ;
        } else {
            cout << " I dunno this language":) ;
        }
        cout << "PROBLEM 18\n";
        // If / else
        double weight;
        double cost;
        cout << "Enter the weight of the package ";
        cin >> weight;
        if (weight <= 0) {
            cout << "Invalid input." << endl;
        } else if (weight > 20) {
            cout << "The package cannot be shipped." << endl;
        } else if (weight <= 1) {
            cost = 3500;
        } else if (weight <= 3) {
            cost = 5500;
        } else if (weight <= 10) {
            cost = 8500;
        } else { // weight <= 20
            cost = 10500;
        }
        if (weight > 0 && weight <= 20) {
            cout << "Shipping cost: " << cost << " som" << endl;
        }
        // switch/ case
        double weight_2;
        double cost_2;
        cout << "Enter the weight of the package ";
        cin >> weight_2;
        if (weight_2 <= 0) {
            cout << "Invalid input." <<endl;
            return 0;
        } else if (weight_2 > 20) {
            cout << "The package cannot be shipped." <<endl;
            return 0;
        }
        switch (static_cast<int>(weight_2)) {
            case 1:
                cost_2 = 3500;
                break;
            case 2:
            case 3:
                cost_2 = 5500;
                break;
            case 4:
            case 5:
            case 6:
            case 7:
            case 8:
            case 9:
            case 10:
                cost_2 = 8500;
                break;
            default:
                cost_2 = 10500;
        }
        cout << "Shipping cost: " << cost << " som" << endl;
        cout << "PROBLEM 19\n";
        int digit;
        cout << "Enter the digit: ";
        cin >> digit;
        switch (digit) {
            case 0:
                cout << "Zero";
                break;
            case 1:
                cout << "One";
                break;
            case 2:
                cout << "Two";
                break;
            case 3:
                cout << "Three";
                break;
            case 4:
                cout << "Four";
                break;
            case 5:
                cout << "Five";
                break;
            case 6:
                cout << "Six";
                break;
            case 7:
                cout << "Seven";
                break;
            case 8:
                cout << "Eight";
                break;
            case 9:
                cout << "Nine";
                break;
            default:
                cout << "It is not a digit";
        }
        cout << "PROBLEM20\n ;
        void printHolidays(int month) {
            switch (month) {
                case 1:
                    cout << "In January there is:\n";
                    cout << "- New Year's Day, 1 January\n";
                    break;
                case 2:
                    cout << "In February, April, June, July, August, November there are no holidays.\n";
                    cout << "There are Ramadan Hayit and Kurban Hayit but their dates change.\n";
                    break;
                case 3:
                    cout << "In March there is:\n";
                    cout << "- International Women's Day, 8 March\n";
                    cout << "- Navruz, 21 March\n";
                    break;
                case 4:
                    cout << "In April, June, July, August, November there are no holidays.\n";
                    cout << "There are Ramadan Hayit and Kurban Hayit but their dates change.\n";
                    break;
                case 5:
                    cout << "In May there is:\n";
                    cout << "- Remembrance Day, 9 May\n";
                    break;
                case 6:
                    cout << "In June, July, August, November there are no holidays.\n";
                    cout << "There are Ramadan Hayit and Kurban Hayit but their dates change.\n";
                    break;
                case 7:
                    cout << "In July, August, November there are no holidays.\n";
                    cout << "There are Ramadan Hayit and Kurban Hayit but their dates change.\n";
                    break;
                case 8:
                    cout << "In August, November there are no holidays.\n";
                    cout << "There are Ramadan Hayit and Kurban Hayit but their dates change.\n";
                    break;
                case 9:
                    cout << "In September there is:\n";
                    cout << "- Independence Day, 1 September\n";
                    break;
                case 10:
                    cout << "In October there is:\n";
                    cout << "- Teachers' Day, 1 October\n";
                    break;
                case 11:
                    cout << "In November there are no holidays.\n";
                    cout << "There are Ramadan Hayit and Kurban Hayit but their dates change.\n";
                    break;
                case 12:
                    cout << "In December there is:\n";
                    cout << "- Constitution Day, 8 December\n";
                    break;
                default:
                    cout << "Invalid month number.\n";
            }
        }
        int main() {
            int month;
            cout << "Enter the month number: ";
            cin >> month;
            printHolidays(month);
            return 0;
        }