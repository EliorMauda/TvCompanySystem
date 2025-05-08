# 📺 TV Company Management System

## 📝 Overview

This project is a comprehensive management system for a television company, enabling the management of employees, viewers, channels, complaints, and commercials. The system is written in C and offers an intuitive user interface for managing all aspects of the company.

---

## 🚀 Features

* 👩‍💼 Employee Management
* 👥 Viewer & Subscription Management
* 📡 Channel & Show Management
* 📢 Commercial Management
* 📬 Complaint Registration and Handling
* 📁 Text & Binary File Persistence
* 🔍 Advanced Search, Sorting & Filtering
* ⏰ Time and Date Utilities

---

## 🧱 Project Structure

The application is organized into clearly separated modules for maintainability and scalability:

### Core Modules

* `TvCompany.c/h` – Main company structure
* `Channel.c/h` – Channel operations
* `Show.c/h` – Show management
* `Employee.c/h` – Employee management
* `Viewer.c/h` – Viewer management
* `Contract.c/h` – Contract management

### Support Modules

* `Complaints.c/h` – Complaint system
* `Commercial.c/h` – Commercial management
* `Time.c/h` – Time management
* `Date.c/h` – Date management
* `List.c/h` – Generic list data structure implementation
* `General.c/h` – Helper and utility functions

---

## 💻 System Requirements

* Windows 10 or later
* Visual Studio 2019 or newer ( 2022 is preferred)

---

## 🔧 Setup & Running Instructions

1. Clone or download the repository
2. Open the solution file:
   `Elior_Mauda_Robert_ifraimov.vcxproj`
3. Build the project in Visual Studio
4. Run the application through the IDE or executable

---

## 🖥️ Usage

Once launched, the system presents an interactive menu:

* 0 - Load TvCompany From Text File
* 1 - Load TvCompany From Binary File
* 2 - Add Employee
* 3 - Add Viewer
* 4 - Create a Channel
* 5 - Add show to channel
* 6 - Add commercial to channel
* 7 - Add complaint
* 8 - Sort viewer
* 9 - Find viewer
* 10 - Print Tv company
* 11 - Print all viewers
* 12 - Print all employees
* 13 - Print all adults viewers
* 14 - Print all commercial with the same type
* -1 - Quit

---

## 💾 Data Persistence

All data can be saved and loaded using:

* 📄 Text files (`*.txt`)
* 📦 Binary files (`*.bin`)

---

## 🤝 Contributing

If you wish to contribute to the project, please contact the developers.

---

## 📄 License

© 2024 Elior Mauda & Robert Ifraimov. All rights reserved.
This project is currently not under an open-source license.
