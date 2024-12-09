// Do Programming Exercise 6, but instead of declaring an array of three CandyBar structures, use 
// new to allocate the array dynamically
#include <iostream>

using namespace std;

const short Size = 10;

struct CandyBar {
    string name_comp;
    float weight;
    int calories;
};

int main()
{
    short size;
    cout << "Enter how many structures need to be created (no more than 10): ";
    cin >> size;
    if(size <= 0 || size > 10)
    {
        cout << "Input error. Bye." << endl;
        return 0;
    }
    CandyBar * point_to_struct = new CandyBar[size];
    for(int count = 0; count < size; count++)
    {
        cout << "Enter calories:(q to quit) ";
        cin >> point_to_struct[count].calories;
        if(!point_to_struct[count].calories)
            break;
        cin.get();
        cout << "Enter company name: ";
        getline(cin, point_to_struct[count].name_comp);
        cout << "Enter weight: ";
        cin >> point_to_struct[count].weight;
        
    }
    cout << endl;
    for(int count = 0; count < size; count++)
        cout << "'" << point_to_struct[count].name_comp << "', " << 
               point_to_struct[count].weight << " " << point_to_struct[count].calories << endl;
    delete [] point_to_struct;
    cout << "Bye" << endl;
    
    return 0;
}
