#include "mylib.h"
#include "stud.h"

int main() {
    vector<Stud> vec1;
    Stud Temp;

    cout << "How many students do you have? ";
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
    cout << "Please input student data: " << endl;
    ived(Temp);
    galutinisvid(Temp);
    vec1.push_back(Temp);
    val(Temp);
    }

    for (int i = 0; i < vec1.size(); i++) {
        galutinisvid(vec1.at(i));
    }

    cout << "\n---------------------------------------------------------" << endl;
    cout << "Vardas              Pavarde            Galutinis(Vid.)" << endl;
    cout << "---------------------------------------------------------" << endl;

    for (int i = 0; i < vec1.size(); i++) {
        output(vec1.at(i));
    }

    char a;
    cout << "Press any key to exit..." << endl;
    cin >> a;

    return 0;
}
