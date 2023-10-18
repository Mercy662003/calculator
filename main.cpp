//task_2
//calculator
#include <iostream>

using namespace std;

int main()
{
    float num1;
    float num2;
    char oper;
    cout<<"Enter the first number"<<endl;
    cout<<"---------------------------------------"<<endl;
    cin>>num1;
    cout<<"Enter the second number"<<endl;
    cin>>num2;
    cout<<"Choose between addition(+),subtraction(-),division(/) and multiplication(*)\n Pleas just enter the symbol"<<endl;
    cout<<"---------------------------------------"<<endl;
    cin>>oper;
    if (oper=='+')
    {
        cout<<num1<<" + "<< num2<<" = "<<num1+num2<<endl;
        cout<<"---------------------------------------"<<endl;
    }
    else if (oper=='-')
    {
        cout<<num1<<" - "<< num2<<" = "<<num1-num2<<endl;
        cout<<"---------------------------------------"<<endl;
    }
    else if (oper=='*')
    {
        cout<<num1<<" * "<< num2<<" = "<<num1*num2<<endl;
        cout<<"---------------------------------------"<<endl;
    }
    else if (oper=='/')
    {
       while (num2==0)
       {
           cout<<"Math error the denominator is 0\nEnter another number"<<endl;
           cin>>num2;

       cout<<"---------------------------------------"<<endl;
       }

       cout<<num1<<" / "<< num2<<" = "<<num1/num2<<endl;
       cout<<"---------------------------------------"<<endl;
    }
    else{
        cout<<"You have entered a wrong operator"<<endl;

       cout<<"---------------------------------------"<<endl;
    }








    return 0;
}
