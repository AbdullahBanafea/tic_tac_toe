#include <iostream>
using namespace std;
char n1 = '1';
char n2 = '2';
char n3 = '3';
char n4 = '4';
char n5 = '5';
char n6 = '6';
char n7 = '7';
char n8 = '8';
char n9 = '9';

void draw();
void replace(int, int);
bool notAgain(int i);
bool winner();
int main()
{
    int i;
    char x;
    for(int round = 0; round < 9; round++){
        if(round % 2 == 0)
            cout << "X turn:" << endl;
        else
            cout << "O turn:" << endl;

        draw();

        cout << "enter one number from 1 to 9: ";
        cin >> i;

        while(i < 1 || i > 9){
            cout << "enter one number from 1 to 9, try again: ";
            cin >> i;
        }

        while(!notAgain(i)){
            while(i < 1 || i > 9){
            cout << "enter one number from 1 to 9, try again: ";
            cin >> i;
            }
             cout << "the number is already used, try another number: ";
             cin >> i;
        }
        replace(i, round);
        cout << endl;

        if(winner())
            break;

        if(round == 8){
            cout << "Draw!" << endl;
            cout << "run the program to play again" << endl;
            cout << "Good luck for the next time!" << endl;
        }
    }
    draw();
return 0;
}

void draw(){

cout << "\t" << n1 << "\t|"  "\t" << n2 << "\t|" "\t" << n3 << endl;
cout << "--------------------------------------------------" << endl;
cout << "\t" << n4 << "\t|" "\t" << n5 << "\t|" "\t" << n6 << endl;
cout << "--------------------------------------------------" << endl;
cout << "\t" << n7 << "\t|" "\t" << n8 << "\t|" "\t" << n9 << endl;
}

void replace (int i, int round){

    if (round % 2 == 0){
        switch(i){
            case 1:
                n1 = 'x';
                break;
            case 2:
                n2 = 'x';
                break;
            case 3:
                n3 = 'x';
                break;
            case 4:
                n4 = 'x';
                break;
            case 5:
                n5 = 'x';
                break;
            case 6:
                n6 = 'x';
                break;
            case 7:
                n7 = 'x';
                break;
            case 8:
                n8 = 'x';
                break;
            case 9:
                n9 = 'x';
                break;
        }
    }
    else {
        switch(i){
            case 1:
                n1 = 'o';
                break;
            case 2:
                n2 = 'o';
                break;
            case 3:
                n3 = 'o';
                break;
            case 4:
                n4 = 'o';
                break;
            case 5:
                n5 = 'o';
                break;
            case 6:
                n6 = 'o';
                break;
            case 7:
                n7 = 'o';
                break;
            case 8:
                n8 = 'o';
                break;
            case 9:
                n9 = 'o';
                break;
        }
    }
}

bool notAgain(int i){
    switch(i){
        case 1:
            if(n1 == '1')
                return true;
            break;
        case 2:
            if(n2 == '2')
                return true;
            break;
        case 3:
            if(n3 == '3')
                return true;
            break;
        case 4:
            if(n4 == '4')
                return true;
            break;
        case 5:
            if(n5 == '5')
                return true;
            break;
        case 6:
            if(n6 == '6')
                return true;
            break;
        case 7:
            if(n7 == '7')
                return true;
            break;
        case 8:
            if(n8 == '8')
                return true;
            break;
        case 9:
            if(n9 == '9')
                return true;
            break;
    return false;
    }
}

bool winner(){
    bool w1 = (n1 == 'x' && n2 == 'x' && n3 == 'x');
    bool w2 = (n4 == 'x' && n5 == 'x' && n6 == 'x');
    bool w3 = (n7 == 'x' && n8 == 'x' && n9 == 'x');
    bool w4 = (n1 == 'x' && n4 == 'x' && n7 == 'x');
    bool w5 = (n2 == 'x' && n5 == 'x' && n8 == 'x');
    bool w6 = (n3 == 'x' && n6 == 'x' && n9 == 'x');
    bool w7 = (n1 == 'x' && n5 == 'x' && n9 == 'x');
    bool w8 = (n3 == 'x' && n5 == 'x' && n7 == 'x');

    if(w1 || w2 || w3 || w4 || w5 || w6 || w7 || w8){
        cout << "X is the winner" << endl;
        cout << "run the program again to play" << endl;
        cout << "Good luck!" << endl;
        return true;
    }

    bool w11 = (n1 == 'o' && n2 == 'o' && n3 == 'o');
    bool w22 = (n4 == 'o' && n5 == 'o' && n6 == 'o');
    bool w33 = (n7 == 'o' && n8 == 'o' && n9 == 'o');
    bool w44 = (n1 == 'o' && n4 == 'o' && n7 == 'o');
    bool w55 = (n2 == 'o' && n5 == 'o' && n8 == 'o');
    bool w66 = (n3 == 'o' && n6 == 'o' && n9 == 'o');
    bool w77 = (n1 == 'o' && n5 == 'o' && n9 == 'o');
    bool w88 = (n1 == 'o' && n5 == 'o' && n7 == 'o');

    if(w11 || w22 || w33 || w44 || w55 || w66 || w77 || w88){
        cout << "O is the winner" << endl;
        cout << "run the program again to play" << endl;
        cout << "Good luck!" << endl;
        return true;
    }
}
