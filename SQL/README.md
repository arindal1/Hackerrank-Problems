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
```sselect distinct city from station where MOD (id,2)=0 ORDER BY CITY ;'```
