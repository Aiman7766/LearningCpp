#include<iostream>
using namespace std;

class BasicCar
{
public:
    void start()
    {
        cout<<"car is started"<<endl;
    }
};

class AdvanceCar:public BasicCar
{
public:
    void playMusic()
    {
        cout<<"music playing"<<endl;
    }
};


int main()
{
    AdvanceCar a;
    BasicCar *ptr=&a;
    ptr->start();
   // ptr->playMusic();
}
