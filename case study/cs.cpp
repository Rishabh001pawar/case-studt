#include <iostream>
#include <string>

class Movie {
private:
    std::string title;
    std::string genre;
    int releaseYear;

public:
    Movie(std::string t, std::string g, int year) : title(t), genre(g), releaseYear(year) {}

    std::string getTitle() const {
        return title;
    }

    std::string getGenre() const {
        return genre;
    }

    int getReleaseYear() const {
        return releaseYear;
    }

    void setTitle(const std::string& t) {
        title = t;
    }

    void setGenre(const std::string& g) {
        genre = g;
    }

    void setReleaseYear(int year) {
        releaseYear = year;
    }

    void displayInfo() const {
        std::cout << "Title: " << title << std::endl;
        std::cout << "Genre: " << genre << std::endl;
        std::cout << "Release Year: " << releaseYear << std::endl;
    }
};

int main() {
    Movie movie1("Inception", "Drama", 2010);
    movie1.displayInfo();

    movie1.setTitle("Inception");
    movie1.setReleaseYear(2010);
    movie1.displayInfo();

    return 0;
}