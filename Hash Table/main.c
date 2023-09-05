#include "hash_table.c"

int main(){
    ht_hash_table* ht = ht_new();
    int azione = 0;
    char value[1024];
    char key[1024];
    while(1){
        printf("\n\n\n\nScegli un azione\n");
        printf("1 - insert a new element in the table(key, value)\n");
        printf("2 - search an element in the table (key)\n");
        printf("3 - remove an element from the table(key)\n");
        printf("4 - exit\n");
    scanf("%d", &azione);
    //printf("%d", azione);
    switch(azione){
        case 1:
            printf("insert a key\n");
            scanf("%s", key);
            printf("insert a value\n");
            scanf("%s", value);
            ht_insert(ht,key, value);
            break;
        case 2:
            printf("insert a key\n");
            scanf("%s", key);
            char* value_searched = ht_search(ht, key);
            if( value_searched == NULL)
                printf("the key doesn't exists");
            else printf("%s\n", value_searched);
            break;
        case 3:
            printf("insert a key\n");
            scanf("%s", key);   
            ht_delete(ht, key);
            break;  
        case 4:
            break;
        default:
            printf("The option selected is not valid, please select a valid option\n");      
        }
    if(azione == 4)
        break;

    }
}