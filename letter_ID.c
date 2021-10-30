// Arulmozhivarman is working in ship. He is responsible for classifying the ship into different classes 
// based on the letterclass ID of the ship.Since Arulmozhivarman is working on the same task over the 
// long period of time he is bored of doing the same work again and again.He will enjoy his time in the 
// ship if has a automated script that can classify the ships into different classes if the letterclass 
// id of the ship is provided.Can you help Arulmozhivarman?
#include<stdio.h>
int main(){
    char ID;
    scanf("%c",&ID);
    if(ID=='B'||ID =='b'){
        printf("Battle Ship\n");
    }else if(ID =='C'||ID =='c'){
        printf("Cruiser\n");
    }else if(ID =='D'||ID =='d'){
        printf("Destroyer\n");
    }else if(ID =='F'||ID =='f'){
        printf("Frigate\n");
    }
    return 0;
}
