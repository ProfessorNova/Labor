#include<stdio.h>
#define width 20
#define height 20

//function turns the whole field into 0
void clear_setup(int field[width][height]){
    for (int i = 0; i < width; i++)
    {
        for (int j = 0; j < height; j++)
        {
            field[i][j] = 0;
        }
    }
}

//function calculates next generation
void gen_next(int field[width][height]){

    //new field to not disturb current generation
    int next_field[width][height];
    clear_setup(next_field);

    //goes trough current field
    for (int i = 0; i < width; i++)
    {
        for (int j = 0; j < height; j++)
        {
            int cells_alive = 0;

            //goes trough all nearby cells of the cell beeing checked
            for (int k = i-1; k <= i+1; k++)
            {
                for(int l = j-1; l <= j+1; l++){

                    //checks for out of bounds and if it checks itself
                    if(((k) >= 0 && (k) < width)&&
                    ((l) >= 0 && (l) < height)&&
                    !(k == i && l == j)){

                        //counts nearby living cells
                        if(field[k][l] == 1){
                            cells_alive++;
                        }
                    }
                }
            }

            //changes status of cell in next_field according to rules
            if(cells_alive == 3){
                next_field[i][j] = 1;
            }
            if(cells_alive == 2 && field[i][j] == 1){
                next_field[i][j] = 1;
            }
            if(cells_alive < 2){
                next_field[i][j] = 0;
            }
            if(cells_alive > 3){
                next_field[i][j] = 0;
            }
        }
    }

    //values of next_field are getting transported into current field
    for (int i = 0; i < width; i++)
    {
        for (int j = 0; j < height; j++)
        {
            field[i][j] = next_field[i][j];
        }
    }
}

//prints the whole field/generation
void gen_print(int field[width][height], int gen_count){
    printf("-- Generation: %d\n", gen_count);
    for (int i = 0; i < width; i++)
    {
        for (int j = 0; j < height; j++)
        {
            //living cell ist printed as '#' and dead ist printed as '.'
            if(field[i][j] == 0){
                printf(".");
            }
            else{
                printf("#");
            }
        } 
        printf("\n");
    }
}

//function to add new (alive) cells
void add_cell(int field[width][height], int pos_x, int pos_y){
    field[pos_y][pos_x] = 1;
}

int main(){
    //variables
    int field[width][height];
    int gen_count = 0;
    char action;
    int pos_x = 0;
    int pos_y = 0;
    
    //makes field blank
    clear_setup(field);

    //intput Number of generations
    scanf("%d", &gen_count);
    fflush(stdin);

    //generates new cells until 'e' ist entered
    do{
        scanf("%c", &action);
        //if inpus is 'a' new cell is added
        if (action == 'a')
        {
            scanf("%d %d", &pos_x, &pos_y);
            add_cell(field, pos_x, pos_y);
        }
    }while (action != 'e');
    
    //prints and calculates given numbers of generations
    for (int i = 0; i <= gen_count; i++)
    {
        gen_print(field, i);
        gen_next(field);
    }

    return 0;
}