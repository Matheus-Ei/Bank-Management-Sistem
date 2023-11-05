#include <iostream>
#include <string.h>

int menu();

class Client {
    public:
        Client() {
            printf("\nNew Object Client Created");
        }

        void createAcount() {
            if(acount == false) {
                printf("\nYou Selected Create an Acount, Tell the Name of the Client: ");
                acount = true;
                scanf("%s", name);
            }
            else {
                printf("\nThis Client Already has an Acount!");
            }
        }

        void addMoney() {
            if(acount == true) {
                int tempMoney=0;
                printf("\nYou Selected Add Money in an Acount, Tell the Amount of Money that you Want Add: ");
                scanf("%d", &tempMoney);

                money = money + tempMoney;
            }
            else {
                printf("\nThis Client Dont Have an Acount Yet");
            }
        }

        void removeMoney() {
            if(acount == true) {
                int tempMoney=0;
                printf("\nYou Selected Remove Money of your Acount, Tell the Amount of Money that you Want Remove: ");
                scanf("%d", &tempMoney);

                if(tempMoney > money) {
                    printf("\nYou Dont Have enough Money to Remove this Amount");
                }
                else{
                    money = money - tempMoney;
                }
            }
            else {
                printf("\nThis Client Dont Have an Acount Yet");
            }
        }

    private:
        int money=0, age;
        bool acount=false;
        std::string name, gender, socialClass;
};

int main() {
    int test;

    Client cl01;

    while(true) {
        int selection = menu();

        switch(selection) {
            case 0:
                cl01.createAcount();
                break;
            case 1:
                cl01.addMoney();
                break;
            case 2:
                cl01.removeMoney();
                break;
        }
    }

    return 0;
}

int menu() {
    int selection;

    printf("\n\n --> Menu <--");
    printf("\n 0 - Create an Acount to the Client");
    printf("\n 1 - Add Money to the Acount of the Client");
    printf("\n 2 - Remove Money of the Client Acount");
    printf("\nSelect the Number of your option --> ");

    scanf("%d", &selection);

    return selection;
}