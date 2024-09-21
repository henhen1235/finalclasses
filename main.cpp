#include <iostream> // include standard input-output library
#include "media.h" // include media class header
#include "movies.h" // include movies class header
#include "music.h" // include music class header
#include "videogames.h" // include video games class header
#include <cstring> // include c-string library for string comparison
#include <vector> // include vector library for dynamic array usage
/*
henry xu
9/17/24
making a list of media types and creating functions for them!
*/
// get everything ready
using namespace std; // using the standard namespace

// function prototypes for adding, deleting, and searching media
void add(vector<media*> &medias);
void dele(vector<media*> &medias);
void search(vector<media*> &medias);

int main() {
    vector<media*> medias; // vector to store pointers to different media types

    while(true) { // infinite loop until user decides to quit
        char answer[50]; // buffer to store user input
        // ask user what they would like to do
        cout << "What would you like to do?" << endl;
        cin >> answer;
        // depending on what they would like, run the corresponding function
        if(strcmp(answer, "add") == 0) {
            add(medias);
        }
        else if(strcmp(answer, "delete") == 0) {
            dele(medias);
        }
        else if(strcmp(answer, "search") == 0) {
            search(medias);
        }
        else if(strcmp(answer, "quit") == 0) {
            // delete each allocated media object before quitting
            for (auto it = medias.begin(); it != medias.end(); it++) {
                delete *it; // clear everything in the classes
            }
            medias.clear(); // clear the vector of pointers
            break; // exit the loop and end the program
        }
        else {
            // if the user enters an invalid command
            cout << "This is not a proper command, please respond with: add, delete, search, quit." << endl;
        }
    }
    return 0; // return 0 indicating successful execution
}

// function to add a new media to the list
void add(vector<media*> &medias) {
    while(true) { // loop until a valid media type is added
        char mediatype[50]; // buffer to store media type
        cout << "What kind of media would you like to add?" << endl;
        cin >> mediatype;
        // if they want to add a video game
        if(strcmp(mediatype, "video-game") == 0) {
            videogames* tempvideogame = new videogames; // create new video game object
            char titles[50]; // buffer to store video game title
            int year; // variable to store release year
            float rating; // variable to store rating
            char publisher[50]; // buffer to store publisher name
            // get video game details from user
            cout << "What is the title of the video game?" << endl;
            cin >> titles;
            tempvideogame->setname(titles); // set video game title
            cout << "What is the release year of the video game?" << endl;
            cin >> year;
            tempvideogame->setyear(year); // set release year
            cout << "Who is the publisher of the video game?" << endl;
            cin >> publisher;
            tempvideogame->setpublisher(publisher); // set publisher name
            cout << "What is the rating of the video game?" << endl;
            cin >> rating;
            tempvideogame->setrating(rating); // set rating
            cout << "Thanks for adding a video game" << endl;
            medias.push_back(tempvideogame); // add video game to the media list
            break; // exit the loop
        }
        // if they want to add a movie
        else if(strcmp(mediatype, "movie") == 0) {
            movies* tempmovie = new movies; // create new movie object
            char titles[50]; // buffer to store movie title
            int year; // variable to store release year
            float rating; // variable to store rating
            char director[50]; // buffer to store director name
            int duration; // variable to store movie duration
            // get movie details from user
            cout << "What is the title of the movie?" << endl;
            cin >> titles;
            tempmovie->setname(titles); // set movie title
            cout << "What is the release year of the movie?" << endl;
            cin >> year;
            tempmovie->setyear(year); // set release year
            cout << "Who is the director of the movie?" << endl;
            cin >> director;
            tempmovie->setdirector(director); // set director name
            cout << "What is the rating of the movie?" << endl;
            cin >> rating;
            tempmovie->setrating(rating); // set rating
            cout<< "What is the duration of the movie?" << endl;
            cin >> duration;
            tempmovie->setduration(duration); // set duration
            cout << "Thanks for adding a movie" << endl;
            medias.push_back(tempmovie); // add movie to the media list
            break; // exit the loop
        }
        // if they want to add music
        else if(strcmp(mediatype, "music") == 0) {
            music* tempmusic = new music; // create new music object
            char titles[50]; // buffer to store song title
            int year; // variable to store release year
            char publisher[50]; // buffer to store publisher name
            char artist[50]; // buffer to store artist name
            int duration; // variable to store song duration
            // get music details from user
            cout << "What is the title of the song?" << endl;
            cin >> titles;
            tempmusic->setname(titles); // set song title
            cout << "What is the release year of the song?" << endl;
            cin >> year;
            tempmusic->setyear(year); // set release year
            cout << "Who is the publisher of the song?" << endl;
            cin >> publisher;
            tempmusic->setpublisher(publisher); // set publisher name
            cout << "What is the duration of the song?" << endl;
            cin >> duration;
            tempmusic->setduration(duration); // set duration
            cout << "Who is the artist of the song?" << endl;
            cin >> artist;
            tempmusic->setartist(artist); // set artist name
            cout << "Thanks for adding a song" << endl;
            medias.push_back(tempmusic); // add music to the media list
            break; // exit the loop
        }
        // if the user enters an invalid media type
        else {
            cout << "Please insert a valid media type, your options are: video-game, movie, music" << endl;
        }
    }
}

// function to delete a media from the list
void dele(std::vector<media*>& vec) {
    char del[50]; // buffer to store media title to be deleted
    int delet; // variable to store media year to be deleted
    cout << "Which media would you like to delete? Print out their title then in the next prompt print out their year." << endl;
    cin >> del;
    cin >> delet;
    // go through the vector and delete the first matching one they find
    for (auto it = vec.begin(); it != vec.end(); it++) {
        if (strcmp((*it)->title, del) == 0 && (*it)->year == delet) {
            char answer[15]; // buffer to store user confirmation
            cout << "We have found " << (*it)->title << " do you want to delete it?" << endl;
            cin >> answer;
            if(strcmp(answer, "yes") == 0) { // if user confirms deletion
                delete *it; // delete the media object
                it = vec.erase(it); // remove pointer from vector and update iterator
                break; // exit the loop after deleting the media
            }
            else { // if user cancels deletion
                cout << "It will not be deleted" << endl;
            }
        }
        else {
            // if the media doesn't match, continue searching
        }
    }
}

// function to search for a media in the list
void search(std::vector<media*>& vec) {
    while(true) { // loop until a valid search option is entered
        char print[50]; // buffer to store user search choice
        cout << "What would you like to search with? Name or Year?" << endl;
        cin >> print;
        // if they want to search by name
        if(strcmp(print, "Name") == 0) {
            int i = 0; // flag to check if any match is found
            char name[50]; // buffer to store name to search for
            cout << "What is the name you would like to search with?" << endl;
            cin >> name;
            for (auto it = vec.begin(); it != vec.end(); it++) {
                if (strcmp((*it)->title, name) == 0) { // if name matches
                    cout << "We found " << name << " which was made in " << (*it)->year << endl;
                    i = 10; // set flag indicating a match found
                }
            }
            // if no match is found
            if(i == 0) {
                cout << "Nothing found" << endl;
            }
            break; // exit the loop after searching
        }
        // if they want to search by year
        else if(strcmp(print, "Year") == 0) {
            int i = 0; // flag to check if any match is found
            int year; // variable to store year to search for
            cout << "What is the year you would like to search with?" << endl;
            cin >> year;
            for (auto it = vec.begin(); it != vec.end(); it++) {
                if ((*it)->year == year) { // if year matches
                    cout << "We found " << (*it)->title << " which was made in " << year << endl;
                    i = 10; // set flag indicating a match found
                }
            }
            // if no match is found
            if(i == 0) {
                cout << "Nothing found" << endl;
            }
            break; // exit the loop after searching
        }
        // if the user enters an invalid search option
        else {
            cout << "This is not a valid option, please input: Name or Year." << endl;
        }
    }
}
