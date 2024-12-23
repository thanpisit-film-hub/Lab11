#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>
#include<string>
int main(){
    std::string _grade;
    std::cout << "Press Enter 3 times to reveal your future." << std::endl;
    srand(time(0));
    for(int i = 0; i < 3;i++){
        std::cin.get();
    }
    int _num = rand()%9;
    if(_num == 0) _grade = "A";
    else if (_num == 1) _grade = "B+";
    else if (_num == 2) _grade = "B";
    else if (_num == 3) _grade = "C+";
    else if (_num == 4) _grade = "C";
    else if (_num == 5) _grade = "D+";
    else if (_num == 6) _grade = "D";
    else if (_num == 7) _grade = "F";
    else _grade = "W";

    std::cout << "You will get " << _grade << " in this 261102.";

    return 0;
}