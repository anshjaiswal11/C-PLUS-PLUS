#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <iomanip>
struct Book {
    std::string title;
    std::string author;
    int year;

    Book(const std::string &t, const std::string &a, int y)
        : title(t), author(a), year(y) {}
};
class Library {
public:
    void addBook(const Book &book);
    void removeBook(int index);
    void displayBooks() const;
    void saveBooks(const std::string &filename) const;
    void loadBooks(const std::string &filename);

private:
    std::vector<Book> books;
};

void Library::addBook(const Book &book) {
    books.push_back(book);
}

void Library::removeBook(int index) {
    if (index >= 0 && index < books.size()) {
        books.erase(books.begin() + index);
    } else {
        std::cerr << "Invalid index" << std::endl;
    }
}

void Library::displayBooks() const {
    if (books.empty()) {
        std::cout << "No books in the library." << std::endl;
    } else {
        for (size_t i = 0; i < books.size(); ++i) {
            std::cout << std::setw(3) << i + 1 << ". "
                      << "Title: " << books[i].title << ", "
                      << "Author: " << books[i].author << ", "
                      << "Year: " << books[i].year << std::endl;
        }
    }
}

void Library::saveBooks(const std::string &filename) const {
    std::ofstream outFile(filename);
    if (outFile.is_open()) {
        for (const auto &book : books) {
            outFile << book.title << "\n" << book.author << "\n" << book.year << "\n";
        }
        outFile.close();
    } else {
        std::cerr << "Unable to open file for writing" << std::endl;
    }
}

void Library::loadBooks(const std::string &filename) {
    std::ifstream inFile(filename);
    if (inFile.is_open()) {
        books.clear();
        std::string title, author;
        int year;
        while (std::getline(inFile, title) && std::getline(inFile, author) && inFile >> year) {
            inFile.ignore();
            books.emplace_back(title, author, year);
        }
        inFile.close();
    } else {
        std::cerr << "Unable to open file for reading" << std::endl;
    }
}

int main() {
    Library library;
    int choice;
    std::string title, author, filename = "books.txt";
    int year, index;

    library.loadBooks(filename);

    do {
        std::cout << "\nLibrary Management System\n";
        std::cout << "1. Add Book\n";
        std::cout << "2. Remove Book\n";
        std::cout << "3. Display Books\n";
        std::cout << "4. Save Books\n";
        std::cout << "5. Load Books\n";
        std::cout << "0. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                std::cout << "Enter title: ";
                std::cin.ignore();
                std::getline(std::cin, title);
                std::cout << "Enter author: ";
                std::getline(std::cin, author);
                std::cout << "Enter year: ";
                std::cin >> year;
                library.addBook(Book(title, author, year));
                break;
            case 2:
                std::cout << "Enter book index to remove: ";
                std::cin >> index;
                library.removeBook(index - 1);
                break;
            case 3:
                library.displayBooks();
                break;
            case 4:
                library.saveBooks(filename);
                break;
            case 5:
                library.loadBooks(filename);
                break;
            case 0:
                std::cout << "Exiting...\n";
                break;
            default:
                std::cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 0);

    return 0;
}
