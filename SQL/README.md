## Question 1: <br>Query all columns for all American cities in the CITY table with populations larger than 100000. The CountryCode for America is USA. <br>The CITY table is described as follows:
<img src="https://s3.amazonaws.com/hr-challenge-images/8137/1449729804-f21d187d0f-CITY.jpg">

### Solution:
```SELECT * FROM CITY WHERE COUNTRYCODE = 'USA' AND POPULATION > 100000;```
<br>
<br>
## Question 2: <br>Query the NAME field for all American cities in the CITY table with populations larger than 120000. The CountryCode for America is USA.<br>The CITY table is described as follows:
<img src="https://s3.amazonaws.com/hr-challenge-images/8137/1449729804-f21d187d0f-CITY.jpg">

### Solution:
```SELECT name FROM CITY WHERE COUNTRYCODE = 'USA' AND POPULATION > 120000;```
<br>
<br>
## Question 3: <br>Query all columns (attributes) for every row in the CITY table. <br>The CITY table is described as follows:
<img src="https://s3.amazonaws.com/hr-challenge-images/8137/1449729804-f21d187d0f-CITY.jpg">

### Solution:
```select * from city ;```
<br>
<br>
## Question 4: <br>Query all columns for a city in CITY with the ID 1661. <br>The CITY table is described as follows:
<img src="https://s3.amazonaws.com/hr-challenge-images/8137/1449729804-f21d187d0f-CITY.jpg">

### Solution:
```select * from city where id = 1661;```
<br>
<br>
## Question 5: <br>QQuery all attributes of every Japanese city in the CITY table. The COUNTRYCODE for Japan is JPN. <br>The CITY table is described as follows:
<img src="https://s3.amazonaws.com/hr-challenge-images/8137/1449729804-f21d187d0f-CITY.jpg">

### Solution:
```select * from city where countrycode = 'JPN' ;```
<br>
<br>
## Question 6: <br>Query the names of all the Japanese cities in the CITY table. The COUNTRYCODE for Japan is JPN. <br>The CITY table is described as follows:
<img src="https://s3.amazonaws.com/hr-challenge-images/8137/1449729804-f21d187d0f-CITY.jpg">

### Solution:
```select name from city where countrycode = 'JPN'```
<br>
<br>
## Question 7: <br>Query a list of CITY and STATE from the STATION table. <br>The STATION table is described as follows:
<img src="https://s3.amazonaws.com/hr-challenge-images/9336/1449345840-5f0a551030-Station.jpg">
## where LAT_N is the northern latitude and LONG_W is the western longitude.

### Solution:
```select city , state from station ;'```
<br>
<br>
## Question 8: <br>Query a list of CITY names from STATION for cities that have an even ID number. Print the results in any order, but exclude duplicates from the answer. <br>The STATION table is described as follows:
<img src="https://s3.amazonaws.com/hr-challenge-images/9336/1449345840-5f0a551030-Station.jpg">
## where LAT_N is the northern latitude and LONG_W is the western longitude.

### Solution:
```select distinct city from station where MOD (id,2)=0 ORDER BY CITY ;'```
<br>
<br>
## Question 9: <br>Find the difference between the total number of CITY entries in the table and the number of distinct CITY entries in the table. <br>The STATION table is described as follows:
<img src="https://s3.amazonaws.com/hr-challenge-images/9336/1449345840-5f0a551030-Station.jpg">
## where LAT_N is the northern latitude and LONG_W is the western longitude. <br>For example, if there are three records in the table with CITY values ‘New York’, ‘New York’, ‘Bengalaru’, there are 2 different city names: ‘New York’ and ‘Bengalaru’. The query returns 1.

### Solution:
```select count(CITY)- count(distinct CITY) from STATION;'```
<br>
<br>
## Question 10: <br>Query the two cities in STATION with the shortest and longest CITY names, as well as their respective lengths (i.e.: number of characters in the name). If there is more than one smallest or largest city, choose the one that comes first when ordered alphabetically. <br>The STATION table is described as follows:
<img src="https://s3.amazonaws.com/hr-challenge-images/9336/1449345840-5f0a551030-Station.jpg">
## where LAT_N is the northern latitude and LONG_W is the western longitude. <br>For example, if there are three records in the table with CITY values ‘New York’, ‘New York’, ‘Bengalaru’, there are 2 different city names: ‘New York’ and ‘Bengalaru’. The query returns 1.

### Solution:
```
select CITY,LENGTH(CITY) from STATION order by Length(CITY) asc, CITY limit 1; 
select CITY,LENGTH(CITY) from STATION order by Length(CITY) desc, CITY limit 1; 
```
<br>
<br>
## Question 11: <br> Query the list of CITY names starting with vowels (i.e., a, e, i, o, or u) from STATION. Your result cannot contain duplicates. <br>The STATION table is described as follows:
<img src="https://s3.amazonaws.com/hr-challenge-images/9336/1449345840-5f0a551030-Station.jpg">
## where LAT_N is the northern latitude and LONG_W is the western longitude. <br>For example, if there are three records in the table with CITY values ‘New York’, ‘New York’, ‘Bengalaru’, there are 2 different city names: ‘New York’ and ‘Bengalaru’. The query returns 1.

### Solution:
```
SELECT DISTINCT 
CITY 
FROM STATION 
WHERE lower(substr(CITY,1,1)) in ('a','e','i','o','u') ;
```
<br>
<br>
## Question 12: <br> Query the list of CITY names ending with vowels (a, e, i, o, u) from STATION. Your result cannot contain duplicates. <br>The STATION table is described as follows:
<img src="https://s3.amazonaws.com/hr-challenge-images/9336/1449345840-5f0a551030-Station.jpg">
## where LAT_N is the northern latitude and LONG_W is the western longitude.

### Solution:
```
SELECT DISTINCT(CITY) FROM STATION WHERE CITY LIKE '%a' OR CITY LIKE '%e' OR CITY LIKE '%i' OR CITY LIKE '%o' OR CITY LIKE '%u'; 
```
<br>
<br>
## Question 13: <br>Query the list of CITY names from STATION which have vowels (i.e., a, e, i, o, and u) as both their first and last characters. Your result cannot contain duplicates. <br>The STATION table is described as follows:
<img src="https://s3.amazonaws.com/hr-challenge-images/9336/1449345840-5f0a551030-Station.jpg">
## where LAT_N is the northern latitude and LONG_W is the western longitude.

### Solution:
```
SELECT DISTINCT CITY FROM STATION WHERE (CITY LIKE 'A%' OR CITY LIKE 'E%' OR CITY LIKE 'I%' OR CITY LIKE 'O%' OR CITY LIKE 'U%') AND (CITY LIKE '%a' OR CITY LIKE '%e' OR CITY LIKE '%i' OR CITY LIKE '%o' OR CITY LIKE '%u') order by city;      
```
<br>
<br>
## Question 14: <br>Query the list of CITY names from STATION that do not start with vowels. Your result cannot contain duplicates. <br>The STATION table is described as follows:
<img src="https://s3.amazonaws.com/hr-challenge-images/9336/1449345840-5f0a551030-Station.jpg">
## where LAT_N is the northern latitude and LONG_W is the western longitude.

### Solution:
```
SELECT DISTINCT CITY FROM STATION WHERE upper(SUBSTR(CITY,1,1)) NOT IN ('A','E','I','O','U') AND lower(SUBSTR(CITY,1,1)) NOT IN ('a','e','i','o','u');         
```
<br>
<br>
## Question 15: <br>Query the list of CITY names from STATION that do not end with vowels. Your result cannot contain duplicates. <br>The STATION table is described as follows:
<img src="https://s3.amazonaws.com/hr-challenge-images/9336/1449345840-5f0a551030-Station.jpg">
## where LAT_N is the northern latitude and LONG_W is the western longitude.

### Solution:
```
SELECT DISTINCT CITY FROM STATION WHERE UPPER(SUBSTR(CITY, LENGTH(CITY), 1)) NOT IN ('A','E','I','O','U') AND LOWER(SUBSTR(CITY, LENGTH(CITY),1)) NOT IN ('a','e','i','o','u');        
```
<br>
<br>
## Question 16: <br>Query the list of CITY names from STATION that either do not start with vowels or do not end with vowels. Your result cannot contain duplicates. <br>The STATION table is described as follows:
<img src="https://s3.amazonaws.com/hr-challenge-images/9336/1449345840-5f0a551030-Station.jpg">
## where LAT_N is the northern latitude and LONG_W is the western longitude.

### Solution:
```
SELECT DISTINCT CITY FROM STATION WHERE LOWER(SUBSTR(CITY,1,1)) NOT IN ('a','e','i','o','u') OR LOWER(SUBSTR(CITY, LENGTH(CITY),1)) NOT IN ('a','e','i','o','u');        
```
<br>
<br>
## Question 17: <br>Query the list of CITY names from STATION that do not start with vowels and do not end with vowels. Your result cannot contain duplicates. <br>The STATION table is described as follows:
<img src="https://s3.amazonaws.com/hr-challenge-images/9336/1449345840-5f0a551030-Station.jpg">
## where LAT_N is the northern latitude and LONG_W is the western longitude.

### Solution:
```
SELECT DISTINCT CITY FROM STATION WHERE LOWER(SUBSTR(CITY,1,1)) NOT IN ('a','e','i','o','u') AND LOWER(SUBSTR(CITY,LENGTH(CITY),1)) NOT IN ('a','e','i','o','u');         
```
<br>
<br>
## Question 18: <br>Query the list of CITY names from STATION that do not start with vowels and do not end with vowels. Your result cannot contain duplicates. <br>The STATION table is described as follows:
<img src="https://s3.amazonaws.com/hr-challenge-images/9336/1449345840-5f0a551030-Station.jpg">
## where LAT_N is the northern latitude and LONG_W is the western longitude.

### Solution:
```
SELECT DISTINCT CITY FROM STATION WHERE LOWER(SUBSTR(CITY,1,1)) NOT IN ('a','e','i','o','u') AND LOWER(SUBSTR(CITY,LENGTH(CITY),1)) NOT IN ('a','e','i','o','u');         
```
