#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

struct Dados
{
    string title;
    string rating;
    string rating_level;
    string rating_description;
    string release_year;
    string user_score;
    string user_rating_size;
};

struct YearPg{
    int PG13 = 0,
        R = 0,
        TV14 = 0,
        TVPG = 0,
        TVMA = 0 ,
        TVY = 0,
        NR = 0,
        TVY7FV = 0,
        PG13 = 0,
        TVG = 0; 
};

typedef struct Dados dados;

int main(){
    cout << "Não quebrou caralho" << endl;
    ifstream tabela_movies("netflix_all.csv", ios::in);

    dados info_all_movies[1001];
    cout << "Não quebrou caralho" << endl;

    int i=0;
    while (tabela_movies.good())
    {   
        getline(tabela_movies, info_all_movies[i].title, ';' );
        getline(tabela_movies, info_all_movies[i].rating, ';'  );
        getline(tabela_movies, info_all_movies[i].rating_level, ';');
        getline(tabela_movies, info_all_movies[i].rating_description, ';');
        getline(tabela_movies, info_all_movies[i].release_year, ';');
        getline(tabela_movies, info_all_movies[i].user_score, ';');
        getline(tabela_movies, info_all_movies[i].user_rating_size, ';');
        i++;
    }

    
    
    return 0;
}