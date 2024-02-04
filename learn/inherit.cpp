#include <iostream>
#include <string>

class Humen
{
private:
    std::string _name;
    int *nb;
public:
    Humen(){
        std::cout << "Humen constructor called" << std::endl;
    }

    Humen(std::string name) : _name(name){
        std::cout << "Humen constructor name called" << std::endl;
        nb = new int[10];
        nb[0] = 100;
    }

    virtual ~Humen(){
        std::cout << "Humen destructor called" << std::endl;
        delete[] nb;
    }

    std::string getName(void) const {
        return _name;
    }

    void sayHi(void) const
    {
        std::cout << "Hi I am " << _name << std::endl;
    }

    int getNb(void) const
    {
        return (nb[0]);
    }
};

class Man : public Humen
{
private:
    int *nb;
public:
    Man(std::string name) : Humen(name){
        std::cout << "Men constructor called" << std::endl;
        nb = new int[20];
        nb[0] = 42;
    }
    ~Man() override {
        std::cout << "Men constructor called" << std::endl;
        delete[] nb;
    }
};

int main(void)
{
    Humen *bob = new Man("Bob");
    bob->sayHi();
    std::cout << bob->getName() << " is handsome man" << std::endl;
    std::cout << bob->getNb() << std::endl;
    delete bob;
    return (0);
}
