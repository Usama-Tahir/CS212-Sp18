#include <iostream>
#include <algorithm>

using namespace std;
class Result
{
private:
    int rollNumber;
    int calculusScore;
    int physicsScore;
    int programmingScore;
    float percentage;
    char grade;

public:

    void calculateEverything(int roll, int cal, int phy, int prog)
    {

        setData(roll,cal,phy,prog);
        calculatePercentage();
        calculateGrade();
//        printResultSummary();
    }



    void setData(int roll, int cal, int phy, int prog)
    {
        rollNumber = roll;
        calculusScore = cal;
        physicsScore = phy;
        programmingScore = prog;
    }
    void calculatePercentage()
    {

        percentage = (calculusScore + physicsScore + programmingScore) / 3;

    }

    static void  s1(Result* temp[])
    {
        temp[0]->printResultSummary();
        temp[1]->printResultSummary();
        temp[2]->printResultSummary();
        sort(temp, temp + 3);
        temp[0]->printResultSummary();
        temp[1]->printResultSummary();
        temp[2]->printResultSummary();


    }
    void calculateGrade()
    {
        if (percentage < 50)
            grade = 'F';
        else if (percentage >= 50 && percentage < 60)
            grade = 'D';
        else if (percentage >= 60 && percentage < 70) grade = 'D+';
        else if (percentage >= 70 && percentage < 80) grade = 'C+';
        else if (percentage >= 80 && percentage < 90) grade = 'B';
        else if (percentage >= 90 && percentage < 95) grade = 'B+';
        else if (percentage >= 95 && percentage < 100) grade = 'A';
        else
        {
            percentage = NULL;
        }

    }
    void printResultSummary()
    {
        cout << "The final grade is " << grade << " and percentage is " << percentage << " "<<endl;
    }
};

int main()
{

    Result *resultArray[2];
    for (int i = 0; i <2 ; i++) {
        resultArray[i] = new Result();
    }

    resultArray[0]->calculateEverything(34, 80, 75, 95);
    resultArray[1]->calculateEverything(35,25,25,24);

    Result * newResultArray[3];
    for (int j = 0; j <2 ; j++) {
        newResultArray[j] = resultArray[j];
    }
    newResultArray[2]->calculateEverything(36,82,82,82);

//    delete[] resultArray;
    *resultArray = *newResultArray;
//    resultArray[2]->printResultSummary();






//    resultArray[0]->printResultSummary();
//    newResultArray[1]->printResultSummary();

//    cout<<resultArray<<endl;
//    cout<<newResultArray<<endl;
//    Result student1;
//    student1.setData(34, 80, 75, 95);
//    student1.calculatePercentage();
//    student1.calculateGrade();
//    student1.printResultSummary();
Result::s1(resultArray);
    return 0;
}