#include<iostream>
using namespace std;
class Bike{
    public:
    int tyerSize;
    int bikeModel;
    // Bike (int ts, int bs) : tyerSize(ts), bikeModel(bs) {};
    // another way for constructing the class

    Bike (int tyerSize, int bikeModel){
        this->tyerSize = tyerSize;
        this->bikeModel = bikeModel;

}
};

int main(){
    Bike splendor(20, 100);

// Another way 
    // int ts = 30;
    // int bs = 100;
    // Bike splendor(ts,bs);
    cout<<splendor.tyerSize<< "\n"<< splendor.bikeModel <<endl;
}
