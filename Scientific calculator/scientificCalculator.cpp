#include<iostream>
#include<cmath>
using namespace std;

class SimpleCalculator {
    int a,b;
    public:
        void getDataSimple()
        {
            cout<<"Enter the value of a: "<<endl;
            cin>>a;
            cout<<"Enter the value of b: "<<endl;
            cin>>b;
        }

        void performOperationSimple(){
            cout<<"The value of a+b is: "<<a+b<<endl;
            cout<<"The value of a-b is: "<<a-b<<endl;
            cout<<"The value of a*b is: "<<a*b<<endl;
            cout<<"The value of a/b is: "<<a/b<<endl;
        }
};

class ScientifiCalculator{
    int a,b;
    public:
        void getDataScientific(){
            cout<<"Enter the value of a: "<<endl;
            cin>>a;
        }

        void performOperationScientific(){
            cout<<"The value of sin(a) is: "<<sin(a)<<endl;
            cout<<"The value of cos(a) is: "<<cos(a)<<endl;
            cout<<"The value of tan(a) is: "<<tan(a)<<endl;
            cout<<"The value of exp(a) is: "<<exp(a)<<endl;
        }

};

class HybridCalculator : public SimpleCalculator,public ScientifiCalculator{

};

int main(){

  HybridCalculator calc;
  calc.getDataSimple();
  calc.performOperationSimple();
  calc.getDataScientific();
  calc.performOperationScientific();  

    return 0;
}