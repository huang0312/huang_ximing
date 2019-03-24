#include <iostream>
#include <string>

using namespace std;

class Gradebook
{
public:
    explicit Gradebook(string,string);

    void setteachername(string);
    string getteachername();

    void setcoursename(string);
    string getcoursename();

    void displayMessage();

private:
    string Coursename;
    string Teachername;
};
