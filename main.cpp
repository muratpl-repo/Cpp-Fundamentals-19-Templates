#include <iostream>

using namespace std;

template<class DonusTipi>

DonusTipi toplama(DonusTipi sayi1,DonusTipi sayi2){
    return sayi1+sayi2;
}

int main()
{
    cout <<toplama<int>(10,25)<<endl;
    return 0;
}
