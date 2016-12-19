#include<iostream>

using namespace std;

int main() {
    long long maje, jeni;
    cin >> maje >> jeni;
    long long rakostiskaniq;
    rakostiskaniq = maje*(maje-1)/2;
    long long zdr;
    zdr = jeni*(jeni-1);
    zdr += maje*2*jeni;
    cout << rakostiskaniq  << " " << zdr << "\n";
    return 0;
}
