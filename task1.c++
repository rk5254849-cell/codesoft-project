# include<iostream>
using namespace std;

int main (){
    float num1,num2;
    char operation;

    cout<<"enter the number1:";
    cin>>num1;
     cout<<"enter the operator(+,-,*,/,%) :";
    cin>>operation;
    cout<<"enter the number2:";
    cin>>num2;
    

    switch (operation){
    case '+':
       cout<<num1+num2;
        break;
        case '-':
        cout<<num1-num2;
        break;
        case '*':
         cout<<num1*num2;
        break;
        case '/':
         cout<<num1/num2;
        break;
        case '%':
         cout<<(num1*num2)/100;
        break;

    default:
    cout<<"envaild operator";

    }
    return 0;
}