#include<bits/stdc++.h>
using namespace std;

struct Person{
  int rollNo;
  char name[50];
  double marks;
};

void Display(Person p){
  cout<<"\n\nDisplaying Information via function\n";
  cout<<"Name :"<<p.name<<endl;
  cout<<"Roll :"<<p.rollNo<<endl;
  cout<<"Marks :"<<p.marks<<endl;
};

Person* getData(Person* p){
  cout<<"Enter Details in function\n";
  cin.get(p->name,50);
  cin>>p->rollNo;
  cin>>p->marks;

  return p;
}

int main() {
  Person person1;

  cout<<"Enter Details\n";
  cin.get(person1.name,50);
  cin>>person1.rollNo;
  cin>>person1.marks;

  /* Plain Printing ------ first */
  cout<<"Displaying Information\n";
  cout<<"Name :"<<person1.name<<endl;
  cout<<"Roll :"<<person1.rollNo<<endl;
  cout<<"Marks :"<<person1.marks<<endl;

  /* Printing via function ------- second */
  Display(person1);

  /* Structure to pointer ------- second */
  Person *person2;
  Person  person3;

  person2 = getData(&person3);

  cout<<"\n\nDisplaying Information via pointer\n";
  cout<<"Name :"<<(person2->name)<<endl;
  cout<<"Roll :"<<(person2->rollNo)<<endl;
  cout<<"Mark :"<<(person2->marks)<<endl;

  return 0;
}