#include<iostream>
using namespace std;
int main() {
    string name;
    int age;
    float MatricMarksPercentage;
    char grade;
    cout<<"ENTER YOUR NAME: ";
    cin>>name;
    cout<<"ENTER YOUR AGE: ";
    cin>>age;
    cout<<"ENTER THE PERCENTAGE OF YOUR MATRIC MARKS: ";
    cin>>MatricMarksPercentage;
    cout<<"ENTER THE OBTAINED GRADE IN INTERMEDIATE: ";
    cin>>grade;
    cout<<"THIS IS "<<name<<" AND I AM "<<age<<"y OLD. MY MATRIC MARKS PERCENTAGE IS "<<MatricMarksPercentage<<" I OBTAINED "<<grade<<" IN INTERMEDIATE.";
    return 0;
}