#include <iostream>
#include <limits>

using namespace std;


int grade(int a,int b,int c,int d,int e,int f)
{
    return  a+b+c+d+e+f;
}


int main()
{
    int en;
    int mat;
    int ss;
    int in;
    int grade1;
    int grade2;

    cout << "Please enter the grades for the following subjects."  << endl;
    cout << "English Language: ";
    cin >> en;
    cout << "Mathematics: ";
    cin  >> mat;
    cout << "Social Studies: ";
    cin >> ss;
    cout << "Integrated Science: ";
    cin  >> in;
    cout << "" << endl;
    cout << "Please enter any other best two grades." << endl;
    cout << "" << endl;
    cout << "Best Grade(1): ";
    cin >> grade1;
    cout << "Best Grade(2): ";
    cin >> grade2;
    cout << "" << endl;
    int grading = grade(en,mat,ss,in,grade1,grade2);
    cout << "Aggregate:" << grading << endl;

    return 0;
}
