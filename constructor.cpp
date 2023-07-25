#include<iostream>
using namespace std;
class Atm{
    
    int pinno;
    public:
    string name;
    float balance;
    
    int getpinno(){
        return pinno;
    }
    
    void setpin(int pin){
        this->pinno=pin;
        
    }
    Atm(){                                          //Default constructor
        cout<<"Default constructor"<<endl;
    }
    Atm(string n, float balance){                   //Parametrised constructor
        name = n;
        this -> balance = balance;
        cout<<"Parametrised Constructor called automatically"<<endl;
        
    }
    Atm (Atm& temp){
        cout <<"Copy Constructor begins"<<endl;
        this->name = temp.name;
    }
    
};

int main(){
    Atm hdfc;                       //static object declaration
    Atm *pnb = new Atm();    //dynmaic object declaration
    pnb->name = "Boss";
    cout<<"Your name is : "<<pnb->name<<endl;
    Atm sbi("Pratik", 1000.50);
    cout<<"Name "<<sbi.name<<endl;
    cout<<"Balance "<<sbi.balance<<endl;
    
    int x=sbi.getpinno();
    cout<<"Your pin no is : "<<x<<endl;
    sbi.setpin(1234);
    int y=sbi.getpinno();
    cout<<"Your pin no is : "<<y<<endl;
    
    Atm bob(sbi);
    cout<<"Bob name is : "<<bob.name<<endl;
    bob.name="Ravi";
    cout<<"Bob name is : "<<bob.name<<endl;
    cout<<"Bob name is : "<<sbi.name<<endl;
    
    
    return 0;
}