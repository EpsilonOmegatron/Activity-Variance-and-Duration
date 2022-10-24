#include <iostream>
using namespace std;

int main()
{
    double a, b, m, duration, variance;
    int choice = 1;
        while(choice != 0){
            cout << "Enter optimistic time: ";
            cin >> a;
            cout << "Enter most likely time: ";
            cin >> m;
            cout << "Enter pessimistic time: ";
            cin >> b;

            duration = (a + 4*m + b)/6;
            variance = ((b-a)/6)*((b-a)/6);

            cout << "\nDuration = " << duration;
            cout << "\nVariance = " << variance;

            cout << "\n\nExit? (0): ";
            cin >> choice;
        }
    return 0;
}
