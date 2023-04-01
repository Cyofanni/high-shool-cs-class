/*a city could belong to min:1, max: 1 region;
  a region could have min:0, max:n cities;

  cities(id, name, population, region);
  regions(id, name, population, gdp);
  ...
*/

DROP DATABASE IF EXISTS assignment_1;
CREATE DATABASE assignment_1;
USE assignment_1;
DROP TABLE IF EXISTS cities;
DROP TABLE IF EXISTS regions;

CREATE TABLE regions(
  id INT AUTO_INCREMENT,
  name VARCHAR(20) NOT NULL,
  population BIGINT NOT NULL,
  gdp BIGINT NOT NULL,
  PRIMARY KEY(id)
);

CREATE TABLE cities(
  id INT AUTO_INCREMENT,
  name VARCHAR(20) NOT NULL,
  population BIGINT NOT NULL,
  region INT NOT NULL,
  PRIMARY KEY(id),
  FOREIGN KEY(region) REFERENCES regions(id)
);

INSERT INTO regions(name, population, gdp)
VALUES('veneto', 5000000, 300000),
      ('lombardia', 1000000, 600000),
      ('toscana', 4000000, 250000),
      ('emptyregion', 1000000, 25000);

INSERT INTO cities(name, population, region)
VALUES('venezia', 250000, 1),
      ('milano', 1000000, 2),
      ('bergamo', 150000, 2),
      ('firenze', 350000, 3);

/*write a query that extracts the number of cities per region
output:
+-------------+------------+
| region_name | num_cities |
+-------------+------------+
| veneto      |          1 |
| lombardia   |          2 |
| toscana     |          1 |
+-------------+------------+
*/

SELECT
regions.name AS region_name,
COUNT(*) AS num_cities
FROM
cities
JOIN
regions
ON
cities.region = regions.id
GROUP BY region;

/*write a query that extracts the number of cities per region,
  but only when region has at least two cities.
*/
