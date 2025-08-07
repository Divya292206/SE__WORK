-- phpMyAdmin SQL Dump
-- version 5.2.1
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Generation Time: Aug 07, 2025 at 11:18 AM
-- Server version: 10.4.32-MariaDB
-- PHP Version: 8.0.30

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `mydatabase`
--

-- --------------------------------------------------------

--
-- Table structure for table `customer`
--

CREATE TABLE `customer` (
  `customer_id` int(11) NOT NULL,
  `customer_name` varchar(100) DEFAULT NULL,
  `city` varchar(100) DEFAULT NULL,
  `grade` int(11) DEFAULT NULL,
  `salesman_id` int(11) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `customer`
--

INSERT INTO `customer` (`customer_id`, `customer_name`, `city`, `grade`, `salesman_id`) VALUES
(3001, 'Brad Guzan', 'London', 300, 5005),
(3002, 'Nick Rimando', 'New York', 100, 5001),
(3003, 'Jozy Altidore', 'Moscow', 200, 5007),
(3004, 'Fabian Johnson', 'Paris', 100, 5006),
(3005, 'Graham Zusi', 'California', 200, 5002),
(3007, 'Brad Davis', 'New York', 200, 5001),
(3008, 'Julian Green', 'London', 300, 5005),
(3009, 'Geoff Cameron', 'Berlin', 100, 5003);

-- --------------------------------------------------------

--
-- Table structure for table `salesman`
--

CREATE TABLE `salesman` (
  `salesman_id` int(11) NOT NULL,
  `salesman_name` varchar(100) DEFAULT NULL,
  `commission` decimal(5,2) DEFAULT NULL,
  `city` varchar(100) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `salesman`
--

INSERT INTO `salesman` (`salesman_id`, `salesman_name`, `commission`, `city`) VALUES
(5001, 'James Hoog', 0.15, 'New York'),
(5002, 'Nail Knite', 0.13, 'Paris'),
(5003, 'Lauson Hen', 0.12, 'San Jose'),
(5005, 'Pit Alex', 0.14, 'London'),
(5006, 'Mc Lyon', 0.13, 'Paris'),
(5007, 'Paul Adam', 0.13, 'Rome');

--
-- Indexes for dumped tables
--

--
-- Indexes for table `customer`
--
ALTER TABLE `customer`
  ADD PRIMARY KEY (`customer_id`),
  ADD KEY `salesman_id` (`salesman_id`);

--
-- Indexes for table `salesman`
--
ALTER TABLE `salesman`
  ADD PRIMARY KEY (`salesman_id`);
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
