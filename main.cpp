

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string studentName;
    float score1,score2,score3,average;
    cout <<" Enter student's full name:"<< endl;
    getline(cin,studentName);
    cout << "Enter score for subject 1:";
    cin >> score1;
    cout << "Enter score for subject 2:";
    cin >> score2;
    cout << "Enter score for subject 3:";
        cin >> score3;

        average = (score1 + score2 + score3)/3;
        cout << "\n student Name:" << studentName << endl;
        cout << "Average score:" << average << endl;

        if (average>=80)
            cout << "Grade: A" << endl;
            else if (average >= 70)
                cout << "Grade: B" << endl;
            else if (average >= 60)
                cout << "Grade: C" << endl;
                else if (average >= 50)
                cout << "Grade: D" << endl;
            else
                cout << "Grade: F" << endl;
            return 0;
}


