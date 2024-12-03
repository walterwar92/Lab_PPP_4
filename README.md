Описание

Это приложение для работы с базой данных SQL Server. Оно позволяет выполнять операции, такие как:

    Экспорт данных таблицы в файл CSV или текстовый файл.
    Добавление, поиск, обновление и удаление записей в базе данных.
    Создание новой таблицы в базе данных.

Функции

    Создание таблицы:
        Создайте новую таблицу в базе данных с заданной структурой.
        Используется SQL-запрос для создания таблицы с полями ID, TariffName, Cost и Discount.

    Добавление данных:
        Добавьте новую запись в таблицу с полями TariffName, Cost, Discount.
        Происходит проверка ввода данных (например, проверка корректности скидки).

    Поиск данных:
        Поиск записей по полям TariffName, Cost, Discount.
        Можно искать как по точным значениям, так и с использованием подстрочных совпадений для строк.

    Удаление данных:
        Удаление записи по уникальному идентификатору (ID).
        Подтверждение удаления перед выполнением операции.

    Экспорт данных:
        Экспорт всех данных из выбранной таблицы в файл формата CSV или TXT.
        Каждый столбец и строка записываются в файл, с учетом разделителей, если они присутствуют в значениях.

    Обновление отображаемых данных:
        Обновление таблицы в DataGridView после выполнения операций вставки, удаления или изменения.

Требования

    Microsoft SQL Server.
    C++/CLI для работы с Windows Forms.
    .NET Framework (например, версия 4.8).

Инструкции по установке

    Скачайте исходный код.
    Скомпилируйте проект в Visual Studio.
    Подключитесь к вашей базе данных SQL Server.

Примечания

    Убедитесь, что у вас есть соответствующие права для создания таблиц и изменения данных в базе данных.
    Программа работает с одной таблицей, название которой задается пользователем.

Description

This application is designed to work with an SQL Server database. It allows you to perform operations such as:

    Export data from a table to a CSV or text file.
    Add, search, update, and delete records in the database.
    Create a new table in the database.

Features

    Create Table:
        Create a new table in the database with a predefined structure.
        Uses a SQL query to create a table with columns: ID, TariffName, Cost, and Discount.

    Add Data:
        Add a new record to the table with fields TariffName, Cost, Discount.
        Includes validation for user input (e.g., checking if the discount is correct).

    Search Data:
        Search for records by fields TariffName, Cost, Discount.
        You can search by exact values or use partial matches for string fields.

    Delete Data:
        Delete a record by its unique ID.
        A confirmation prompt appears before executing the deletion.

    Export Data:
        Export all data from a selected table to a CSV or TXT file.
        Each column and row is written to the file, with handling for separators if present in the values.

    Refresh Data Display:
        Refresh the table in the DataGridView after performing insert, delete, or update operations.

Requirements

    Microsoft SQL Server.
    C++/CLI with Windows Forms.
    .NET Framework (e.g., version 4.8).

Installation Instructions

    Download the source code.
    Compile the project in Visual Studio.
    Connect to your SQL Server database.

Notes

    Make sure you have appropriate permissions to create tables and modify data in the database.
    The application works with one table, and the table name is specified by the user.
