#include <iostream>
#include <string>
using namespace std;

class Human {
    private:         //the private keyword in a class definition
        int Age;
        string Name;

    public:
        Human() {   // constructor that gets called when a class is instantiated. 
                    // This constructor doesn't take any arguments. This is called the default constructor.
                    // Constructors are handy to initialize variables that you may have forgotten to set.
            Age = 0;
            cout << "New human class instance created." << endl;
        };

        Human(string newName) { // just like normal functions constructors can be overloaded.
            Name = newName;     // This one takes a value for a name for instance.
            Age = 0;
            cout << "New human class instance created with name " << Name << "." << endl;
        };

        Human(string newName, int newAge) { // This one takes a value for a name and age.
            Name = newName;     
            Age = newAge;
            cout << "New human class instance created with name " << Name << " and age " << Age << "." << endl;
        };

        void setName(string new_name) { //NOTE: do NOT make the mistake of naming the argument 
            Name = new_name;            //the same as the property you are trying to set they 
        };                              //will just override each other.

        void setAge(int new_age) {
            Age = new_age;
        };

        void introduceSelf() {
            cout << "Hi my name is " << Name << " and my age is " << Age << endl;
        };
};

class Animal {
    private:
        string Species;

    public:
        Animal(string newSpecies) { // in this case a default constructor is not implemented so 
            Species = newSpecies;   // Animal must be instantiated with a string variable setting the species.
                                    // Although some compilers will not error out and just do it.
            cout << "A new Animal of species " << Species << " is created." << endl;
        };
};

int main() {
    Human Robin;            //instanciate a basic class through declaring the class type and naming it.

    Robin.setName("Robin"); //Methods and properties are accessed by naming the class instance, then a
    Robin.setAge(23);       //dot and then the name of the member you want to call.
    //Robin.Age = 23        This will fail as Age is a private member of Human.
    Robin.introduceSelf();

    Animal Loeki("Dog");

    Human* pHarry = new Human; //if you want to access a class instance through a pointer you do it like this.
    pHarry->setName("Harry");
    //pHarry->setAge(55);
    pHarry->introduceSelf();
    delete pHarry; // Delete harry again.

    Human David("David");   // An overloaded constructor is called setting only his name and initialize his age.
    David.introduceSelf();

    Human Clarence("Clarence", 5);    // Time a different overloaded constructor is called setting both name and age.
    Clarence.introduceSelf();

    return 0;
};
