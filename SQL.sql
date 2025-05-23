/* Below is used to create a table */
/* INT PRIMARY KEY is used to put unique numbers in the data */
/* VARCHAR(50) is used to put 50 characters for the field */
/* DATE is used to put date */
/* DECIMAL is used to put decimal having 10 digits before . and 2 digits after . */

CREATE TABLE IF NOT EXISTS employees (
    employee_id INT PRIMARY KEY,
    first_name VARCHAR(50) NOT NULL,
    last_name VARCHAR(50) NOT NULL,
    department VARCHAR(50) NOT NULL,
    position VARCHAR(50) NOT NULL,
    hire_date DATE UNIQUE,
    salary DECIMAL(10, 2)
);

/* Step 2: Delete existing data (to avoid primary key conflicts) */
DELETE FROM employees;
/* Insert initial data into employees table */
INSERT INTO employees (employee_id, first_name, last_name, department, position, hire_date, salary) 
VALUES 
    (1, 'John', 'Doe', 'IT', 'Developer', '2020-01-15', 60000.00),
    (2, 'John', 'Smith', 'HR', 'Manager', '2018-05-20', 75000.00),
    (3, 'Michael', 'Johnson', 'Sales', 'Salesperson', '2019-08-10', 55000.00),
    (4, 'Emily', 'Brown', 'Marketing', 'Coordinator', '2021-03-25', 50000.00);

/* Fetch data of all persons whose name is 'John', select is used to select, from, where *condition and 
as & operator and like is used to find people having doe as starting in their name and % is used to define 
something that is at last like Doe1 doe2... we can also use _ instead of %, _ will only take values with a number at last
8 isused to select the whole table at once */
SELECT * FROM employees
WHERE first_name = 'John'
AND last_name LIKE 'Doe%';

/* Update Emily's salary */
UPDATE employees
SET salary = 55000.00
WHERE first_name = 'Emily';

/* Uncomment the following lines to add a 'City' column */
/* ALTER TABLE employees
   ADD City VARCHAR(50);
*/

/* Update City for all employees */
UPDATE employees
SET City = 'NYC'; 

/* Order employees by first_name and last_name in ascending order */
SELECT * FROM employees
ORDER BY first_name, last_name ASC;

/* This will use first_name and last_name to order the table in ascending order, use DESC for descending order
this is done temporarily and is not permanent
we can use 'LIMIT 2' etc to get exactly 2 number or rows of data */
SELECT * FROM employees
ORDER BY first_name ASC
LIMIT 2;

/* <> means not equals */
SELECT * FROM employees
WHERE department <> 'IT';

/* we are using filter i.e. where employee id is less than 3 */
SELECT * FROM employees
WHERE employee_id < 3 ;

/* Similarly we have <= >= = < > AND OR */
SELECT * FROM employees
WHERE department IN ('IT','HR');
/* it will select only the ones who have department as IT or HR */

SELECT COUNT(department)
FROM employees
WHERE first_name='John';
/*used to count the number  of people with a department
similarly we can use AVG() as average and SUM()*/

SELECT COUNT(department), department
FROM employees
GROUP BY department;


/* we used the count of people of a department and we printed its department, it will tell
how many people are from which department*/

SELECT first_name
FROM employees
UNION
SELECT last_name
FROM employees;
/*We can use it to form union of 2 different tables, however i have used employees in both of them
as i havent created 2 tables 

SELECT employee_id, ...
FROM employees
JOIN *table name* 
ON employee.employeeid= *table name*. * something*;

it is used to join 2 tables, employee and some other table with the condition that employee id
of employee is same as 2nd table's some thing


THIS IS ALL THE SQL YOU HAVE TO LEARN AND DO, ANYTHING OTHER THAN THIS IS NOT VERY USEFUL HOWEVER
IF YOU HAVE TIME THEN YOU CAN DO IT*/



