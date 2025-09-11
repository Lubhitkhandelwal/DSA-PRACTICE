#include<bits/stdc++.h>
using namespace std;

class Hero{
  int health;

public:
  char name[100];
  char  level;

  int getHealth(){
    return health;
  }

  void setHealth(int h){
    health=h;
  }

// Parametarised constructors
Hero(){
  cout<<"Constructor called"<<endl;
}
Hero(int health){
  cout<<this<<endl;
  this->health=health;
}
Hero(int health,char level){
  this->level=level;
  this->health=health;
}


void print(){
  cout<<"Health: "<<health<<endl;
  cout<<"Level: "<<level<<endl;
}

// copy constructor
Hero (Hero& temp){
  cout<<"Copy constructor called"<<endl;
  this->health=temp.health+1;
  this->level=temp.level+1;
}

};


int main() {

  Hero h5;
  h5.setHealth(10);
  h5.level='A';
  h5.print();

  // Copy constructor
  Hero h3(h5);
  h3.print();




  // Hero h1(10);
  // cout<<"Add: "<<&h1<<endl;
  // h1.getHealth();
  // h1.print();

  // Hero h2(20,'B');
  // h2.print();
  

  
  // Static memory allocation
  
  // Hero h1;
  // strcpy(h1.name, "ramesh");
  // h1.setHealth(100);
  // h1.level='A';

  // cout<<h1.name<<endl;
  // cout<<h1.getHealth()<<endl;
  // cout<<h1.level<<endl;
  
  // cout<<sizeof(h1);

  // Dyanamic memory allocation

  // Hero *b=new Hero;
  // b->setHealth(70);
  // b->level='B';
  // // cout<<(*b).name<<endl;
  // cout<<(*b).getHealth()<<endl;
  // cout<<(*b).level<<endl;

  // // cout<<b->name<<endl;
  // cout<<b->getHealth()<<endl;
  // cout<<b->level<<endl;
}