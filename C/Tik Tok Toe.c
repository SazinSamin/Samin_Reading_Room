#include <stdio.h>
#define A 88
#define B 48
#define GAP 95


void Display(int array[]);
int MapKeyBoardInput(int data);
int Math(int array[]);
int AllPostionCheck(int array[]);
int Check(int array[]);



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
                i += 1;

                printf("\nPlayer X: ");
                scanf("%d", &player1);
                player1 = MapKeyBoardInput(player1);
                if (array[player1] != GAP){
                        printf("\nPosition has already occupied\n Input again to another position: ");
                        scanf("%d", &player1);
                        player1 = MapKeyBoardInput(player1);
                }
                printf("\n");
                array[player1] = A;
                Display(array);
                if (Check(array)) break;


                printf("\n\nPlayer 0: ");
                scanf("%d", &player2);
                player2 = MapKeyBoardInput(player2);
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

int AllPostionCheck(int array[]){
        for (int i = 0; i < 9; i++){
                if (array[i] == GAP){
                        return 0;
                }
        }
        return 1;
}

int Check(int array[]){
        if (AllPostionCheck(array)){
                printf("\nGame End ---------------------------");
                return 1;
        }
        int result = Math(array);
        if (result == A){
                printf("\nPlayer X Win");
                return 1;
        }
        else if (result == B){
                printf("\nPlayer 0 Win");
                return 1;
        }
        else{
                //printf("\nRunning----");
        }
        return 0;
}



void Display(int array[]){
        system("clear");
        for (int i = 0; i < 9; i++){
                if (i != 0 && i % 3 == 0){
                        printf("\n");
                }
                printf("%c ", array[i]);
        }
}

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
