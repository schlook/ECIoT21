#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // deklarerar vector 'v' av datatyp 'string', initierar den med 5 strängar 
    vector<string> v = {"Fler", "strängar", "här", "än på en", "ukulele" };

    // denna loopen skriver ut samtliga strängar i vectorn
    for(int i = 0; i < v.size(); i++) // v.size() dvs function som returnerar storleken, i detta fall storleken av vector 'v'
    {
        cout << v[i] << endl;
    }
    cout << endl;

    for(auto i : v) // ett annat sätt att göra exakt som ovan, här med nyckelordet 'auto' som itererar genom vector 'v'
    {
        cout << i << endl; // i representerar värdet i vectorn, från första till sista
    }
    return 0;
}