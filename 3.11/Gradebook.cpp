#include <iostream>
#include "Gradebook.h"

using namespace std;

Gradebook::Gradebook(string coursename,string teachername)
    :Coursename(coursename),Teachername(teachername)
    {

    }

void Gradebook::setteachername(string teachername)
{
    Teachername = teachername;
}
string Gradebook::getteachername()
{
    return Teachername;
}

void Gradebook::setcoursename(string coursename)
{
    Coursename = coursename;
}
string Gradebook::getcoursename()
{
    return Coursename;
}

void Gradebook::displayMessage()
{
    cout << "Welcome to the grade book for\n" << getcoursename() << " ! " << endl;
    cout << "This course is presented by\n" << getteachername() << " ! " << endl;
}
