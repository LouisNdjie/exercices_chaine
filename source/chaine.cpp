#include<iostream>

#include"../header/chaine.h"

int longueur(const char *chaine){
    int i = 0, size = 0;
    while(chaine[i] != '\0'){
        size++;
        i++;
    }
    return size;
}

void copie(char *dest, const char *source){
    int size = longueur(source);
    int i = 0;
    for(i = 0; i <= size; i++){
        dest[i] = source[i];
    }
    dest[size+1] = '\0';
}

void concatene(char *dest, const char *source){
    int size = longueur(dest);
    int new_size = longueur(source);
    int i = 0;
    for(i = 0; i <= new_size+1; i++){
        dest[size+i] = source[i];
    }
}

int compare(const char *chaine1, const char *chaine2){
    int size = longueur(chaine1);
    int new_size = longueur(chaine2);
    
    int comp = 0; 
    
    int i = 0; 
    int j = 0;
    
    
    if(size > new_size){
    comp = 1;
    return comp;
   }else if(size < new_size){
    comp = -1;
    return comp;
   }
    while(i <= size && j <= new_size){
        
        if(chaine1[i] != chaine2[j]){
            comp = -2;
            return comp;
        }
        i++;
        j++;
    }

    return comp;
}

char *cherche_char(const char *chaine, char caractere){
    int i = 0;
    char *temoin;
    while(chaine[i] != '\0'){
        if(chaine[i] == caractere){
            temoin[0] = chaine[i];
            temoin[1] = '\0';
            return temoin;
        }
        i++;
    }
    temoin = NULL;
    return temoin;
}

void inverse(char *chaine){
    int size = longueur(chaine);
    char *inv = nullptr;
    inv = new char[200];
    int i = 0;
    for(i = 0; i <= size+1; i++){
        inv[i] = chaine[i];
    }

    for(i = 0; i <= size; i++){
        chaine[i] = inv[size-i];
    }
    chaine[size+1] = '\0';
    
    std::cout<<"la chaine inverse est :";
    for(i = 0; i <= size; i++){
        std::cout<<chaine[i];
    }
    delete inv;
}

void to_upper(char *chaine){
    int i = 0;
    while(chaine[i] != '\0'){
        if(chaine[i] == 32)
        {
         chaine[i] = chaine[i] + 0;   
        }else
        {
            chaine[i] = chaine[i] - 32;
        }
        i++;
    }
}

void to_lower(char *chaine){
      int i = 0;
    while(chaine[i] != '\0'){
        if(chaine[i] == 32)
        {
         chaine[i] = chaine[i] + 0;   
        }else
        {
            chaine[i] = chaine[i] + 32;
        }
        i++;
    }
}

char *cherche_mot(const char *phrase, const char *mot){
    int i = 0;
    int j = 0;
    char *adr;
    while(phrase[i] != '\0'){
        while(phrase[i] == mot[j]){
            adr[j] = phrase[i];
            i++;
            j++;
        }
        i++;
    }
    adr[j+1] = '\0';

    if(adr[0] == '\0')
    {
        adr = nullptr;
    }
    if(adr[j] != mot[j+1])
    {
        adr = nullptr;
    }
    return adr;
}


void sous_chaine(const char *source, char *dest, int debut, int longueur){
    int i = 0;
    int j = 0;
    for(i = debut; i < longueur+debut; i++){
        dest[j] = source[i];
        j = j+1;
    }
}

void supprime_caractere(char *chaine, char caractere){
    int i = 0;
    while(chaine[i] != '\0'){
        if(chaine[i] == caractere){
            chaine[i] = 0;
        }
        i++;
    }
}

int compte_mots(const char *phrase){
    int word_contain = 0;
    int i = 0; 
    int j = 0;

    while(phrase[i] != '\0'){
        if((phrase[i] == 32 && phrase[i+1] != 32)){
            word_contain++;
        }
        i++;
    }
    
    word_contain = word_contain+1;

    if(phrase[0] == 32){
        word_contain = word_contain-1;
    }

    return word_contain;
}
void choice()
{
    std::cout << "|---------------------OPERATION SUR LES CHAINES DE CARACTERES-----------------|\n";
    std::cout << "|     [1]  -               LONGUEUR DE CHAINE                                 |\n"; 
    std::cout << "|     [2]  -                COPIE DE CHAINE                                   |\n"; 
    std::cout << "|     [3]  -            CONCATENATION DE CHAINE                               |\n"; 
    std::cout << "|     [4]  -             COMPARAISON DE CHAINE                                |\n"; 
    std::cout << "|     [5]  -             RECHERCHE DE CARACTERE                               |\n"; 
    std::cout << "|     [6]  -              INVERSION DE CHAINE                                 |\n"; 
    std::cout << "|     [7]  -             CONVERSION DE CHAINE                                 |\n"; 
    std::cout << "|     [8]  -               RECHERCHE DE MOT                                   |\n"; 
    std::cout << "|     [9]  -           EXTRACTION SOUS-CHAINE                                 |\n"; 
    std::cout << "|     [10] -          SUPPRESSION DE CARACTERE                                |\n"; 
    std::cout << "|     [11] -        COMPTER LES MOTS DANS LA PHRASE                           |\n"; 
    std::cout << "|-----------------------------------------------------------------------------|\n";

}

void conversion_chaine()
{
    std::cout << "|--------------------------CONVERSION DE CHAINE-------------------------------|\n";
    std::cout << "|     [1]  -                  MAJUSCULE                                       |\n"; 
    std::cout << "|     [2]  -                  MINISCULE                                       |\n"; 
    std::cout << "|-----------------------------------------------------------------------------|\n";
} 