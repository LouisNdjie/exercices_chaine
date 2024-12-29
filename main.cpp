#include<iostream>
#include<stdlib.h>
#include"header/chaine.h"

main()
{
    int choix = 0, taille = 0, i = 0, choix2 = 0, size = 0, new_size = 0, debut = 0, number_word = 0; 
    bool running = true;
    char *chaine = nullptr, *chaine1 = nullptr, *chaine2 = nullptr, *temoin, *mot = nullptr, *moin, *source = nullptr, *dest = nullptr;
    char caractere;
    
    while (running)
    {
        choice();
        std::cout << "CHOISSISSEZ UNE OPTION :";
        std::cin >> choix;
        std::cin.ignore();
        switch(choix)
        {
            case 1 :    // la longueure de la chaine 
            {
                system("cls");
                std::cout << "|----------------LONGUEUR DE CHAINE--------------------|\n"; 
                chaine = new char[1000];
                
                std::cout<<"entrez une chaine de caractere\n"<<"chaine :";
                std::cin.getline(chaine, 1000);
                
                taille = longueur(chaine);
                std::cout<<"la taille de votre chaine est :"<<taille;
                
                delete chaine;
                
                
                break;
            }
            case 2 :    //copie de chaine
            {
                system("cls");
                std::cout << "|--------------------COPIE DE CHAINE--------------------|\n"; 
                chaine1 = new char[1000];
                chaine2 = new char[1000];

                std::cout<<"entrez une chaine de caractere\n\n"<<"chaine :";
                std::cin.getline(chaine1, 1000);

                taille = longueur(chaine1);
    
                std::cout<<"nous allons copier votre chaine de caratere dans une nouvelle\n\n";
                copie(chaine2, chaine1);

                std::cout<<"la chaine copie est :"<<chaine2;

                delete chaine1;
                delete chaine2;

                
                break;
            }
            case 3 :    //concatenation de chaine
            {
                system("cls");
                std::cout << "|----------------CONCATENATION DE CHAINE---------------|\n"; 
                chaine1 = new char[1000];
                chaine2 = new char[1000];

                std::cout<<"entrez une chaine de caractere\n\n"<<"chaine :";
                std::cin.getline(chaine1, 1000);

                std::cout<<"entrez une autre chaine de caractere\n\n"<<"chaine :";
                std::cin.getline(chaine2, 1000);

                concatene(chaine1, chaine2);
                std::cout<<"le nouvelle chaine\n\n"<<"chaine :"<<chaine1;

                delete chaine1;
                delete chaine2;

                
                break;
            }
            case 4 :    //comparaison de chaine
            {
                system("cls");
                std::cout << "|----------------COMPARAISON DE CHAINE-----------------|\n"; 
                chaine1 = new char[1000];
                chaine2 = new char[1000];

                std::cout<<"entrez une chaine de caractere\n\n"<<"chaine 1 :";
                std::cin.getline(chaine1, 1000);

                std::cout<<"entrez une autre chaine de caractere\n\n"<<"chaine 2 :";
                std::cin.getline(chaine2, 1000);

                int compa = compare(chaine1, chaine2);

                if(compa == 0){
                    std::cout<<"les deux chaines sont equivalentes";
                }else if(compa == -1){
                    std::cout<<"la chaine 1 est plus petite que la chaine 2 et sont differentes";
                }else if(compa == 1){
                    std::cout<<"la chaine 1 est plus grande que la chaine 2 et sont differentes";
                }else if(compa == -2){
                    std::cout<<"la chaine 1  est differente de la chaine 2 mais elles ont la meme taille";
                }

                delete chaine1;
                delete chaine2;

                
                break;
            }
            case 5 :    //recherche de caractere
            {
                system("cls");
                std::cout << "|------------------RECHERCHE DE CARACTERE-----------------|\n"; 
                temoin = new char[5];
                chaine1 = new char[1000];

                std::cout<<"entrez une chaine de caractere\n\n"<<"chaine :";
                std::cin.getline(chaine1, 1000);

                std::cout<<"entrez un caractere a rechercher\n\n"<<"caractere :";
                std::cin>>caractere;

                temoin = cherche_char(chaine1, caractere);
                if(temoin == nullptr)
                {
                    std::cout << "Ce caractere n'existe pas";
                    delete chaine1;
                    delete temoin;
                
                    
                    break;
                }

                while(temoin[taille] != '\0')
                {
                    std::cout<<"le caractere :"<< temoin[taille] << " \nexiste ";
                    taille++;
                }
    
                delete chaine1;
                delete temoin;
                
                
                break;
            }
            case 6 :    //inversion de chaine
            {
                system("cls");
                std::cout << "|----------------INVERSION DE CHAINE---------------|\n"; 
                chaine = new char[200];

                std::cout<<"entrez une chaine de caractere : ";
                std::cin.getline(chaine, 200);
                std::cout<<std::endl;
    
                inverse(chaine);
   
                delete chaine;
                
                
                break;
            }
            case 7 :    //conversion de chaine
            {
                system("cls");

                conversion_chaine();
                std::cout << "CHOISSISSEZ UNE OPTION :";

                std::cin >> choix2;
                std::cin.ignore();
                switch(choix2)
                {
                    case 1 :    //majuscule
                    {
                        system("cls");
                        std::cout << "|-----------------MAJUSCULE----------------|\n"; 
                        chaine1 = new char[200];

                        std::cout<<"entrez une chaine en miniscule : ";
                        std::cin.getline(chaine1, 200);

                        to_upper(chaine1);

                        std::cout << "la chaine en majuscule est :";
                        while(chaine1[i] != '\0')
                        {
                            std::cout<<chaine1[i];
                            i++;
                        }

                        delete chaine1;
                        
                        break;
                    }
                    case 2 :    //miniscule
                    {
                        system("cls");
                        std::cout << "|----------------MINISCULE-------------|\n"; 
                        chaine1 = new char[200];

                        std::cout<<"entrez une chaine en majuscule : ";
                        std::cin.getline(chaine1, 200);

                        to_lower(chaine1);

                        std::cout << "la chaine en miniscule est :";
                        while(chaine1[i] != '\0')
                        {
                            std::cout<<chaine1[i];
                            i++;
                        }

                        delete chaine1;
                        
                        break;
                    }
                }
                
                break;
            }
            case 8 :    //recherche de mot 
            {
                system("cls");
                std::cout << "|---------------RECHERCHE DE MOT--------------|\n"; 
                
                moin = new char[120];
                mot = new char[120];
                chaine = new char[200];
    
                std::cout<<"entrez la chaine :";
                std::cin.getline(chaine, 200);

                std::cout<<"entrez le mot recherche :";
                std::cin.getline(mot, 120);

                moin = cherche_mot(chaine, mot);

                if(moin == nullptr)
                {
                    std::cout << "Ce mot n'existe pas";
                    delete chaine;
                    delete moin;
                
                    
                    break;
                }

                int size = longueur(moin);

                moin[size+1] = '\0';

                std::cout<<"le mot cherche :";
                
                for(i = 0; i <= size; i++)
                {
                    std::cout<<moin[i];
                }

                std::cout <<"\nexiste";

                delete moin;
                delete chaine;
                delete mot;

                
                break;
            }
            case 9 :    //extraction de sous-chaine
            {
                system("cls");
                std::cout << "|----------------EXTRACTION SOUS-CHAINE--------------|\n"; 
                
                source = new char[400];
                dest = new char[400];

                std::cout<<"entrez une chaine de caractere : ";
                std::cin.getline(source, 400);

                std::cout<<"nous allons creer une sous chaine de votre chaine\n";
                std::cout<<"entrez le debut de votre sous chaine : ";
                std::cin>>debut;

                std::cout<<"entrez la longueur de votre sous chaine : ";
                std::cin>>size;

                sous_chaine(source, dest, debut, size);
    
                new_size = longueur(dest);

                dest[new_size] = '\0';

                std::cout<<"la sous chaine creee est :";
                for(i = 0; i <= new_size; i++){
                    std::cout<<dest[i];
                }

                delete source;
                delete dest;
                
                
                break;
            }
            case 10 :   //suppression de caractere
            {
                system("cls");
                std::cout << "|--------------SUPPRESSION DE CARACTERE-------------|\n"; 

                chaine = new char[400];
    
                std::cout<<"entrez une chaine de caractere : ";
                std::cin.getline(chaine, 400);

                size = longueur(chaine);

                std::cout<<"entrez le caractere dont on doit en supprimer les occurences : ";
                std::cin>>caractere;

                supprime_caractere(chaine, caractere);

                std::cout<<"la chaine sans ce caractere est :";
                for(i = 0; i <= size; i++)
                {
                    std::cout<<chaine[i];
                }

                delete chaine;

                
                break;
            }
            case 11 : //compter les mots 
            {
                system("cls");
                std::cout << "|---------------COMPTER LES MOTS DANS LA PHRASE----------|\n";
                chaine = new char[400];
    
                std::cout<<"entrez une chaine de caractere : ";
                std::cin.getline(chaine, 400);

                size = longueur(chaine);

                number_word = compte_mots(chaine);

                if(chaine[size-1] == 32)
                {
                    number_word = number_word-1;
                }
    
                std::cout<<"cette phrase contient "<<number_word<<" mots";
                delete chaine;

                
                break;
            }

        }
        std::cout <<"\n\n";
        system("pause");
        running = false;
    }

    return 0;
}