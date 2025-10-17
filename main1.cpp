#include <iostream>
using namespace std;

class Movie {
public:
    string title;
    string genre;
    int releasedYear;
};

int main() {
    Movie movies[3];

    for (int i = 0; i < 3; i++) {
        cout << "Enter title, genre and release year for movie " << i + 1 << ": ";
        cin >> movies[i].title >> movies[i].genre >> movies[i].releasedYear;
    }

    cout << "\nMovie List:\n";
    for (int i = 0; i < 3; i++) {
        cout << "Title: " << movies[i].title
             << ", Genre: " << movies[i].genre
             << ", Year: " << movies[i].releasedYear << endl;
    }

    return 0;
}
