# Locataire Management System

A desktop application built with Qt for managing tenants (locataires), including CRUD operations, PDF export, QR code generation, and data visualization via charts.

## 📦 Features

- Add, update, delete, and search tenants.
- Export tenant list to PDF.
- Generate QR code for tenant names.
- View basic statistical charts.
- Login authentication using Oracle SQL (via ODBC).
- Clean and responsive UI built with Qt Designer.

## 🛠️ Tech Stack

- **C++ / Qt 6.7**
- **Qt Widgets / Charts / PrintSupport / SQL Modules**
- **Oracle SQL Developer** (for DB management)
- **ODBC Driver** (for database connection)
- **qrcodegen** (QR code generation)

---

## 🧰 Requirements

- Qt 6.7.x or newer (including `QtSql`, `QtCharts`, `QtPrintSupport`, and `QtNetwork`)
- Oracle SQL Developer (Database setup)
- Oracle ODBC Driver installed
- `qrcodegen` library (included)

---

## 🔌 Database Configuration

1. Ensure **Oracle Database** is running and accessible.
2. Configure an **ODBC connection** to your Oracle DB:
   - Use `ODBC Data Source Administrator` (64-bit) on Windows.
   - Set up a **DSN** named `ORACLE_DSN` or as needed.
3. Update your `connection.cpp` (or similar) to match your DSN and credentials:

```cpp
QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
db.setDatabaseName("DSN=ORACLE_DSN");  // Replace with your actual DSN name
db.setUserName("your_username");
db.setPassword("your_password");
