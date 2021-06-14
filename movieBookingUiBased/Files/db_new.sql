-- MySQL dump 10.13  Distrib 5.7.34, for Linux (x86_64)
--
-- Host: localhost    Database: movies
-- ------------------------------------------------------
-- Server version	5.7.34-0ubuntu0.18.04.1

/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8 */;
/*!40103 SET @OLD_TIME_ZONE=@@TIME_ZONE */;
/*!40103 SET TIME_ZONE='+00:00' */;
/*!40014 SET @OLD_UNIQUE_CHECKS=@@UNIQUE_CHECKS, UNIQUE_CHECKS=0 */;
/*!40014 SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0 */;
/*!40101 SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='NO_AUTO_VALUE_ON_ZERO' */;
/*!40111 SET @OLD_SQL_NOTES=@@SQL_NOTES, SQL_NOTES=0 */;

--
-- Table structure for table `admins`
--

DROP TABLE IF EXISTS `admins`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `admins` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `username` varchar(255) DEFAULT NULL,
  `password` varchar(255) DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB AUTO_INCREMENT=3 DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `admins`
--

LOCK TABLES `admins` WRITE;
/*!40000 ALTER TABLE `admins` DISABLE KEYS */;
INSERT INTO `admins` VALUES (1,'admin','pass'),(2,'admin2','pass2');
/*!40000 ALTER TABLE `admins` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `discount_code`
--

DROP TABLE IF EXISTS `discount_code`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `discount_code` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `code` varchar(255) NOT NULL,
  `percentage` int(11) DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB AUTO_INCREMENT=5 DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `discount_code`
--

LOCK TABLES `discount_code` WRITE;
/*!40000 ALTER TABLE `discount_code` DISABLE KEYS */;
INSERT INTO `discount_code` VALUES (1,'demo1',10),(3,'demo3',30),(4,'dem04',15);
/*!40000 ALTER TABLE `discount_code` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `movieName`
--

DROP TABLE IF EXISTS `movieName`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `movieName` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `name` varchar(255) DEFAULT NULL,
  PRIMARY KEY (`id`),
  UNIQUE KEY `name_UNIQUE` (`name`)
) ENGINE=InnoDB AUTO_INCREMENT=13 DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `movieName`
--

LOCK TABLES `movieName` WRITE;
/*!40000 ALTER TABLE `movieName` DISABLE KEYS */;
INSERT INTO `movieName` VALUES (9,'ASUR'),(3,'Kalam'),(5,'Khichdi 2'),(4,'Love Aaj Kal'),(2,'Robot 2'),(1,'Super Man 2');
/*!40000 ALTER TABLE `movieName` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `movie_timings`
--

DROP TABLE IF EXISTS `movie_timings`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `movie_timings` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `movie_id` varchar(45) NOT NULL,
  `timing` varchar(45) NOT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB AUTO_INCREMENT=15 DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `movie_timings`
--

LOCK TABLES `movie_timings` WRITE;
/*!40000 ALTER TABLE `movie_timings` DISABLE KEYS */;
INSERT INTO `movie_timings` VALUES (1,'1','9:30AM'),(2,'2','8:30AM'),(3,'3','10:30AM'),(4,'4','9:00AM'),(5,'5','7:30AM'),(6,'1','12:00PM'),(7,'2','11:00AM'),(8,'3','10:00AM'),(9,'4','12:00PM'),(10,'5','1:00PM'),(11,'9','16:00PM'),(12,'9','8:45AM'),(13,'9','7:00AM'),(14,'3','13:00PM');
/*!40000 ALTER TABLE `movie_timings` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `orders`
--

DROP TABLE IF EXISTS `orders`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `orders` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `name` varchar(255) NOT NULL,
  `email` varchar(255) NOT NULL,
  `phone` varchar(45) NOT NULL,
  `totai_paid` double NOT NULL,
  `payment_method` varchar(255) NOT NULL,
  `total_tickets` int(11) NOT NULL,
  `seats` varchar(255) NOT NULL,
  `movie_name` varchar(255) NOT NULL,
  `movie_timing` varchar(255) NOT NULL,
  `date` varchar(255) NOT NULL,
  PRIMARY KEY (`id`),
  UNIQUE KEY `id_UNIQUE` (`id`)
) ENGINE=InnoDB AUTO_INCREMENT=9 DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `orders`
--

LOCK TABLES `orders` WRITE;
/*!40000 ALTER TABLE `orders` DISABLE KEYS */;
INSERT INTO `orders` VALUES (2,'Sahil','sahil@gmail.com','9814570347',420,'UPI/Paytm',3,'3R -1;3R -1;3R -3;','ASUR','7:00AM','Sun Jun 13 05:21:24 2021\n'),(3,'Sahl','s@m.com','911',3145776,'UPI/Paytm',1,'2R -2;','Kalam','10:30AM','Mon Jun 14 21:59:51 2021\n'),(4,'Sa','s','981',3145776,'UPI/Paytm',1,'2R -2;','Kalam','10:30AM','Mon Jun 14 22:19:41 2021\n'),(5,'Sah','d@g.oc','98145',3145776,'UPI/Paytm',1,'3R -2;','ASUR','16:00PM','Mon Jun 14 22:21:53 2021\n'),(6,'s','s@g','98145',3145776,'UPI/Paytm',1,'3R -3;','ASUR','16:00PM','Mon Jun 14 22:24:15 2021\n'),(7,'Sa','sa@g','9111',3145776,'UPI/Paytm',1,'4R -2;','Kalam','10:30AM','Mon Jun 14 22:30:27 2021\n'),(8,'sa','s@g.com','98145',3145776,'UPI/Paytm',1,'1R -3;','ASUR','16:00PM','Mon Jun 14 22:32:42 2021\n');
/*!40000 ALTER TABLE `orders` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `theaterOne`
--

DROP TABLE IF EXISTS `theaterOne`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `theaterOne` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `row` int(11) NOT NULL,
  `col` int(11) NOT NULL,
  `isBooked` varchar(45) NOT NULL,
  PRIMARY KEY (`id`),
  UNIQUE KEY `id_UNIQUE` (`id`)
) ENGINE=InnoDB AUTO_INCREMENT=31 DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `theaterOne`
--

LOCK TABLES `theaterOne` WRITE;
/*!40000 ALTER TABLE `theaterOne` DISABLE KEYS */;
INSERT INTO `theaterOne` VALUES (1,0,0,'0'),(2,0,1,'0'),(3,0,2,'0'),(4,0,3,'0'),(5,0,4,'0'),(6,0,5,'0'),(7,1,0,'0'),(8,1,1,'0'),(9,1,2,'0'),(10,1,3,'0'),(11,1,4,'1'),(12,1,5,'0'),(13,2,0,'0'),(14,2,1,'0'),(15,2,2,'0'),(16,2,3,'0'),(17,2,4,'0'),(18,2,5,'1'),(19,3,0,'0'),(20,3,1,'0'),(21,3,2,'0'),(22,3,3,'1'),(23,3,4,'0'),(24,3,5,'0'),(25,4,0,'0'),(26,4,1,'0'),(27,4,2,'0'),(28,4,3,'0'),(29,4,4,'0'),(30,4,5,'0');
/*!40000 ALTER TABLE `theaterOne` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Dumping routines for database 'movies'
--
/*!40103 SET TIME_ZONE=@OLD_TIME_ZONE */;

/*!40101 SET SQL_MODE=@OLD_SQL_MODE */;
/*!40014 SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS */;
/*!40014 SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
/*!40111 SET SQL_NOTES=@OLD_SQL_NOTES */;

-- Dump completed on 2021-06-14 22:35:08
