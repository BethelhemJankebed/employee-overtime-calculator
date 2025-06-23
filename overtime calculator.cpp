#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;

struct emp {
    string name;
    double totalhour = 0;
    double hourlywage = 0;
    double total = 0;
    double overtime = 0;
};

void getdata(emp e[], int size) {
    cin.ignore();

    for (int i = 0; i < size; i++) {
        cout << "Enter the employee name: ";
        getline(cin, e[i].name);

        cout << "Enter total hours worked: ";
        cin >> e[i].totalhour;

        cout << "Enter hourly wage: ";
        cin >> e[i].hourlywage;

        cin.ignore();
    }

    for (int i = 0; i < size; i++) {
        if (e[i].totalhour >=40) {
            double overtimehours = e[i].totalhour - 40;
            e[i].overtime = overtimehours;
            e[i].total = (overtimehours * e[i].hourlywage * 1.5);
        } else {
            e[i].total = e[i].totalhour * e[i].hourlywage;
            e[i].overtime = 0;
        }
    }


    ofstream myfile("overtime.txt",ios::out);
    for (int i = 0; i < size; i++) {
        myfile << e[i].name << "," << e[i].totalhour << "," << e[i].hourlywage << "," << e[i].total << endl;
    }
    myfile.close();

    ifstream file("overtime.txt");
    cout << "\nNAME\tHOURS WORKED\tHOURLY WAGE\tTOTAL PAY\n";
    string line;

    while (getline(file, line)) {
        replace(line.begin(), line.end(), ' ,', '\t');
        cout << line <<"  "<<endl;
    }
    file.close();
}

int main() {
    int n;
    emp e[100];

    cout << "Enter the number of employees: ";
    cin >> n;

    getdata(e, n);

    return 0;
}
