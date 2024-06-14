#include <iostream>
using namespace std;

class vechical{
    public:
    int vechicalNumber;
    int model;
};
class car : public vechical{
    public:
    int wheel;
};
class bike : public vechical{
    public:
    int tyer;
};

int main() {
    car omni;
    omni.vechicalNumber = 870;
    omni.model = 2021;
    cout<<omni.vechicalNumber<<endl;
    
    return 0;
}