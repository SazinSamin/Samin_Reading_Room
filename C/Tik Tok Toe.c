//Tik Toc Toe   @1.2.2021
//You can play this game with your keyboard numpad 
//The game will transfer your input to corresponding real position. Like ->
// 7 8 9           1 2 3
// 4 5 6  ------>  4 5 6
// 1 2 3           7 8 9



#include <stdio.h>
//macro declearation
#define A 88
#define B 48
#define GAP 95

//all function declearation
void Display(int array[]);
int MapKeyBoardInput(int data);
int Math(int array[]);
int AllPostionCheck(int array[]);
int Check(int array[]);


//main body
int main(){
        int array[9];
        for (int i = 0; i < 9; i++)
                array[i] = GAP;
        int i = 0;
        int player1 = 0;
        int player2 = 0;
        int range = 9;
        Display(array);

        do{
                
                
                printf("\n\n");
                //Increment i until hit 9, as out matrix is 3x3.
                i += 1;
                
                //Player 1 input process
                printf("\nPlayer X: ");
                scanf("%d", &player1);
                player1 = MapKeyBoardInput(player1);
                
                //If one player already hold the position
                if (array[player1] != GAP){
                        printf("\nPosition has already occupied\n Input again to another position: ");
                        scanf("%d", &player1);
                        player1 = MapKeyBoardInput(player1);
                }
                
                printf("\n");
                array[player1] = A;
                Display(array);
                if (Check(array)) break;

                
                //Player 2 input process
                printf("\n\nPlayer 0: ");
                scanf("%d", &player2);
                player2 = MapKeyBoardInput(player2);
                
                //If one player already hold the position
                if (array[player2] != GAP){
                        printf("\nPosition has already occupied\n Input again to another position: ");
                        scanf("%d", &player2);
                        player2 = MapKeyBoardInput(player2);
                }
                
                printf("\n");
                array[player2] = B;
                Display(array);
                if (Check(array)) break;

        } while (i < 9);
}


//This function is the game engine, check one of two player can able to match the pattern for win the game.
int Math(int array[]){

        for (int i = 0; i < 9; i += 3){
                if (array[i] == A && array[(i + 1)] == A && array[(i + 2)] == A){
                        return A;
                }
                if (array[i] == B && array[(i + 1)] == B && array[(i + 2)] == B){
                        return B;
                }
        }

        int x = 0;
        for (int i = 0; i < 3; i++){
                if (array[i] == A && array[(i + 3)] == A && array[(i + 6)] == A){
                        return A;
                }
                if (array[i] == B && array[(i + 3)] == B && array[(i + 6)] == B){
                        return B;
                }
        }

        int i = 0;
        if (array[i] == A && array[(i + 4)] == A && array[(i + 8)] == A){
                return A;
        }
        if (array[i] == B && array[(i + 4)] == B && array[(i + 8)] == B){
                return B;
        }

        i = 2;
        if (array[i] == A && array[(i + 2)] == A && array[(i + 4)] == A){
                return A;
        }

        if (array[i] == B && array[(i + 2)] == B && array[(i + 4)] == B){
                return B;
        }
        return -1;
}


//If all position of the box has has occupied or no position left, then it return 1, else it return 0.
int AllPostionCheck(int array[]){
        for (int i = 0; i < 9; i++){
                //If any position still have gap means, the full board has not occupied completely.
                if (array[i] == GAP){
                        return 0;
                }
        }
        return 1;
}


//Check the game status.
int Check(int array[]){
        //If all position has occupied & no one wins, then game has draw.
        if (AllPostionCheck(array)){
                printf("\nGame End ---------------------------");
                return 1;
        }
        
        //Get the result from the game engine
        
        int result = Math(array);
        
        //If result is A(88), player A or X win
        if (result == A){
                printf("\nPlayer X Win");
                return 1;
        }
        
        //If result is B(48), player B or 0 win
        else if (result == B){
                printf("\nPlayer 0 Win");
                return 1;
        }
        else{
                //printf("\nRunning----");
        }
        return 0;
}


//Display the game board
void Display(int array[]){
        system("clear");
        for (int i = 0; i < 9; i++){
                if (i != 0 && i % 3 == 0){
                        printf("\n");
                }
                printf("%c ", array[i]);
        }
}


//This function map game input to corresponding real position

// 7 8 9         0 1 2          1 2 3
// 4 5 6 ------> 3 4 5 ------>  4 5 6
// 1 2 3         6 7 8          7 8 9

int MapKeyBoardInput(int data){
        if (data == 7 || data == 8 || data == 9){
                return data - 7;
        }
        else if (data == 1 || data == 2 || data == 3){
                return data + 5;
        }
        else{
                return data - 1;
        }
}
