-- phpMyAdmin SQL Dump
-- version 5.2.1
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Generation Time: Aug 02, 2025 at 06:42 AM
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
-- Database: `data`
--

DELIMITER $$
--
-- Procedures
--
CREATE DEFINER=`root`@`localhost` PROCEDURE `deletepro` (INOUT `myid` INT)   BEGIN
    	DELETE FROM courses WHERE id = myid;
    END$$

CREATE DEFINER=`root`@`localhost` PROCEDURE `selectpro` (INOUT `myid` INT)   BEGIN
    	SELECT * FROM courses WHERE id = myid;
    END$$

CREATE DEFINER=`root`@`localhost` PROCEDURE `updatepro` (INOUT `myid` INT)   BEGIN
    	UPDATE courses SET c_name = 'java' WHERE id = myid;
    END$$

DELIMITER ;

-- --------------------------------------------------------

--
-- Table structure for table `audit_subscribe`
--

CREATE TABLE `audit_subscribe` (
  `id` int(11) NOT NULL,
  `subscriber_name` varchar(100) NOT NULL,
  `Action_performed` varchar(100) NOT NULL,
  `Datetime` datetime NOT NULL DEFAULT current_timestamp()
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `audit_subscribe`
--

INSERT INTO `audit_subscribe` (`id`, `subscriber_name`, `Action_performed`, `Datetime`) VALUES
(1, 'Divya', 'insert a new subsciber', '2025-08-02 10:00:01'),
(2, 'hensi', 'insert a new subsciber', '2025-08-02 10:09:42'),
(3, 'Anjali', 'insert a new subsciber', '2025-08-02 10:10:17'),
(4, 'Diya', 'insert a new subsciber', '2025-08-02 10:10:17'),
(5, 'hensi', 'update new subsciber', '2025-08-02 10:10:47'),
(6, 'hensi', 'delete new subsciber', '2025-08-02 10:10:47');

-- --------------------------------------------------------

--
-- Table structure for table `courses`
--

CREATE TABLE `courses` (
  `id` int(11) NOT NULL,
  `c_id` int(50) NOT NULL,
  `c_name` varchar(50) NOT NULL,
  `price` int(100) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `courses`
--

INSERT INTO `courses` (`id`, `c_id`, `c_name`, `price`) VALUES
(1, 101, 'C', 10000),
(2, 102, 'machine learing', 20000),
(3, 103, 'java', 60000),
(4, 104, 'designing', 50000),
(5, 105, 'Flutter', 70000),
(7, 107, 'php', 45000);

-- --------------------------------------------------------

--
-- Table structure for table `emp`
--

CREATE TABLE `emp` (
  `emp_num` int(11) NOT NULL,
  `first_name` varchar(50) DEFAULT NULL,
  `last_name` varchar(50) DEFAULT NULL,
  `designation` varchar(50) DEFAULT NULL,
  `hiredate` varchar(100) DEFAULT NULL,
  `salary` decimal(10,2) DEFAULT NULL,
  `comm` decimal(10,2) DEFAULT NULL,
  `deptno` int(11) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `emp`
--

INSERT INTO `emp` (`emp_num`, `first_name`, `last_name`, `designation`, `hiredate`, `salary`, `comm`, `deptno`) VALUES
(1, 'STEFAN', 'SALVATORE', 'BUSSINESS ANALYST', '29-nov-97', 50000.00, 0.00, 40);

-- --------------------------------------------------------

--
-- Table structure for table `student`
--

CREATE TABLE `student` (
  `S-id` int(11) NOT NULL,
  `S_name` varchar(500) NOT NULL,
  `id` int(11) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `student`
--

INSERT INTO `student` (`S-id`, `S_name`, `id`) VALUES
(1, 'bansi', 4),
(2, 'Bhavya', 2),
(3, 'Anjali', 1),
(4, 'Diya', 3);

-- --------------------------------------------------------

--
-- Table structure for table `subscribes`
--

CREATE TABLE `subscribes` (
  `s_id` int(11) NOT NULL,
  `fname` varchar(100) NOT NULL,
  `email` varchar(50) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `subscribes`
--

INSERT INTO `subscribes` (`s_id`, `fname`, `email`) VALUES
(1, 'Divya', 'Dp@gmail.com'),
(2, 'hensi', 'H24@gmail.com'),
(3, 'Anjali', 'Anjali24@gmail.com');

--
-- Triggers `subscribes`
--
DELIMITER $$
CREATE TRIGGER `deletetrigger` AFTER UPDATE ON `subscribes` FOR EACH ROW BEGIN

	INSERT INTO audit_subscribe SET Action_performed = 'delete new subsciber', subscriber_name= old.fname;
    
END
$$
DELIMITER ;
DELIMITER $$
CREATE TRIGGER `inserttrigger` AFTER INSERT ON `subscribes` FOR EACH ROW BEGIN

	INSERT INTO audit_subscribe SET Action_performed = 'insert a new subsciber', subscriber_name= new.fname;
    
END
$$
DELIMITER ;
DELIMITER $$
CREATE TRIGGER `updatetrigger` AFTER UPDATE ON `subscribes` FOR EACH ROW BEGIN

	INSERT INTO audit_subscribe SET Action_performed = 'update new subsciber', subscriber_name= old.fname;
    
END
$$
DELIMITER ;

-- --------------------------------------------------------

--
-- Table structure for table `teacher`
--

CREATE TABLE `teacher` (
  `id` int(11) NOT NULL,
  `T_name` varchar(100) NOT NULL,
  `T_course` varchar(50) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `teacher`
--

INSERT INTO `teacher` (`id`, `T_name`, `T_course`) VALUES
(1, 'Kinjal', 'Python'),
(2, 'Ranjan', 'data structer');

--
-- Indexes for dumped tables
--

--
-- Indexes for table `audit_subscribe`
--
ALTER TABLE `audit_subscribe`
  ADD PRIMARY KEY (`id`);

--
-- Indexes for table `courses`
--
ALTER TABLE `courses`
  ADD PRIMARY KEY (`id`);

--
-- Indexes for table `emp`
--
ALTER TABLE `emp`
  ADD PRIMARY KEY (`emp_num`);

--
-- Indexes for table `student`
--
ALTER TABLE `student`
  ADD PRIMARY KEY (`S-id`),
  ADD KEY `id` (`id`);

--
-- Indexes for table `subscribes`
--
ALTER TABLE `subscribes`
  ADD PRIMARY KEY (`s_id`);

--
-- Indexes for table `teacher`
--
ALTER TABLE `teacher`
  ADD PRIMARY KEY (`id`);

--
-- AUTO_INCREMENT for dumped tables
--

--
-- AUTO_INCREMENT for table `audit_subscribe`
--
ALTER TABLE `audit_subscribe`
  MODIFY `id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=7;

--
-- AUTO_INCREMENT for table `courses`
--
ALTER TABLE `courses`
  MODIFY `id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=9;

--
-- AUTO_INCREMENT for table `emp`
--
ALTER TABLE `emp`
  MODIFY `emp_num` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=2;

--
-- AUTO_INCREMENT for table `student`
--
ALTER TABLE `student`
  MODIFY `S-id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=5;

--
-- AUTO_INCREMENT for table `subscribes`
--
ALTER TABLE `subscribes`
  MODIFY `s_id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=5;

--
-- AUTO_INCREMENT for table `teacher`
--
ALTER TABLE `teacher`
  MODIFY `id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=3;
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
