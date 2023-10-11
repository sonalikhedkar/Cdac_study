
<h2>basic commands:</h2>
#to import .sql files in database:

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

CREATE TABLE Orders (
    OrderID int NOT NULL,
    OrderNumber int NOT NULL,
    PersonID int,
    PRIMARY KEY (OrderID),
    FOREIGN KEY (PersonID) REFERENCES Persons(PersonID)
);

8.when we have to see table that present in other database:
 select *from db_name.tbl_name;
 e.g select * from campus.student;
<h3> control flow functions</h3>
1)IF function:
syntax:
IF(condition, value_if_true, value_if_false)
>SELECT IF(500<1000, "YES", "NO");


b)
ALTER TABLE Orders
ADD FOREIGN KEY (PersonID) REFERENCES Persons(PersonID);

<h2>DDL Commands:</h2>

 <h3>CREATE:</h3>
 
1.create database database_name;

2.create table table_name(
column1 datatype,
column2 datatype,
column3 datatype,
........
);


for eg. 
create table student(id int primary key,
first_name varchar(10),
last_name varchar(10),
DOB date,
email_id varchar(128),
marks int
);

  



<h2>DML Commands:</h2>

<h3>INSERT:</h3>

Syntax:

a) INSERT INTO table_name (column1, column2, column3, ...)
VALUES (value1, value2, value3, ...);

b)INSERT INTO table_name
VALUES (value1, value2, value3, ...);

>insert into student values(1,"sonali",99);
here all fields are compulsory

> insert into student (id,name) values(2,"sharad");

>insert into student values(1,"sonali","khedkar",'02.01.2002','khedkarsona9@gmail.com',98);

<h3>SELECT Staments:</h3>

 Syntax:

SELECT what_to_select
FROM which_table
WHERE conditions_to_satisfy;

1) select *from dept;
2) select deptno,dname from dept;
3) select deptno,dname loc from dept where deptno=10;

<h4>select distinct</h4>
 >select distinct job from emp;
 
<h3>UPDATE:</h3>
syntax:

UPDATE table_name
SET column1 = value1, column2 = value2, ...
WHERE condition;

<h3>LIKE OPERATOR</h3>
