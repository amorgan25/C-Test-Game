#include <iostream>
#include <string>
using namespace std;

class profile
{
    public: 
        string name;
        int health = 100;
        bool alive = true;
};

int main()
{
    profile person;
    char answer;

    cout << "Hello! Welcome to the C test game! What is your name?" << endl;
    cin >> person.name;
    cout << "I see. " <<"Welcome " << person.name <<". Let the game begin!" << endl;
    cout << "You wake up in your small loft. To your surprise, you see a small man sitting on a rocking chair in the corner of the room. Do you go up to him? (y/n)" << endl;
    cin >> answer;

    switch(answer)
    {
        case 'y':
            cout << "I see you've awakened. You have a lot to learn, young one." << endl;
            break;
        case 'n':
            cout << "You ignore him and go about your day. The rest of your life goes by peacefully." << endl;
            break;
        default:
            cout << "Invalid answer!" << endl;
    }

    return 0;
}