#include <iostream>
#include <cstdlib>
#include <time.h>
#include <thread>
#include <chrono>
using namespace std;

int playerHealth = 100;
int point = 0;

void frontPage();
void instructions();
void chooseLevel();
void beginner();
void intermediate();
void advanced();
void shop();

void frontPage(){
    system("cls");
    cout << " =======================================================\n";
    cout << "|\t\tWELCOME TO MATH QUEST\t\t\t|\n";
    cout << " =======================================================\n";
    cout << "| Menu:\t\t\t\t\t\t\t|\n";
    cout << "| 1. Play\t\t\t\t\t\t|\n";
    cout << "| 2. Instructions\t\t\t\t\t|\n";
    cout << "| 3. shop\t\t\t\t\t\t|\n";
    cout << "| 4. Exit\t\t\t\t\t\t|\n";
    cout << " =======================================================\n";
    
    int input;
    cout << "-> ";
    cin >> input;

    switch (input)
    {
    case 1 :
        chooseLevel();
        break;
    
    case 2 :
        instructions();
        break;

    case 3:
        shop();
        break;

    default:
        system("cls");
        break;
    }
}

void instructions(){
    system("cls");
    cout << " =======================================================\n";
    cout << "|\t\t\tINSTRUCTIONS\t\t\t|\n";
    cout << " =======================================================\n";
    cout << "| 1. At front page, choose play\t\t\t\t|\n";
    cout << "| 2. Choose level\t\t\t\t\t|\n";
    cout << "| 3. Answer math questions\t\t\t\t|\n";
    cout << "| 4. If your answer is correct, the monster's HP will be decreased\t|\n";
    cout << "|    Otherwise, your HP will be decreased\t\t|\n";
    cout << "| 5. You can buy potion to regain your HP\t\t|\n";
    cout << " =======================================================\n";
    cout << "| Finish reading?\t\t\t\t\t|\n";
    cout << "| 1. Back to front page\t\t\t\t\t|\n";
    cout << "| 2. Exit\t\t\t\t\t\t|\n";
    cout << " =======================================================\n";

    int input;
    cout << "-> ";
    cin >> input;

    switch (input)
    {
    case 1 :
        frontPage();
        break;
    
    default:
        system("cls");
        break;
    }
}

void chooseLevel(){
    system("cls");
    cout << " =======================================================\n";
    cout << "|\t\t\tCHOOSE LEVEL\t\t\t|\n";
    cout << " =======================================================\n";
    cout << "| 1. Beginner\t\t\t\t\t\t|\n";
    cout << "| 2. Intermediate\t\t\t\t\t|\n";
    cout << "| 3. Advanced\t\t\t\t\t\t|\n";
    cout << "| 4. Back to Front Page\t\t\t\t\t|\n";
    cout << "| 5. Exit\t\t\t\t\t\t|\n";
    cout << " =======================================================\n";

    int input;
    cout << "-> ";
    cin >> input;

    switch (input)
    {
    case 1 :
        beginner();
        break;
    
    case 2 :
        intermediate();
        break;
    
    case 3 :
        advanced();
        break;

    case 4 :
        frontPage();
        break;

    default:
        system("cls");
        break;
    }
}

void beginner(){
    system("cls");

    int monsterHealth = 100;

    while(playerHealth > 0 && monsterHealth > 0){
        int num1, num2, ans, total, choice;
        srand(time(0));
        num1 = (rand() % 11) + 1;
        num2 = (rand() % 11) + 1;

        choice = (rand()%3)+1;

        switch (choice)
        {
            case 1:
                cout << "What is " << num1 << " + " << num2 << "?" << endl;
                cin >> ans;

                if (ans == num1+num2){
                    cout << "Correct answer\n";
                    monsterHealth -= 20;
                    cout << "HP Monster\t: " << monsterHealth << endl;
                    cout << "HP Player\t: " << playerHealth << endl;
                } else {
                    cout << "Wrong answer\n";
                    playerHealth -= 10;
                    cout << "HP Monster\t: " << monsterHealth << endl;
                    cout << "HP Player\t: " << playerHealth << endl;
                }
                break;
    
            case 2:
                cout << "What is " << num1 << " - " << num2 << "?" << endl;
                cin >> ans;

                if (ans == num1-num2){
                    cout << "Correct answer\n";
                    monsterHealth -= 20;
                    cout << "HP Monster\t: " << monsterHealth << endl;
                    cout << "HP Player\t: " << playerHealth << endl;
                } else {
                    cout << "Wrong answer\n";
                    playerHealth -= 10;
                    cout << "HP Monster\t: " << monsterHealth << endl;
                    cout << "HP Player\t: " << playerHealth << endl;
                }
                break;
        }

        if (playerHealth <= 0){
            cout << "No, You Lose!\t:(\n";
            cout << "Your Last Point\t: " << point << endl;
        }
        if (monsterHealth <= 0){
            point += 5;
            cout << "You Win! :D\n";
            cout << "You Have\t: " << point << " points\n";

            cout << "Choose (1) To Go To Shop Or (2) To Choose Level Again\n";
            int input;
            cout << "-> ";
            cin >> input;
            switch (input)
            {
            case 1:
                shop();
                break;
            
            case 2:
                chooseLevel();
                break;
                
            default:
                system("cls");
                break;
            }
        }

    }
}

void intermediate(){
    system("cls");
    int monsterHealth = 100;
 
    while(playerHealth > 0 && monsterHealth > 0){
        int num1, num2, ans, total, choice;
        srand(time(0));
        num1 = (rand() % 90)+ 10;
        num2 = (rand() % 90)+ 10;

        choice = (rand()%3)+1;

        switch (choice)
        {
            case 1:
                cout << "What is " << num1 << " + " << num2 << "?" << endl;
                cin >> ans;

                if (ans == num1+num2){
                    cout << "Correct answer\n";
                    monsterHealth -= 20;
                    cout << "HP Monster\t: " << monsterHealth << endl;
                    cout << "HP Player\t: " << playerHealth << endl;
                } else {
                    cout << "Wrong answer\n";
                    playerHealth -= 10;
                    cout << "HP Monster\t: " << monsterHealth << endl;
                    cout << "HP Player\t: " << playerHealth << endl;
                }
                break;
    
            case 2:
                cout << "What is " << num1 << " - " << num2 << "?" << endl;
                cin >> ans;

                if (ans == num1-num2){
                    cout << "Correct answer\n";
                    monsterHealth -= 20;
                    cout << "HP Monster\t:" << monsterHealth << endl;
                    cout << "HP Player\t: " << playerHealth << endl;
                } else {
                    cout << "Wrong answer\n";
                    playerHealth -= 10;
                    cout << "HP Monster\t: " << monsterHealth << endl;
                    cout << "HP Player\t: " << playerHealth << endl;
                }
                break;


        }

        if(playerHealth <= 0){
            cout << "No, You Lose!\t:(\n";
            cout << "Your Last Point\t: " << point << endl;
        }
        if(monsterHealth <= 0){
            point += 15;
            cout << "You Win! :D\n";
            cout << "You Have\t: " << point << " points\n";

            cout << "Choose (1) To Go To Shop Or (2) To Choose Level Again\n";
            int input;
            cout << "-> ";
            cin >> input;
            switch (input)
            {
            case 1:
                shop();
                break;
            
            case 2:
                chooseLevel();
                break;

            default:
                break;
            }
        }

    }
}

void advanced(){
    system("cls");
    int monsterHealth = 100;
 
    while(playerHealth > 0 && monsterHealth > 0){
        int num1, num2, ans, total, choice;
        srand(time(0));
        num1 = (rand() % 900)+ 100;
        num2 = (rand() % 900)+ 100;

        choice = (rand()%3)+1;

        switch (choice)
        {
            case 1:
                cout << "What is " << num1 << " + " << num2 << "?" << endl;
                cin >> ans;

                if (ans == num1+num2){
                    cout << "Correct answer\n";
                    monsterHealth -= 20;
                    cout << "HP Monster\t: " << monsterHealth << endl;
                    cout << "HP Player\t: " << playerHealth << endl;
                } else {
                    cout << "Wrong answer\n";
                    playerHealth -= 10;
                    cout << "HP Monster\t: " << monsterHealth << endl;
                    cout << "HP Player\t: " << playerHealth << endl;
                }
                break;
    
            case 2:
                cout << "What is " << num1 << " - " << num2 << "?" << endl;
                cin >> ans;

                if (ans == num1-num2){
                    cout << "Correct answer\n";
                    monsterHealth -= 20;
                    cout << "HP Monster\t:" << monsterHealth << endl;
                    cout << "HP Player\t: " << playerHealth << endl;
                } else {
                    cout << "Wrong answer\n";
                    playerHealth -= 10;
                    cout << "HP Monster\t: " << monsterHealth << endl;
                    cout << "HP Player\t: " << playerHealth << endl;
                }
                break;


        }

        if(playerHealth <= 0){
            cout << "No, You Lose!\t:(\n";
            cout << "Your Last Point\t: " << point << endl;
        }
        if(monsterHealth <= 0){
            point += 25;
            cout << "You Win! :D\n";
            cout << "You Have\t: " << point << " points\n";

            cout << "Choose (1) To Go To Shop Or (2) To Choose Level Again\n";
            int input;
            cout << "-> ";
            cin >> input;
            switch (input)
            {
            case 1:
                shop();
                break;
            
            case 2:
                chooseLevel();
                break;

            default:
                break;
            }
        }

    }
}

void shop(){
    system("cls");
    cout << " =======================================================\n";
    cout << "|\t\t     WELCOME TO SHOP     \t\t|\n";
    cout << "|\t\t\tPoints: " << point << "\t\t\t|\n";
    cout << " =======================================================\n";
    cout << "| What do you want to buy?\t\t\t\t|\n";
    cout << "| 1. Mini potion (+10 HP)\t: 7 points\t\t|\n";
    cout << "| 2. Medium potion (+20 HP)\t: 13 points\t\t|\n";
    cout << "| 3. Large potion (+40 HP)\t: 25 points\t\t|\n";
    cout << "| 4. Choose Level \t\t\t\t\t|\n";
    cout << "| 5. Back to Front Page\t\t\t\t\t|\n";
    cout << "| 6. Exit\t\t\t\t\t\t|\n";
    cout << " =======================================================\n";
    
    int input;
    cout << "-> ";
    cin >> input;

    switch (input)
    {
    case 1 :
        if (point < 7){
            cout << "You don't have enough points\n";
            this_thread::sleep_for(chrono::seconds(2));
            shop();
        } else{
            playerHealth += 10;
            point -= 7;
            cout << "Points\t\t: " << point << endl;
            cout << "Player Health\t: " << playerHealth << endl;
            shop();
        }
        break;
    
    case 2 :
        if (point < 13){
            cout << "You don't have enough points\n";
            this_thread::sleep_for(chrono::seconds(2));
            shop();
        } else{
            playerHealth += 20;
            point -= 7;
            cout << "Points\t\t: " << point << endl;
            cout << "Player Health\t: " << playerHealth << endl;
            shop();
        }
        break;
    
    case 3 :
        if (point < 25){
            cout << "You don't have enough points\n";
            this_thread::sleep_for(chrono::seconds(2));
            shop();
        } else{
            playerHealth += 40;
            point -= 7;
            cout << "Points\t\t: " << point << endl;
            cout << "Player Health\t: " << playerHealth << endl;
            shop();
        }
        break;

    case 4 :
        chooseLevel();
        break;
    
    case 5 :
        frontPage();
        break;

    default:
        system("cls");
        break;
    }
}

int main(){
    frontPage();
    
    return 0;
}