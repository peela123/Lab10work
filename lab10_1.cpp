#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;
string grade(int x)
{
    if (x == 0)
        return "A";
    else if (x == 1)
        return "B+";
    else if (x == 2)
        return "B";
    else if (x == 3)
        return "C+";
    else if (x == 4)
        return "C";
    else if (x == 5)
        return "D+";
    else if (x == 6)
        return "D";
    else if (x == 7)
        return "F";
    else
        return "W";
}
int main()
{
    int x;
    cout << "Press Enter 3 times to reveal your future.";
    cin.get();
    cin.get();
    cin.get();
    srand(time(0));
    x = rand() % 9;
    cout << "You will get " << grade(x) << " in this 261102.";
}