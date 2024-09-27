#include "stud.h"



void ived(Stud &Lok) {
    cout << "Input Name, Surname and Exam points: ";
    cin >> Lok.vardas >> Lok.pavarde >> Lok.egz;

    int b;
    double grade;
    cout << "How many homework grades do you have? ";
    cin >> b;

    cout << "Enter the homework grades: ";
    for (int i = 0; i < b; i++) {
        cin >> grade;
        Lok.ND.push_back(grade);
    }
}



void vidurkis(Stud &Lok) {
    if (!Lok.ND.empty()) {
        Lok.vid = accumulate(Lok.ND.begin(), Lok.ND.end(), 0.0) / Lok.ND.size();
    } else {
        Lok.vid = 0.0;
    }
}


void galutinisvid(Stud &Lok) {
    vidurkis(Lok);
    Lok.rezvid = 0.4 * Lok.vid + 0.6 * Lok.egz;
}



void output(Stud Lok) {
    cout << left << setw(18) << Lok.vardas
         << setw(20) << Lok.pavarde
         << fixed << setprecision(2)
         << Lok.rezvid << endl;
}

void val(Stud &Lok) {
    Lok.vardas.clear();
    Lok.pavarde.clear();
    Lok.ND.clear();
    Lok.vid = 0;
    Lok.rezvid = 0;
}
