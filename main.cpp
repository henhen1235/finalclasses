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
            break;
        }
        else if(strcmp(mediatype, "movies") == 0){
            movies* tempmovie = new movies;
            char titles[50];
            int year;
            float rating;
            char director[50];
            int duration;

            cout << "What is the title of the movie??" << endl;
            cin >> titles;
            tempmovie->setname(titles);
            cout << "What is the release year of the movie?" << endl;
            cin >> year;
            tempmovie->setyear(year);
            cout << "Who is the director of the movie?" << endl;
            cin >> director;
            tempmovie->setdirector(director);
            cout << "What is the rating of the movie?" << endl;
            cin >> rating;
            tempmovie->setrating(rating);
            cout<< "What is the duration of the movie?" << endl;
            cin >> duration;
            tempmovie->setduration(duration);

            medias.push_back(tempmovie);
            break;
        }
        if(strcmp(mediatype, "music") == 0){
            music* tempmusic = new music;
            char titles[50];
            int year;
            char publisher[50];
            char artist[50];
            int duration;

            cout << "What is the title of the song??" << endl;
            cin >> titles;
            tempmusic->setname(titles);
            cout << "What is the release year of the song?" << endl;
            cin >> year;
            tempmusic->setyear(year);
            cout << "Who is the publisher of the song?" << endl;
            cin >> publisher;
            tempmusic->setpublisher(publisher);
            cout << "What is the duration of the song?" << endl;
            cin >> duration;
            tempmusic->setduration(duration);
            cout<< "who is the artist of the song?" << endl;
            cin >> artist;
            tempmusic->setartist(artist);

            medias.push_back(tempmusic);
            break;
        }
        else{
            cout << "Please insert a valid media type, your options are:video games, movies, music" << endl;
        }
    }
}

void dele(std::vector<media*>& vec) {
    vector<string>::iterator it;
    for(it = vec.begin(); it != vec.end(); it++){

    }
}

void search(std::vector<media*>& vec) {
    // Implementation here
}