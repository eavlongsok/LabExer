#include <iostream>

using namespace std;

int main(){
    int age;
    string name;

    cout<<"Enter age: ";
    cin>>age;

    cout<<"Enter name: ";
    cin.ignore();
    getline (cin,name);

    if (age % 2 == 1){
        for (int i = 0; i < 5; i++)
            cout<<name<<endl;
    }
    
    else{
        for (int j = 0; j < 10; j++)
            cout<<name<<endl;
    }

    return 0;
}
