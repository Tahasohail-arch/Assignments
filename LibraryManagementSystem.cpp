//* Taha Sohail
//* 24i- 3165 
//* Se-B  

//* Libraries
#include<iostream>
#include<cmath>
#include<string>
#include<vector>
#include<ctime>
#include<cstdlib>

using namespace std;

//* Declaration
class Book;
class LibraryManagementSystem
{
    private:
    // Attributes
    int user;
    string username;
    string password;

    public:
    // Parametrzied constructors
    LibraryManagementSystem(int u = 0 , string un = "" , string p = "")
    {
       user = u;
       username = un;
       password = p;
    }

    // Getters & Setters
    void setusertype(int u)
    {
       user = u;
    }

    void setUserName( string un )
    {
        username = un;
    }

    void setPassword( string p )
    {
        password = p;
    }

    int getusertype()
    {
        return user;
    }

    string getUserName()
    {
        return username;
    }

    string getPassword()
    {
        return password;
    }

    // Condition for login of User
    bool Login(string Username , string Password)
    {
        return (Username == username && Password == password);
    }

    // Signing up the User
    void Register(string username , string password)
    {
        this->username = username;
        this->password = password;
        cout << "Registaring new user..." << endl;
    }

    // Logging out the User
    void Logout()
    {
      cout << username << "Logging out..." << endl;
    }

};
class Librarian
{
    private :
// Attributes
    int id;
    string Name;
    string Password;

    public:
// Parametrized Constructor
    Librarian(int id = 0 , string Name = "" , string Password = "")
    {
        this->id = id;
        this->Name = Name;
        this->Password = Password;
    }

    // Getter & Setter
    void setName( string n)
    {
        Name = n;
    }

    void setId( int i )
    {
        id = i;
    }

    void setPass( string p)
    {
        Password = p;
    }

    int getId()
    {
        return id;
    }

    string getName()
    {
        return Name;
    }

    string getPass()
    {
        return Password;
    }

    // Condition to check if it is librarian or not
    bool Verify_librarian(string Name , string Password)
    {
        return (this->Name == Name && this->Password == Password);
    }

    // TO search the Book
    void Search_Book(vector<Book> & books , string title);

};
class Book
{
    private :
    // Attributes
    string Title;
    string Author;
    string ISBN;
    bool borrow;
    int borrowId;
    int dueDays;
    public:
    // Parametrized Constructor
    Book(string t = "", string a = "" , string i = "" , bool borrow = false , int dueDays = 0, int borrowId = 0 )
{
    Title = t;
    Author = a;
    ISBN = i;
    this->borrow = false;
    this->borrowId = -1;
    this->dueDays = 0;
}

    // Getter & Setter
    void setTitle( string t)
    {
        Title = t;
    }

    void setAuthor( string a)
    {
        Author = a;
    }

    void setISBN( string i)
    {
        ISBN = i;
    }

    void setBorrow(bool b)
    {
        borrow = b;
    }

    void setBorrowId(int id)
    {
        borrowId = id;
    }

    string getTitle()
    {
        return Title;
    }

    string getAuthor()
    {
        return Author;
    }

    string getISBN()
    {
        return ISBN;
    }

    bool isBorrowed()
    {
        return borrow;
    }

    int getBorrowId()
    {
        return borrowId;
    }

    void setDueDays(int days) 
    {
        dueDays = days;
    }

    int getDueDays() 
    {
        return dueDays;
    }

    void reduceDueDays(int days) 
    {
        dueDays -= days;
    }

    void Show_due_date()
    {
        cout << " Due Date : " << endl;
    }

    void Reservation_status()
    {
        cout << "Reservation status : " << endl;
    }

    void Book_request() 
    {
        cout << "Book request : " << endl;
    }

    void Renew_info() 
    {
        cout << "Renewal info : " << endl;
    }

};
void Librarian::Search_Book(vector<Book> & books , string title)
{
    for ( int i = 0 ; i < books.size() ; i++)
    {
        if (books[i].getTitle() == title)
        {
            cout << "Book Found: " << books[i].getTitle() << " by " << books[i].getAuthor() << endl;
            return;
        }
    }
    cout << "Book not found! " << endl;
}
class Page
{
    private:
    // Attributes
    string Text;
    int Page_no;

    public:

    // Parametrized Constructor
    Page(string t = "", int p = 0)
    {
        Text = t;
        Page_no = p;
    }

    // Getter & Setter
    void setText(string t)
    {
        Text = t;
    }

    void setPageNo(int p)
    {
        Page_no = p;
    }

    string getText()
    {
        return Text;
    }

    int getPageNo()
    {
        return Page_no;
    }
};
class Account
{
    private:
    // Attributes
    int no_borrowed_books;
    int no_lost_books;
    int no_reserved_books;
    float fine_amount;

    public:

    // Parametrized Constructor
    Account(int nbb = 0 , int nlb = 0 , int nrb = 0 , float fa = 0.0)
    {
        no_borrowed_books = nbb;
        no_lost_books = nlb;
        no_reserved_books = nrb;
        fine_amount = fa;
    }

    // Getter & Setter
    void setNoBorrowedBooks(int nbb)
    {
        no_borrowed_books = nbb;
    }

    void setNoLostBooks(int nlb)
    {
        no_lost_books = nlb;
    }

    void setNoReservedBooks(int nrb)
    {
        no_reserved_books = nrb;
    }

    void Calculate_fine(int days)
    {
        if(days > 0)
        fine_amount = days * 50.00;
        else
        fine_amount = 0.0;
    }
    int getNoBorrowedBooks()
    {
        return no_borrowed_books;
    }

    int getNoLostBooks()
    {
        return no_lost_books;
    }

    int getNoReservedBooks()
    {
        return no_reserved_books;
    }

    float getFineAmount()
    {
        return fine_amount;
    }


};
//* Parent Class
class User
{
    protected:
    string Name;
    int id;
    Account account;
    vector<Book>issuebooks;

    public:
    // Parametrized Constructor
    User( int i = 0 , string Name = "")
    {
        id = i;
        this->Name = Name;
    }

    // Getter & Setter
    void setName(string n)
    {
        Name = n;
    }

    void setId(int i)
    {
        id = i;
    }

    string getName()
    {
        return Name;
    }

    int getId()
    {
        return id;
    }

    bool Verify( int i )
    {
       return (i == id);
    }

    void ToGetTime(int days)
    {
        for ( int i = 0 ; i < issuebooks.size() ; i++)
        {
            issuebooks[i].reduceDueDays(days);
        }
    }

    // Function to set the Due Date 
    void SetDueDate(int days)
  {
    for (int i = 0; i < issuebooks.size(); i++) 
    {
        issuebooks[i].setDueDays(days);
    }
    cout << "Due date set to " << days << " days for all issued books of " << Name << endl;
  }

    // Function to issue the Book
    bool IssueBook(vector<Book>& books, string title)
    {
        for (int i = 0; i < books.size() ; i++) 
        {
            if (books[i].getTitle() == title && !books[i].isBorrowed()) 
            {
                //^ To Check if the book is already issued to this user
                for (int j = 0; j < issuebooks.size(); j++) 
                {
                    if (issuebooks[j].getTitle() == title) 
                    {
                        cout << "Book " << title << " is already issued to " << Name << endl;
                        return false;
                    }
                }
                books[i].setBorrow(true);
                books[i].setBorrowId(id);
                issuebooks.push_back(books[i]);
                account.setNoBorrowedBooks(account.getNoBorrowedBooks() + 1);
                cout << "Book " << title << " issued to " << Name << endl;
                return true;
            }
        }
        cout << "Book " << title << " not found or already borrowed!" << endl;
        return false;
    }

    // To Check The Account Details
    void Check_account()
    {
      cout << "Reserved for future use : " << account.getNoReservedBooks() << endl;
      cout << "Borrowed : " << account.getNoBorrowedBooks() << endl;
      cout << "Fine : " << account.getFineAmount() << endl;
    }
 
    // To get every Book information
    void get_book_info(Book & book)
    {
        cout << "Title : " << book.getTitle() << ", Author : " << book.getAuthor()  << endl ;
    }

    // Display the IssuedBooks with Due Dates
    void DisplayIssuedBooksWithDueDates() 
    {
        for (int i = 0; i < issuebooks.size(); i++) 
        {
            cout << "Book: " << issuebooks[i].getTitle() << " - ";
            issuebooks[i].Show_due_date();
        }
    }

    // Returning of the Books by the Students
    void ReturnAllBooks(vector<Book>& books) 
    {
        //  Check each book I borrowed
        for (int i = 0; i < issuebooks.size(); i++) 
        {
            string bookTitle = issuebooks[i].getTitle(); // Get the title of my book
    
            //*  Find this book in the library's book list
            for (int j = 0; j < books.size(); j++) 
            {
                //* Check if this is the same book and I borrowed it
                if (books[j].getTitle() == bookTitle && books[j].isBorrowed() && books[j].getBorrowId() == id) 
                {
                    //  Return the book
                    books[j].setBorrow(false); // Book is not borrowed anymore
                    books[j].setBorrowId(-1);  // No one is borrowing it
                    cout << "Returned book: " << bookTitle << endl;
    
                    //  Check if I returned it late
                    int daysLate = -books[j].getDueDays(); // Negative due days means late

                    if (daysLate > 0) 
                    {
                        // Calculate fine: 50 per late day
                        account.Calculate_fine(daysLate);
                        cout << "Late by " << daysLate << " days. Your owe : " << account.getFineAmount() << endl;
                    } 
                    else 
                    {
                        cout << "Returned on time. No fine Sir !" << endl;
                    }
                    // Reset due days for this book
                    books[j].setDueDays(0);
                    break; //^ Found and returned the book, move to next one
                }
            }
        }
        //  Clear my borrowed books list
        issuebooks.clear();
        account.setNoBorrowedBooks(0); // I have no books now
        cout << Name << " returned all books!" << endl;
    }

    // Updating the User Status
    void UpdateUserStatus() 
    {
        cout << "User " << Name << " status updated. Borrowed books: " << account.getNoBorrowedBooks() << ", Fine: " << account.getFineAmount() << endl;
    }

};
//& Child Class
class Staff : public User
{
    private:
    //^ Attributes
    string department;
    string Designation;

    public:
    //^ Paramterized Constructor
    Staff(string n = "" , int i = 0 , string d = "", string des = "")
    {
        Name = n;
        id = i;
        department = d;
        Designation = des;
    }

    //^ Setter and Getter
    void setDepartment( string dep)
    {
        department = dep;
    }

    void setDesignation(string des)
    {
        Designation = des;
    }

    string getDepartment()
    {
        return department;
    }

    string getDesignation()
    {
        return Designation;
    }

};
class Student : public User
{
    private:
    //^ Attributes
    string Batch;
    string Designation;

    public:

    //^ Parametrized Constructor
    Student(string n = "" , int i = 0 , string b = "", string des = "")
    {
        Name = n;
        id = i;
        Batch = b;
        Designation = des;
    }
    //^ Setter and Getter
    void setBatch(string b)
    {
        Batch = b;
    }

    void setDesignation(string des)
    {
        Designation = des;
    }

    string getBatch()
    {
        return Batch;
    }

    string getDesignation()
    {
        return Designation;
    }

};
class LibraryDatabase
{
    private:
    //^ Attribute
    vector<Book> List_of_Books;

    public:

    //^ Default Constructor
    LibraryDatabase()
    {
        List_of_Books={};
    }

    vector<Book> & getBooks()
    {
        return List_of_Books;
    }

    //^ To add The Book
    void Add(Book book)
    {
       List_of_Books.push_back(book);
    } 

    //^ To delete the Book
    void Delete(string title)
    {
       for ( int i = 0 ; i < List_of_Books.size() ; i++)
       {
          if(List_of_Books[i].getTitle() == title)
          {
            List_of_Books.erase(List_of_Books.begin() + i );
            break;
          }
       }
    }

    //^ To update the Book
    void Update(string title , Book newbook)
    {
         for ( int i = 0 ; i < List_of_Books.size() ; i++)
         {
            if(List_of_Books[i].getTitle() == title)
            {
                List_of_Books[i] = newbook;
                break;
            }
         }
    }

    //^ To display the Book
    void Display()
    {
        for ( int i = 0 ; i < List_of_Books.size() ; i++)
        {
            cout << "Title : " << List_of_Books[i].getTitle() << endl;
            cout << "Author : " << List_of_Books[i].getAuthor() << endl;
            cout << " ISBN : " << List_of_Books[i].getISBN() << endl;
        }

    }

    //^ TO search The Book
    void Search(string title)
    {
       for ( int i = 0 ; i < List_of_Books.size() ; i++)
       {
        if(List_of_Books[i].getTitle() == title)
        {
            cout << "Book Found ! " << endl;
            return;
        }
       }
       cout << "Book Not Found ! " << endl;
    }

    //^ Will show the Updated Book Status
    void UpdateBookStatus() 
    {
        cout << "Library book statuses updated." << endl;
    }

};

int main() 
{
    // Create a new admin 
    LibraryManagementSystem admin;

    //  Admin should create a new Librarian
    string adminUsername, adminPassword;
    cout << "Register Admin" << endl;
    cout << "Enter Admin Username: ";
    cin >> adminUsername;
    cout << "Enter Admin Password: ";
    cin >> adminPassword;
    admin.Register(adminUsername, adminPassword);
    cout << "Admin created." << endl << endl;

    // Librarian should be able to Login
    int librarianId;
    string librarianName, librarianPass;
    cout << "Create Librarian" << endl;
    cout << "Enter Librarian ID: ";
    cin >> librarianId;
    cout << "Enter Librarian Name: ";
    cin >> librarianName;
    cout << "Enter Librarian Password: ";
    cin >> librarianPass;
    Librarian librarian(librarianId, librarianName, librarianPass);
    cout << "Librarian created." << endl << endl;

    string inputName, inputPass;
    cout << "Librarian Login" << endl;
    cout << "Enter Librarian Name: ";
    cin >> inputName;
    cout << "Enter Librarian Password: ";
    cin >> inputPass;

    if (librarian.Verify_librarian(inputName, inputPass)) 
    {
        cout << "Librarian login successful." << endl << endl;

        LibraryDatabase library;

        //  Add 10 books to the Library database
        int no_of_books = 10;
        cin.ignore();
        for (int i = 0; i < no_of_books; i++) 
        {
            string title, author, isbn;
            cout << endl << "Enter details for Book " << i + 1 << ":" << endl;
            cout << "Title: ";
            getline(cin, title);
            cout << "Author: ";
            getline(cin, author);
            cout << "ISBN: ";
            getline(cin, isbn);

            Book book(title, author, isbn);
            library.Add(book);
        }
        cout << endl << "10 Books added to Library." << endl << endl;

        // Create 2 students and 1 staff member
        string student1Name, student1Id, student2Name, student2Id;
        string staffName, staffId;

        cout << "Enter Student 1 Name: ";
        getline(cin, student1Name);
        cout << "Enter Student 1 ID: ";
        getline(cin, student1Id);
        cout << "Enter Student 2 Name: ";
        getline(cin, student2Name);
        cout << "Enter Student 2 ID: ";
        getline(cin, student2Id);

        cout << "Enter Staff Member Name: ";
        getline(cin, staffName);
        cout << "Enter Staff Member ID: ";
        getline(cin, staffId);

        Student student1(student1Name, stoi(student1Id));
        Student student2(student2Name, stoi(student2Id));
        Staff staff1(staffName, stoi(staffId));

        cout << "2 Students and 1 Staff member created." << endl << endl;

        //  Students and staff issue books (Student 1 = 2 books, Student 2 = 3 books, Staff = 2 books)
        int numBooksStudent1 = 2;
        int numBooksStudent2 = 3;
        int numBooksStaff = 2;

        string bookTitle;
        vector<Book>& books = library.getBooks();

        cout << "Issuing books for Student 1 (" << student1Name << "): " << endl;
        for (int i = 0; i < numBooksStudent1; i++) 
        {
            cout << "Enter Book Title to Issue: ";
            getline(cin, bookTitle);
            student1.IssueBook(books, bookTitle);
        }

        cout << endl << "Issuing books for Student 2 (" << student2Name << "): " << endl;
        for (int i = 0; i < numBooksStudent2; i++) 
        {
            cout << "Enter Book Title to Issue: ";
            getline(cin, bookTitle);
            student2.IssueBook(books, bookTitle);
        }

        cout << endl << "Issuing books for Staff Member (" << staffName << "): " << endl;
        for (int i = 0; i < numBooksStaff; i++) 
        {
            cout << "Enter Book Title to Issue: ";
            getline(cin, bookTitle);
            staff1.IssueBook(books, bookTitle);
        }

        cout << endl << "Books issued to students and staff." << endl << endl;

        // Set due dates (14 days for students, 16 weeks for staff)
        student1.SetDueDate(14);
        student2.SetDueDate(14);
        staff1.SetDueDate(112); // 16 weeks = 112 days

        // Display return dates for Student 1
        cout << "Return Dates for Student 1 (" << student1Name << "): " << endl;
        student1.DisplayIssuedBooksWithDueDates();
        cout << endl;

        //  Return books for Student 2 and calculate fine
        cout << "Simulating passage of 20 days for Student 2 " << endl;
        student2.ToGetTime(20); 
        cout << "Returning books for Student 2 (" << student2Name << "): " << endl;
        student2.ReturnAllBooks(books);
        cout << endl;

        //  Update status of returned books and user
        library.UpdateBookStatus();
        student2.UpdateUserStatus();
        cout << "Book and User statuses updated after return." << endl;
    } else 
    {
        cout << "Librarian login failed." << endl;
    }

    return 0;
}