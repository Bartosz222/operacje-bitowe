#include <iostream>
#include <bitset>

using namespace std;
int a;
int b;
int main() {
   	cout<<"Podaj liczbe a:";
   	cin>>a;
   	cout<<"Podal liczbe b:";
   	cin>>b;
    cout<<"a= "<<bitset<8>(a).to_string()<<endl;
    cout<<"b= "<<bitset<8>(b).to_string()<<endl;
    cout<<"a|b= "<<bitset<8>(a|b).to_string()<<endl;
    cout<<"a&b= "<<bitset<8>(a&b).to_string()<<endl;
    cout<<"a^b= "<<bitset<8>(a^b).to_string()<<endl;
    cout<<"~a= "<<bitset<8>(~a).to_string()<<endl;
    cout<<"~b= "<<bitset<8>(~b).to_string()<<endl;
    cout<<"a<<=4 "<<bitset<8>(a<<=4).to_string()<<endl;
    cout<<"b>>=1 "<<bitset<8>(b>>=1).to_string()<<endl;
    return 0;
}
