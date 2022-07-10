# include <iostream>
using namespace std;

// sizeof 
//==short < int <= long <= long long==
int main()
{
    cout << "the used memory of the type of short is " << sizeof(short) << endl;
    
    cout << "the used memory of the type of int is " << sizeof(int) << endl;

    cout << "the used memory of the type of long is " << sizeof(long) << endl;

    cout << "the used memory of the type of long long is " << sizeof(long long) << endl;
    
    system("pause");

    return 0;

}