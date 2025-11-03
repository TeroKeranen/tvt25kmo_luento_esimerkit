#include <iostream>

using namespace std;
void calcSum(int a, int b) {

    int summa = a + b;
    cout << "summa on : " << summa << endl;

}

void calcDiv(int a, int b) {

    if (b == 0) {
        throw std::runtime_error("Jakaja ei saa olla nolla");
    }
    int osamaara = a / b;
    cout << "osamaara on: "<< osamaara << endl;
}

int retSum(int a, int b) {
    return a + b;
}

float retDiv(int a, int b) {

    if (b == 0) {
        throw std::runtime_error("Jakaja ei saa olla nolla");
    }

     return static_cast<float>(a) / static_cast<float>(b);
}

int main()
{
    int luku1, luku2, result;
    cout << "Anna luku 1: "<< endl;
    cin >> luku1;
    cout << "Anna luku 2: "<<endl;
    cin >> luku2;


    calcSum(luku1, luku2);
    calcDiv(luku1, luku2);

    try {
        result = retDiv(luku1, luku2);
        cout << luku1 << "/" <<  luku2 << " = " << result << endl;
    } catch (runtime_error& e) {
        cout<<"Error: "<< e.what()<< endl;
    }

    return 0;
}



