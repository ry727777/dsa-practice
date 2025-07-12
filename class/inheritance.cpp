#include<iostream>
using namespace std;

class Animal{
    private:
    int legs;
    string talkSound;
    string food;
    string name;
    public:
    Animal(int x, string talk, string eat, string name){
        legs = x;
        this->talk = talk;
        this->eat = eat;
        this->name = name;
    }
    void walk(){
        cout<<name<<" have "<<legs<<" legs."<<endl;
    }
    void talk(){
        cout<<name<<" says: "<<talk<<endl;
    }
    void eat(){
        cout<<name<<" eats: "<<eat<<endl;
    }
}
class Dog: public Animal{
  private:
  int legs;
  strin
}

class Cat: public Animal{

}

int main(){

}