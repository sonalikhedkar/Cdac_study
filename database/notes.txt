
basic commands:
#to import .sql files

mysql> SOURCE /path/to/file.sql

1. show databases;
 this shows all databases that are present.

2.use database_name;

3.show tables;
this shows all tables present in database.

4.desc table_name;
this gives description of tables.

5.Add primary key in existing table to column:
alter table student add primary key (id);

6.add unique key in table:
 alter table student add unique key(email_id);

7. add foriegn key in table:
a)
CREATE TABLE Orders (
    OrderID int NOT NULL,
    OrderNumber int NOT NULL,
    PersonID int,
    PRIMARY KEY (OrderID),
    FOREIGN KEY (PersonID) REFERENCES Persons(PersonID)
);

b)
ALTER TABLE Orders
ADD FOREIGN KEY (PersonID) REFERENCES Persons(PersonID);

DDL Commands:

 CREATE:
1.create database database_name;

2.create table table_name(
column1 datatype,
column2 datatype,
column3 datatype,
........
);


for eg. create table student(id int primary key,
first_name varchar(10),
last_name varchar(10),
DOB date,
email_id varchar(128),
marks int
);

  



DML Commands:

INSERT:

 Syntax:

a) INSERT INTO table_name (column1, column2, column3, ...)
VALUES (value1, value2, value3, ...);

b)INSERT INTO table_name
VALUES (value1, value2, value3, ...);

>insert into student values(1,"sonali",99);
here all fields are compulsory

> insert into student (id,name) values(2,"sharad");

>insert into student values(1,"sonali","khedkar",'02.01.2002','khedkarsona9@gmail.com',98);

SELECT Staments

 Syntax:

SELECT what_to_select
FROM which_table
WHERE conditions_to_satisfy;

UPDATE:
syntax:

UPDATE table_name
SET column1 = value1, column2 = value2, ...
WHERE condition;

LIKE OPERATOR
