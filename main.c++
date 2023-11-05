#include <iostream>
#include <string.h>

class Client {
    public:
        Client() {
            printf("Hello Dog");
        }

        void createAcount() {
            printf("\nYou Selected Create an Acount, Tell the Name of the Client: ");
            scanf("%s", name);
        }

        void addMoney() {
            
        }

        void removeMoney() {

        }

    private:
        int money, age;
        std::string name, gender, socialClass;
};

int main() {
    int test;

    Client cl01;
    cl01.createAcount();

    return 0;
}