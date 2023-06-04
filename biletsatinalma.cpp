#include <iostream>
using namespace std;
int main(){
    
    double vip = 978.86;
    double kalearkasi = 389.12;
    double maraton = 765.25;
    double t = 0;

    cout<<"kac tane vip bilet almak istiyorsunuz?"<<endl;
    int v;
    cin>>v;
    cout<<"kac tane kale arkasi bilet almak istiyorsunuz?"<<endl;
    int k;
    cin>>k;
    cout<<"kac tane maraton bilet almak istiyorsunuz?"<<endl;
    int m;
    cin>>m;

    t = (vip*v)+(kalearkasi*k)+(maraton*m);

    cout<<"Toplam ucretiniz "<<t<<" TL"; 
    return 0;
}