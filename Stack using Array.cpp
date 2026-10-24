#include<iostream>
using namespace std;

int el;
int arr[5];
int top=-1;

void push()
{

    if(top==5-1)
    {
        cout<<"OverFlow!";
        return;
    }
    cout<<"Enter element of the Array : ";
    cin>>el;


    top++;
    arr[top]=el;
    cout<<"Pushed :"<<el<<endl;
}

void pop()
{

    if(top==-1)
    {
        cout<<"Underflow!";
        return;
    }
    int temp=arr[top];
    top--;

    cout<<"Removed : "<<temp<<endl;

}

void peek()
{
    if(top==-1)
    {
        cout << "Underflow! Stack is empty." << endl;
        return;
    }
    cout<<"Top value :"<<top;
    cout<<"Peek item : "<<arr[top]<<endl;
}

void Display()
{
cout<<"Stack :";
    for(int i=top; i>=0; i--)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int ch;
    do
    {
        cout<<"Enter your choice :";
        cin>>ch;
        switch(ch)
        {

        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            peek();
            break;
        case 4:
            Display();
            break;
        default :
            cout<<"Invalid Number !!";
            break;
        }
    }
    while(ch!=0);



    return 0;
}
