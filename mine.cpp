
#include <iostream>
#include <vector>
#include <Algorithm>
#include <sstream>
using namespace std;
int not_possible(string f_name,string l_name, string day, string month, string year) {
    vector <string> massiv{ f_name,l_name,day, month, year};
    vector <string> f_l_name_month_year{ f_name,l_name,month, year };
    vector <string> f_l_name_year_day{ f_name,l_name,month, year };
    vector <string> day_month_year{ day, month, year };



    cout << "+" << string(20, '-') << "+" << endl;
    cout << "Not possible passwords" << endl;
    cout << "+" << string(10, '*') << " Without dot . " << string(10, '*') << "+" << endl;


    sort(massiv.begin(), massiv.end());
    sort(f_l_name_month_year.begin(), f_l_name_month_year.end());
    sort(f_l_name_year_day.begin(), f_l_name_year_day.end());
    sort(day_month_year.begin(), day_month_year.end());



    do {
        for (const string& str : f_l_name_year_day) {
            cout << str;
        }
        cout << endl;
    } while (next_permutation(f_l_name_year_day.begin(), f_l_name_year_day.end()));

    do {
        for (const string& str : f_l_name_month_year) {
            cout << str;
        }
        cout << endl;
    } while (next_permutation(f_l_name_month_year.begin(), f_l_name_month_year.end()));

    do {
        for (const string& str : day_month_year) {
            cout << str;
        }
        cout << endl;
    } while (next_permutation(day_month_year.begin(), day_month_year.end()));

    do {
        for (const string& str : massiv) {
            cout << str;
        }
        cout << endl;
    } while (next_permutation(massiv.begin(), massiv.end()));

    cout << "+" << string(10, '*') << "With dot '.' " << string(10, '*') << "+" << endl;
    do {
        for (size_t i = 0; i < massiv.size(); i++) {
            cout << massiv[i];
            if (i < massiv.size() - 1) {
                cout << ".";
            }
        }
        cout << endl;
    } while (next_permutation(massiv.begin(), massiv.end()));
    return 0;
}


int possible_pas(string f_name, string l_name, string day, string month, string year) {

    //massives
    string plus = day + month + year; 

    vector <string> massiv{ f_name,l_name,day, month, year };
    vector <string> name_mon_yea{ f_name, month, year };
    vector <string> name_day_yea{ f_name, day, year };
    vector <string> name_year{ f_name, year };
    vector <string> f_l_name_year{ f_name,l_name, year };
    vector <string> first_last_names{ f_name,l_name};

    sort(massiv.begin(), massiv.end());
    sort(name_mon_yea.begin(), name_mon_yea.end());
    sort(name_day_yea.begin(), name_day_yea.end());
    sort(name_year.begin(), name_year.end());
    sort(f_l_name_year.begin(), f_l_name_year.end());
    sort(first_last_names.begin(), first_last_names.end());


    cout << "+" << string(20, '*') << "+" << endl;
    cout << "All possible passwords" << endl;
    cout << "+" << string(10, '*') << "Without dot '.' " << string(10, '*') << "+" << endl;

    //name month year "."
    //name year without dot "."

    
    do {
        for (const string& str : name_year) {
            cout << str;
        }
        cout << endl;
    } while (next_permutation(name_year.begin(), name_year.end()));


    do {
        for (const string& str : f_l_name_year) {
            cout << str;
        }
        cout << endl;
    } while (next_permutation(f_l_name_year.begin(), f_l_name_year.end()));


    //With Dot "."
    cout << "+" << string(10, '*') << " With dot '.' " << string(10, '*') << "+" << endl;
    //name year day
    do {
        for (size_t i = 0; i < name_day_yea.size(); i++) {
            cout << name_day_yea[i];
            if (i < name_day_yea.size() - 1) {
                cout << ".";
            }
        }
        cout << endl;
    } while (next_permutation(name_day_yea.begin(), name_day_yea.end()));
    //first and last name year
    do {
        for (size_t i = 0; i < f_l_name_year.size(); i++) {
            cout << f_l_name_year[i];
            if (i < f_l_name_year.size() - 1) {
                cout << ".";
            }
        }
        cout << endl;
    } while (next_permutation(f_l_name_year.begin(), f_l_name_year.end()));

    //name year "."
    do {
        for (size_t i = 0; i < name_year.size(); i++) {
            cout << name_year[i];
            if (i < name_year.size() - 1) {
                cout << ".";
            }
        }
        cout << endl;
    } while (next_permutation(name_year.begin(), name_year.end()));
    //name month year "."
    do {
        for (size_t i = 0; i < name_mon_yea.size(); i++) {
            cout << name_mon_yea[i];
            if (i < name_mon_yea.size() - 1) {
                cout << ".";
            }
        }
        cout << endl;
    } while (next_permutation(name_mon_yea.begin(), name_mon_yea.end()));
    cout << f_name << "." << l_name << year << endl;
    cout << l_name << "." << f_name << year << endl;
    cout << year << "." << f_name <<"."<< l_name << endl;
    cout << plus << "." << f_name << endl;
    cout << f_name << "." << plus << endl;
    cout << f_name << "." << l_name << endl;
    cout << l_name << "." << f_name << endl;



    return 0;
}

int main() {
    setlocale(LC_ALL, "Russian");
    string f_name = "Aidarbek", l_name = "Kachiev",month = "01",day = "12", year = "2007";
    /*cout << "Введите имя: ";
    cin >> f_name;
    cout << "Введите last name: ";
    cin >> l_name;
    cout << "Введите day of dth: ";
    cin >> day;
    cout << "Введите month of dth: ";
    cin >> month;
    cout << "Введите year of dth: ";
    cin >> year;
   */
    not_possible(f_name, l_name, day, month, year);
    possible_pas(f_name, l_name, day, month, year);


    
    
    return 0;
}


