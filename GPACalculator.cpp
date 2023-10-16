#include <iostream>
using namespace std;

double calculateGPA(char grade,int creditHours){
    float gradepoint;
    if (grade=='A')
    {
        gradepoint=4.00;
    }
    else if (grade=='B')
    {
        gradepoint=3.00;
    }
    else if (grade=='C')
    {
        gradepoint=2.00;
    }
    else if (grade=='D')
    {
        gradepoint=1.00;
    }
    else if (grade=='F')
    {
        gradepoint=0.00;
    }

    float gpawithoutTotalCreditHours = gradepoint*creditHours;

    return gpawithoutTotalCreditHours; 

}


int main()
{
    char first,second,third,fourth,fifth;
    int creditHoursFirst,creditHoursSecond,creditHoursThird,creditHoursFourth,creditHoursFifth,totalCreditHours;
    double a1,b1,c1,d1,e1;
    cout<<"Enter grades for first subject: "; cin>>first;
    cout<<"Enter grades for second subject: "; cin>>second;
    cout<<"Enter grades for third subject: "; cin>>third;
    cout<<"Enter grades for fourth subject: "; cin>>fourth;
    cout<<"Enter grades for fifth subject: "; cin>>fifth;

    cout<<"Enter creadit hours for first subject: "; cin>>creditHoursFirst;
    cout<<"Enter creadit hours for second subject: "; cin>>creditHoursSecond;
    cout<<"Enter creadit hours for third subject: "; cin>>creditHoursThird;
    cout<<"Enter creadit hours for fourth subject: "; cin>>creditHoursFourth;
    cout<<"Enter creadit hours for fifth subject: "; cin>>creditHoursFifth;

    totalCreditHours = creditHoursFirst+creditHoursSecond+creditHoursThird+creditHoursFourth+creditHoursFifth;

    a1 = calculateGPA(first,creditHoursFirst);
    b1 = calculateGPA(second,creditHoursSecond);
    c1 = calculateGPA(third,creditHoursThird);
    d1 = calculateGPA(fourth,creditHoursFourth);
    e1 = calculateGPA(fifth,creditHoursFifth);

    double gpa=(a1+b1+c1+d1+e1)/totalCreditHours;

    cout<<"Your GPA is: "<<gpa<<endl;



    return 0;
}
