#include<iostream>
using namespace std;
class Test
{
public:

    Test()
    {
        cout << "C\n";
    }

    ~Test()
    {
        cout << "D\n";
    }
};

class Student{
    public:
    int age;
    Student(int a){
        age=a;
    }
    Student(){
        cout<<"constructor called"<<endl;
    }
};
int main(){
    Test t1;

    {
        Test t2;
    }

    Test t3;
    Student s1(20);
    cout<<s1.age<<endl;
    return 0;
}