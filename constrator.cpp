#include<iostream>
using namespace std;
class Bike{
    public:
    int tyerSize;
    int bikeModel;
    Bike (int ts, int bs) : tyerSize(ts), bikeModel(bs) {};

//     Bike (int tyerSize, int bikeModel){
//         this->tyerSize = tyerSize;
//         this->bikeModel = bikeModel;

// }
};
// another way for constructing the class

int main(){
    int ts = 30;
    int bs = 100;
    Bike honda(ts,bs);
    cout<<honda.tyerSize<< "\n"<< honda.bikeModel <<endl;
}
