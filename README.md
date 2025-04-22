# 🏢 Tenant Management System

![Qt Version](https://img.shields.io/badge/Qt-5/6-blue)
![Language](https://img.shields.io/badge/C++-17-blueviolet)
![License](https://img.shields.io/badge/license-MIT-green)
![Platform](https://img.shields.io/badge/platform-Desktop%20App-lightgrey)

A Qt/C++ desktop application for managing tenants in a residential building or housing complex. Designed for administrators, landlords, or building managers to streamline daily tasks such as tenant tracking, QR code generation, and data analysis.

---

## 🚀 Features

- ➕ Add new tenants  
- 📝 Edit tenant details  
- ❌ Delete tenants  
- 👁️ Display tenants in a sortable, searchable table  
- 📎 Generate QR Codes with tenant information  
- 🔍 Sort and filter tenants  
- 📊 View statistics and analytics using charts  
- 🔐 Login system for secure access  

## 🛠️ Technologies Used

- **Qt Framework 5/6**
- **C++**
- **SQLite / MySQL** for database
- **QtCharts** for statistics
- **QZXing** or another QR Code generator library
- **QSqlDatabase / QMessageBox / QTableView**

---

## 💻 Installation

### Prerequisites

- Qt Creator (v5 or v6)
- C++17 support
- Git (optional)

### Steps

1. Clone the repository:
   ```bash
   git clone https://github.com/dhiamejdi/tenant-management.git
🧾 Database
This app works with:

SQLite (local database file)

or MySQL via ODBC/QMYSQL driver

Use the database.sql script to create the initial schema.

📈 Statistics Module
Displays real-time charts using QtCharts for:

Tenants per apartment type

Registrations over time

Payment statuses

🔐 Login System
Includes a basic secure login for administrators.
Default credentials can be configured directly in the database.

🤝 Contribution
Pull requests are welcome!
Open an issue first to discuss major feature changes.

📜 License
This project is licensed under the MIT License.
See the LICENSE file for more information.

👤 Author
Developed by [Dhia Mejdi]
📧 Contact: dhiamejdi@gmail.com
