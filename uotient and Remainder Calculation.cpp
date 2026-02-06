#include<iostream>
using namespace std;

int main()
{
    int num,reminder, divid, dinum;

    cout<<"Enter the number ";
    cin>>num;
    cout<<"Enter the divided number ";
    cin>>dinum;

    divid=num/dinum;
     reminder= num%dinum;

    cout<<"The divider is : "<<divid<<endl;
    cout<<"The reminder is : "<<reminder<<endl;



    return 0;
}
