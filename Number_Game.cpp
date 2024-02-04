#include<bits/stdc++.h>
using namespace std;

void random(int guessed_number, int lower, int upper){
    cout << "1. You will get 5 chance to guess the number" << endl;
    cout << "2. If you guess the right number you will win the game" << endl;
    cout << "3. Certain hint will be given after each guess" << endl;
    cout << "4. Guess the number between " << lower << " to " << upper << endl;
    
    int number;
    
    for(int i=1 ; i<=5 ; i++){
        cout << "Guess the number" << endl;
        cin >> number;
        
        if(number==guessed_number){
            cout << "Congrates, You win the Game" << endl;
            break;
        }
        if(i<5){
            if(number>guessed_number){
                cout << "The number is less than " << number <<endl;
            }
            else{
                cout << "The number is more than " << number <<endl;
            }

            if(i<4){
                cout << "Only " << 5-i << " chance is remaining" << endl;
            }
            else{
                cout << "Guess the exact Number because this is the last chance" << endl;
            }
        }
    }
    
    if(number!=guessed_number){
        cout << "Sorry, you lose the game" << endl;
        cout << "The number is " << guessed_number <<endl;
    }
}

int main(){
    int lower_limit;
    int upper_limit;
    
    cout << "Play the game according to the given instruction" << endl;
    cout << "Enter the range of Number to be guessed" << endl;
    cout << "Enter the lower bound" << endl;
    cin >> lower_limit;
    cout << "Enter the upper bound" << endl;
    cin >> upper_limit;
    
    srand(time(NULL));
    int guessed_number = (rand() % (upper_limit-lower_limit+1)) + lower_limit;
    random(guessed_number,lower_limit,upper_limit);
}