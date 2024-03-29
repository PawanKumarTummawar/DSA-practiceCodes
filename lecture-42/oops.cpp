// #include<iostream>
// #include "hero.cpp"

// using namespace std;

// int main() {

//     hero h1;  // yeh object hai of class hero
//               // int type hi store kr skta hai
              
//    return 0;

// }

#include<iostream>
#include <cstring>

using namespace std;

class Hero {  // yeh humne ek class bna diya

    private:
    int health ;  // data member hai iss class ka 

    public:
    char *name; // name pointer bna liya 
    char level; 
    static int timeToComplete;

    Hero() {
        cout << "Default Constructor called: " << endl;
        name = new char[100];  //dynamically array allocate kr dia
    }

    void print(){
        cout << this->name << endl; 
        cout << this->health << endl;
        cout << this->level << endl;
    }

    // khud ka bnaya hua copy constructor
    Hero(Hero &temp){

        char *ch = new char[strlen(temp.name) + 1];
        strcpy(ch, temp.name);
        this->name = ch;

        cout << "Hello there, this constructor has been called" << endl;
        this->health = temp.health;
        this->level = temp.level;
    }

    //parameterized constructor
    Hero(int health, char level){ // khud k naam se hi banta hai constructor uska system hi aisa hai 
       this -> health = health;   // health aiyi hai as a input // this original walle health mai ayi hui value daal dega
        this -> level = level;
    }  
    // getter - setter ka use 
    int getHealth(){  // iske madad se hum private walli chize bhi bahar access kr skte hai
        return health;
    }

    char getLevel() {
        return level;
    }

    void setHealth (int h){  //we can set the values by using setter
        health = h;
    }

    void setLevel (char a){
        level = a;
    }

    void setName(char name[]) {
        strcpy(this->name, name);
    }

    static int random() {  // static function sirf static members ko hi access kr skta hai
        return timeToComplete;
    }

    ~Hero() {
        cout << "Destructor Bhai called " << endl;
    }
    };

int Hero::timeToComplete = 5;

int main() {

    // << Hero::timeToComplete << endl;
    cout << Hero::random() << endl;

















    // Hero hero1;
    // hero1.setHealth(11);
    // hero1.setLevel('D');
    // char name[11] = "Pawankumar";
    // hero1.setName(name);

    // hero1.print();


    // // use of default copy constructor --> shallow copy krta hai -- same memory ko access krre hai
    // Hero hero2(hero1);
    // hero2.print();

    // hero1.name[0] = 'G';
    // hero1.print();

    // hero2.print();

    // // copy assignment operator
    // hero1 = hero2;
    // hero1.print();

    // hero2.print();



    // Hero s(1000, 'j');
    // s.print();

    // Hero r(s);
    // r.print();

    // Hero Ramesh(100, 'Z');  // yeh object hai of class hero, // int type hi store kr skta hai

    // static allocation
    // Ramesh.health = 100;
    // Ramesh.level = 'v';      
    // Ramesh.setHealth(40);
    // Ramesh.setLevel('A');
    // cout << Ramesh.getHealth() << endl;
    // cout << Ramesh.getLevel() << endl;

    // // Dynamic allocation
    // Hero *b = new Hero; // pointer bhi same hona chaiye class jaisa
    // b->setHealth(70);
    // b->setLevel('G');

    // // access krne k 2 tarike niche diye hue hai
    // cout << (*b).getHealth() << endl;
    // cout << (*b).getLevel() << endl;

    // cout << b->getHealth() << endl;
    // cout << b->getLevel() << endl;

    // return 0;

}