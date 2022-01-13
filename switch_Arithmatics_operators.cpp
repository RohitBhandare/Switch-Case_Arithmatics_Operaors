using namespace std;
#include <iostream>
int main(){
    int choice;
    float num1,num2;
    cout<<"Enter a choice You want to do: "<<endl<<"For Addition Enter: 1"<<endl<<"For Subtraction Enter: 2"<<endl<<"For Division Enter: 3"<<endl<<"For Multiplication Enter: 4"<<endl;
    cin>>choice;
    cout<<"Enter a Two Numbers: "<<"\n";
    cin>>num1>>num2;
    switch(choice){
        case 1: cout<<"Addition is: "<<num1+num2;
                break;
        case 2: cout<<"Subtraction is: "<<num1-num2;
                break;
        case 3: cout<<"Division is: "<<num1/num2;
                break;
        case 4: cout<<"Multiplication is: "<<num1*num2;
                break;
        default:cout<<"Plz Enter Valid Choice!!!!!!";
                        break;
  }
                cout<<"\n!!!!!!!!!!!!!!!Thank You!!!!!!!!!!!!!!!!!";
    return 0;
}
