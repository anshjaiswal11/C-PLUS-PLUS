// #include <iostream>
// #include<vector>
// using namespace std;

// class Solution {
// public:
//     void sortColors(vector<int>& nums) {
//         int zeros = 0, ones = 0, n = nums.size();
//         for(int num : nums) {
//             if(num == 0) zeros++;
//             else if(num == 1) ones++;
//         }  

//         for(int i = 0; i < zeros; i++) {
//             nums[i] = 0;
//         }

//         for(int i = zeros; i < zeros + ones; i++) {
//             nums[i] = 1;
//         }

//         for(int i = zeros + ones; i < n; i++) {
//             nums[i] = 2;
//         }
//     }
// };

// int main() {
//     Solution instance;
//     vector<int> nums = {0,2,1,1,2,0,1,0};
//     instance.sortColors(nums);

//     for(int num : nums) {
//         cout << num << " ";
//     }

//     return 0;
// }


// using vectors we solve the question 
#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <cstdlib>

using namespace std;

class Player {
private:
    string name;
    int health;
    int ammo;
public:
    Player(string n) {
        name = n;
        health = 100;
        ammo = 10;
    }

    void displayInfo() {
        cout << "Player Name: " << name << endl;
        cout << "Health: " << health << endl;
        cout << "Ammo: " << ammo << endl;
    }

    void takeDamage(int damage) {
        health -= damage;
        if (health < 0) {
            health = 0;
        }
    }

    void heal(int healAmount) {
        health += healAmount;
        if (health > 100) {
            health = 100;
        }
    }

    void shoot() {
        if (ammo > 0) {
            ammo--;
            cout << name << " shoots!" << endl;
        } else {
            cout << name << " is out of ammo!" << endl;
        }
    }

    bool isAlive() {
        return health > 0;
    }
};

class Game {
private:
    vector<Player> players;
public:
    Game(Player p1, Player p2) {
        players.push_back(p1);
        players.push_back(p2);
    }

    void startGame() {
        srand(time(0));
        while (true) {
            for (Player& p : players) {
                int action = rand() % 3;
                if (action == 0) {
                    p.heal(10);
                    cout << p.getName() << " heals for 10 health!" << endl;
                } else if (action == 1) {
                    p.shoot();
                    if (p.isAlive()) {
                        int damage = rand() % 20 + 1;
                        players[1 - players.indexOf(p)].takeDamage(damage);
                        cout << p.getName() << " hits " << players[1 - players.indexOf(p)].getName() << " for " << damage << " damage!" << endl;
                    }
                } else {
                    cout << p.getName() << " does nothing this turn." << endl;
                }
                p.displayInfo();
                cout << endl;
                if (!players[0].isAlive() ||!players[1].isAlive()) {
                    break;
                }
            }
        }
        if (players[0].isAlive()) {
            cout << players[0].getName() << " wins!" << endl;
        } else {
            cout << players[1].getName() << " wins!" << endl;
        }
    }

    int indexOf(Player p) {
        for (int i = 0; i < players.size(); i++) {
            if (&p == &players[i]) {
                return i;
            }
        }
        return -1;
    }
};

int main() {
    Player p1("Player 1");
    Player p2("Player 2");
    Game game(p1, p2);
    game.startGame();
    return 0;
}