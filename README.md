# 📚 Library Management System (C++)

A simple and modular **Library Management System** built using **C++ and Object-Oriented Programming (OOP)** principles.
This project demonstrates clean architecture, separation of concerns, and real-world system design.

---

## 🚀 Features

### 👤 Author Management

* Add new authors
* Remove authors
* View author details
* List all authors

### 📖 Book Management

* Add new books
* Remove books
* View book details
* List all books

### 🔗 Relationships

* Link books to authors using `author_id`
* Display all books written by a specific author

### ⚠️ Data Integrity

* Prevent deleting an author if they still have books *(recommended behavior)*
* Optionally support cascade deletion (author + their books)

---

## 🧱 Project Structure

```
LibraryProject/
│
├── include/            # Header files (.hpp)
│   ├── Author.hpp
│   ├── Book.hpp
│   ├── Library.hpp
│   └── Menu.hpp        # (optional UI layer)
│
├── src/                # Source files (.cpp)
│   ├── Author.cpp
│   ├── Book.cpp
│   ├── Library.cpp
│   ├── Menu.cpp        # (optional)
│   └── main.cpp
│
├── build/              # Compiled files (optional)
│
└── README.md
```

---

## 🛠️ Technologies Used

* **C++**
* **OOP (Object-Oriented Programming)**
* STL (`vector`, `algorithm`)

---

## ⚙️ Compilation & Run

### 🔧 Compile

```bash
g++ src/*.cpp -Iinclude -o main
```

### ▶️ Run

```bash
./main
```

---

## 🧠 Design Overview

The system is built around core entities:

* **AUTHOR** → stores author information
* **BOOK** → stores book details and links to an author via `author_id`
* **LIBRARY** → manages collections of authors and books

This design follows a **relational approach**, similar to how databases handle entity relationships.

---

## 📌 Future Improvements

* ✅ User (Member) system
* ✅ Loan/borrow/return functionality
* ✅ File persistence (save/load data)
* ✅ Search (by name/title)
* ✅ Interactive menu system
* ✅ GUI (Qt / web interface)

---

## 🎯 Learning Objectives

This project helps practice:

* Object-Oriented Design
* Separation of concerns
* STL usage (`vector`, `find_if`, `remove_if`)
* Const-correctness in C++
* Basic system architecture

---

## 📸 Example Output

```
==== LIBRARY SYSTEM ====

1. Manage Authors
2. Manage Books
3. Exit

Choose option:
```

---

## 🤝 Contributing

Feel free to fork this repository and improve it. Suggestions and pull requests are welcome!

---

## 📄 License

This project is open-source and available under the MIT License.
