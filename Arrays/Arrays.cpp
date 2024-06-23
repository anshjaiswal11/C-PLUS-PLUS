#include <iostream>
using namespace std;

main()
{
    int array[4]; //Type_Name[Size_of_Elements]

    //Initialization
    array[0]=10;
    array[1]=20;
    array[2]=30;
    array[3]=40;

    //Printing the array elements and address of each element
    cout<<"array[0] = "<<array[0]<<" , Address = "<<&array[0]<<endl;
    cout<<"array[0] = "<<array[1]<<" , Address = "<<&array[1]<<endl;
    cout<<"array[0] = "<<array[2]<<" , Address = "<<&array[2]<<endl;
    cout<<"array[0] = "<<array[3]<<" , Address = "<<&array[3]<<endl;

    if(&array[0] == array)
        cout<<"TRUE";

        // how to take user input 
        int n =  4; //sizeofarray;

        for (int i = 0; i < n; i++)
        {
            cin >> array[i];
        }
        
}
