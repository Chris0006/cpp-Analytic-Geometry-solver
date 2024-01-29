#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

void readLine(vector<int> & nums, string & input){
    int value;
    istringstream iss(input);
    while (iss >> value)
        nums.push_back(value);

}

int main() {    
    string aStr, bStr, cStr;
    cout << "coords A: ";
    getline(cin, aStr);

    cout << "coords B: ";
    getline(cin, bStr);

    cout << "coords C: ";
    getline(cin, cStr);

    vector<int> a, b, c;
    readLine(a, aStr);
    readLine(b, bStr);
    readLine(c, cStr);
    
    string unknown;
    getline(cin, unknown);
    char ch = unknown[0];

    int part1, part2;
    int xc, xb, x, xa;
    int yc, yb, y, ya;

    xa = a.at(0);
    ya = a.at(1);

    xc = c.at(0);
    yc = c.at(1);

    xb = b.at(0);
    yb = b.at(1);
    

    string searchingFor;
    switch (ch) {
        case 'a':
            searchingFor =  "BC";


            part1 = (xc-xb) * (-yb);
            y = (xc-xb); // y coefficient
            part2 = (yc-yb) * (-xb);
            x = (yc-yb); // x coefficient

            

            cout << x << "x " << -y << "y " << part2 - part1;
            break;

        case 'b':
            searchingFor = "AC";
            part1 = (xc-xa) * (-ya);
            y = (xc-xa); // y coefficient
            part2 = (yc-ya) * (-xa);
            x = (yc-ya); // x coefficient

            

            cout << x << "x " << -y << "y " << part2 - part1;

            break;

        case 'c':
            searchingFor = "AB";
            
            part1 = (xb-xa) * (-ya);
            y = (xb-xa); // y coefficient
            part2 = (yb-ya) * (-xa);
            x = (yb-ya); // x coefficient

            

            cout << x << "x " << -y << "y " << part2 - part1;
            break;

        default:
            cout << "Unknown value" << endl;
            return 0;
    }
    

    
    // make it work with ints, then with doubles!
    return 0;
}
