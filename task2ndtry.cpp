#include <iostream>
using namespace std;


//for R
double dsu;//Disance travelled by a substance

double dso;//Distance travelled by a solvent


// For moles of an element
double m;//mass of element 

double mo;//molar mass of element

//for R
double r(double dsu,double dso)
{
    return dsu/dso;
}

//for moles of an element
double mass(double m, double mo)
{
    return m/mo;
}

string secondtry;


int main()
{

    int op;

    cout << "Enter Which formula you want to use from the list below:"<< endl;
    cout << " 1. Formula for R value of a substance in chromatography"<< endl;
    cout << " 2.Formula for Number of moles of an element"<< endl;
    cout << " 3. Quit the Program"<<endl;
    cout << "Which formula would u like to use?please press 1 or 2 or 3"<< endl;
    cin >> op;

    do
    {
        if(op ==1)
    {
        cout << "Input Distance travelled by substance:";
        cin >> dsu;
        cout << "Input Distance travelled by solvent:";
        cin >> dso;

        cout << "result:" << r( dsu, dso)<< endl;

    
    }

    else if(op ==2)
    {
        cout << "Input Mass of element(In gram):";
        cin >> m;
        cout << "input Molar mass of element(in gram):";
        cin >> mo;

        cout << "result:" << mass(m, mo)<< endl;
    }
    

    cout << "Which formula would u like to use?please press 1 or 2 or 3"<< endl;
    cin >> op;

        
    } while (op != 3);
    {
        cout << "Thank you for using this app"<<endl;
    } 

    

    


    return 0;
}
    
    