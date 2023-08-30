//
// pch.cpp
//
#include "pch.h"
#include <stdio.h>
using namespace std;
class Chandrayan {
private:
	char spacecraft_direction;
	vector<int>spacecraft_position;
public:
	Chandrayan(char dir, vector<int>position) {
		this->spacecraft_direction = dir;
		this->spacecraft_position = position;
	}
    Chandrayan() {

    }
    char getSpacecraftDirection() {
        return spacecraft_direction;
    }
    vector<int>getSpacecraftPosition() {
        return spacecraft_position;
    }
    void move_forward() {
        if (spacecraft_direction == 'N') {
            spacecraft_position[1]++;
        }
        else if (spacecraft_direction == 'S') {
            spacecraft_position[1]--;
        }
        else if (spacecraft_direction == 'E') {
            spacecraft_position[0]++;
        }
        else if (spacecraft_direction == 'W') {
            spacecraft_position[0]--;
        }
        else if (spacecraft_direction == 'U') {
            spacecraft_position[2]++;
        }
        else if (spacecraft_direction == 'D') {
            spacecraft_position[2]--;
        }
    }

    void move_backward() {
        if (spacecraft_direction == 'N') {
            spacecraft_position[1]--;
        }
        else if (spacecraft_direction == 'S') {
            spacecraft_position[1]++;
        }
        else if (spacecraft_direction == 'E') {
            spacecraft_position[0]--;
        }
        else if (spacecraft_direction == 'W') {
            spacecraft_position[0]++;
        }
        else if (spacecraft_direction == 'U') {
            spacecraft_position[2]--;
        }
        else if (spacecraft_direction == 'D') {
            spacecraft_position[2]++;
        }
    }

    void turn_left() {
        if (spacecraft_direction == 'N') {
            spacecraft_direction = 'W';
        }
        else if (spacecraft_direction == 'S') {
            spacecraft_direction = 'E';
        }
        else if (spacecraft_direction == 'E') {
            spacecraft_direction = 'N';
        }
        else if (spacecraft_direction == 'W') {
            spacecraft_direction = 'S';
        }
        else if (spacecraft_direction == 'U') {
            spacecraft_direction = 'W';
        }
        else if (spacecraft_direction == 'D') {
            spacecraft_direction = 'E';
        }

    }

    void turn_right() {
        if (spacecraft_direction == 'N') {
            spacecraft_direction = 'E';
        }
        else if (spacecraft_direction == 'S') {
            spacecraft_direction = 'W';
        }
        else if (spacecraft_direction == 'E') {
            spacecraft_direction = 'S';
        }
        else if (spacecraft_direction == 'W') {
            spacecraft_direction = 'N';
        }
        else if (spacecraft_direction == 'U') {
            spacecraft_direction = 'E';
        }
        else if (spacecraft_direction == 'D') {
            spacecraft_direction = 'W';
        }
    }

    void turn_up() {
        spacecraft_direction = 'U';
    }

    void turn_down() {
        spacecraft_direction = 'D';
    }
    void printConfigurations(){
            cout << "Current Position: (" << spacecraft_position[0] << ", "
                << spacecraft_position[1] << ", " << spacecraft_position[2] << ")" << endl;
            cout << "Current Direction: " << spacecraft_direction << endl;
    }
};
class ExecuteChandrayan {
private:
    Chandrayan *chandrayan;
    vector<char>commands;
public:
    ExecuteChandrayan(Chandrayan *chandrayan,vector<char>commands) {
        this->chandrayan = chandrayan;
        this->commands = commands;
    }
    void execute_commands() {
        for (char command : commands) {
            if (command == 'f') {
                chandrayan->move_forward();
            }
            else if (command == 'b') {
                chandrayan->move_backward();
            }
            else if (command == 'l') {
                chandrayan->turn_left();
            }
            else if (command == 'r') {
                chandrayan->turn_right();
            }
            else if (command == 'u') {
                chandrayan->turn_up();
            }
            else if (command == 'd') {
                chandrayan->turn_down();
            }
            chandrayan->printConfigurations();
        }
    }
};

