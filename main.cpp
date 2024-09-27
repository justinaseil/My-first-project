#include "mylib.h"
#include "stud.h"

int main()
{
    vector<Stud>vec1;
    Stud Temp;
    cout<<"How many students do you have? ";
    int n;
    cin>>n;

    for(int i=0; i<n; i++){
            cout<<"Please input user data"<<endl;
    ived(Temp);
    vec1.push_back(Temp);
    val(Temp);
    }

    for (int i = 0; i < n; i++) {
        galutinisvid(vec1.at(i));
        galutinismed(vec1.at(i));
    }

     cout << "Vardas" << setw(20) << "Pavardė" << setw(25) << "Galutinis (Vid.)" << setw(20) << "Galutinis (Med.)" << endl;
    cout << "-----------------------------------------------------------------------" << endl;

    for (int i = 0; i < n; i++) {
        output(vec1.at(i));
    }

    char a;
    cout<<"Press any key..."<< endl;
    cin>>a;
    return 0;
}
