#include <iostream>
#include "media.h"
#include "movies.h"
#include "music.h"
#include "videogames.h"
#include <cstring>
#include <vector>
/*
Henry Xu
9/17/24
Making a list of media types and create function for them!
*/

using namespace std;
void add(vector<media*> &medias);
void dele(vector<media*> &medias);
void search(vector<media*> &medias);


int main(){
    vector<media*> medias; 

    while(true){
        char answer[50];
        cout << "What would you like to do?" << endl;
        cin >> answer;
        if(strcmp(answer, "add") == 0){
            add(medias);
        }
        else if(strcmp(answer, "delete") == 0){
            dele(medias);
        }
        else if(strcmp(answer, "search") == 0){
            search(medias);
        }
        else if(strcmp(answer, "quit") == 0){
        }
        else{
            cout << "This is not a proper command, please respond with: add, delete, search, quit." << endl;
        }
    }
    return 0;
}


void add(vector<media*> &medias){
    while(true){
        char mediatype[50];
        cout << "What kind of media would you like to add?" << endl;
        cin >> mediatype;
        if(strcmp(mediatype, "video games") == 0){
            videogames* tempvideogame = new videogames;
            char titles[50];
            int year;
            float rating;
            char publisher[50];
            cout << "What is the title of the video game?" << endl;
            cin >> titles;
            tempvideogame->setname(titles);
            cout << "What is the release year of the video game?" << endl;
            cin >> year;
            tempvideogame->setyear(year);
            cout << "Who is the publisher of the video game?" << endl;
            cin >> publisher;
            tempvideogame->setpublisher(publisher);
            cout << "What is the rating of the video game?" << endl;
            cin >> rating;
            tempvideogame->setrating(rating);

            medias.push_back(tempvideogame);
        }
        else if(strcmp(mediatype, "movies") == 0){
            
        }
        if(strcmp(mediatype, "music") == 0){
            
        }
        else{
            cout << "Please insert a valid media type, your options are:video games, movies, music" << endl;
        }
    }
}