#include <iostream>
using namespace std;

int main()
{
    double a, b, m;
    int choice = 1;
        while(choice != 0){
            cout << "Enter optimistic time: ";
            cin >> a;
            cout << "Enter most likely time: ";
            cin >> m;
            cout << "Enter pessimistic time: ";
            cin >> b;
            
            cout << "\nDuration = " << (a + 4*m + b)/6;
            cout << "\nVariance = " << ((b-a)/6)*((b-a)/6);

            cout << "\n\nExit? (0): ";
            cin >> choice;
        }
    return 0;
}
