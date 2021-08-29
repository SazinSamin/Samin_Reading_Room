#include <stdio.h>
void Display(int array[]);
int MapKeyBoardInput(int data);
int Math(int array[]);
int AllPostionCheck(int array[]);
int Check(int array[]);



int main(){
        int array[9];
        for (int i = 0; i < 9; i++)
                array[i] = 95;
        int i = 0;
        int player1 = 0;
        int player2 = 0;
        int range = 9;
        Display(array);

        do{

                printf("\n\n");
                i += 1;

                printf("\nPlayer A: ");
                scanf("%d", &player1);
                player1 = MapKeyBoardInput(player1);
                if (array[player1] != 95){
                        printf("\nPosition has already occupied\n Input again to another position: ");
                        scanf("%d", &player1);
                        player1 = MapKeyBoardInput(player1);
                }
                printf("\n");
                array[player1] = 65;
                Display(array);
                if (Check(array)) break;




                printf("\n\nPlayer B: ");
                scanf("%d", &player2);
                player2 = MapKeyBoardInput(player2);
                if (array[player2] != 95){
                        printf("\nPosition has already occupied\n Input again to another position: ");
                        scanf("%d", &player2);
                        player2 = MapKeyBoardInput(player2);
                }
                printf("\n");
                array[player2] = 66;
                Display(array);
                if (Check(array)) break;

        } while (i < 9);
}


int Math(int array[]){

        for (int i = 0; i < 9; i += 3){
                if (array[i] == 65 && array[(i + 1)] == 65 && array[(i + 2)] == 65){
                        return 65;
                }
                if (array[i] == 66 && array[(i + 1)] == 66 && array[(i + 2)] == 66){
                        return 66;
                }
        }

        int x = 0;
        for (int i = 0; i < 3; i++){
                if (array[i] == 65 && array[(i + 3)] == 65 && array[(i + 6)] == 65){
                        return 65;
                }
                if (array[i] == 66 && array[(i + 3)] == 66 && array[(i + 6)] == 66){
                        return 66;
                }
        }

        int i = 0;
        if (array[i] == 65 && array[(i + 4)] == 65 && array[(i + 8)] == 65){
                return 65;
        }
        if (array[i] == 66 && array[(i + 4)] == 66 && array[(i + 8)] == 66){
                return 66;
        }

        i = 2;
        if (array[i] == 65 && array[(i + 2)] == 65 && array[(i + 4)] == 65){
                return 65;
        }

        if (array[i] == 66 && array[(i + 2)] == 66 && array[(i + 4)] == 66){
                return 66;
        }
        return -1;
}

int AllPostionCheck(int array[]){
        for (int i = 0; i < 9; i++){
                if (array[i] == 95){
                        return 0;
                }
        }
        return 1;
}

int Check(int array[]){
        if (AllPostionCheck(array)){
                printf("\nMatch Draw \nGame End ---------------------------");
                return 1;
        }
        int result = Math(array);
        if (result == 65){
                printf("\nPlayer A Win !!!!");
                return 1;
        }
        else if (result == 66){
                printf("\nPlayer B Win !!!");
                return 1;
        }
        else{
                printf("\nRunning----");
        }
        return 0;
}



void Display(int array[]){
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
