// cout << "Press Enter 3 times to reveal your future.";
// cout << "You will get A in this 261102.";
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
    int a;
    string x[]={"A","B+","B","C+","C","D+","D","F","W"};
    cout<<"Press Enter 3 times to reveal your future.\n";
    cin.get();
    cin.get();
    cin.get();
    srand( time( 0 ) );
    a=rand()%8;
    cout<<"You will get "<<x[a]<<" in this 261102.\n";
}