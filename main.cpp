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
//get everything ready
using namespace std;
void add(vector<media*> &medias);
void dele(vector<media*> &medias);
void search(vector<media*> &medias);


int main(){
    vector<media*> medias; 

    while(true){
        char answer[50];
	// ask user what they would like to do
        cout << "What would you like to do?" << endl;
        cin >> answer;
	//depending on what they would like run the right function
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
	   for (auto it = medias.begin(); it != medias.end(); it++) {
	     delete *it; //clear everything in the classes
            }
            medias.clear();//clear the vector of pointers
            break;
	}
        else{
            cout << "This is not a proper command, please respond with: add, delete, search, quit." << endl;
        }
    }
    return 0;
}

//use this code to add a new media
void add(vector<media*> &medias){
    while(true){
      char mediatype[50];//asking for media type
        cout << "What kind of media would you like to add?" << endl;
        cin >> mediatype;
	//if they want to add a video game
        if(strcmp(mediatype, "video-game") == 0){
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
            cout << "Thanks for adding a video game" << endl;

            medias.push_back(tempvideogame);
            break;
        }
	// if they want to add a movie
        else if(strcmp(mediatype, "movie") == 0){
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
            cout << "Thanks for adding a movie" << endl;

            medias.push_back(tempmovie);
            break;
        }
	//if they want to add music
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
            cout << "Thanks for adding a song" << endl;

            medias.push_back(tempmusic);
            break;
        }
	//if their command is invalid
        else{
            cout << "Please insert a valid media type, your options are:video-game, movie, music" << endl;
        }
    }
}


//deleting function
void dele(std::vector<media*>& vec) {
    char del[50];
    int delet;
    cout << "Which media would you like to delete? Print out their title then in the next prompt print out their year." << endl;
    cin >> del;
    cin >> delet;
    //go through the vector and delete the first matchin one they find
    for (auto it = vec.begin(); it != vec.end(); it++){
        if (strcmp((*it)->title, del) == 0 && (*it)->year == delet){
            char answer[15];
            cout << "We have found " << (*it)->title << " do you want to delete it?" << endl;
            cin >> answer;
            if(strcmp(answer, "yes") == 0){
                delete *it; 
                it = vec.erase(it);
		break;
            }
            else{
                cout << "It will not be deleten" << endl;
            }
        }
        else{
        }
    }
}

//searching function
void search(std::vector<media*>& vec) {
  while(true){
  char print[50];
    cout << "What would you like to search with? Name or Year?" << endl;
    cin >> print;
    //if they want to search with name
    if(strcmp(print, "Name") == 0){
        int i = 0;
        char name[50];
        cout << "What is the name you would like to search with?" << endl;
        cin >> name;
        for (auto it = vec.begin(); it != vec.end(); it++){
            if (strcmp((*it)->title, name) == 0){
                cout << "We found " << name << " which was made in "<< (*it)->year << endl;
                i = 10; 
            }
        }//print everything with the same name
        if(i == 0){
            cout << "Nothing found" << endl;
        }
	break;
    }

    //if they want to search with year
    else if(strcmp(print, "Year") == 0){
        int i = 0;
        int year;
        cout << "What is the year you would like to search with?" << endl;
        cin >> year;
        for (auto it = vec.begin(); it != vec.end(); it++){
            if ((*it)->year = year){
                cout << "We found " << (*it)->title << " which was made in "<< year << endl; 
                i = 10;
            }
        }//print everything with the same year
        if(i == 0){
            cout << "Nothing found" << endl;
        }
	break;
    }
    else{
      cout << "This is not a valid option, please input: Name or Year." << endl;
    }
  }
}
