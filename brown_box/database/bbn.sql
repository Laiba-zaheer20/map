-- phpMyAdmin SQL Dump
-- version 4.8.5
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Generation Time: Aug 28, 2020 at 01:55 AM
-- Server version: 10.1.38-MariaDB
-- PHP Version: 7.1.28

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
SET AUTOCOMMIT = 0;
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `ameer_bbn`
--

-- --------------------------------------------------------

--
-- Table structure for table `auths`
--

CREATE TABLE `auths` (
  `auth_id` int(11) NOT NULL,
  `order_no` varchar(3) NOT NULL,
  `customer` varchar(3) NOT NULL,
  `date_order` varchar(3) NOT NULL,
  `received_date` varchar(3) NOT NULL,
  `status` varchar(3) NOT NULL,
  `descr` varchar(3) NOT NULL,
  `img` varchar(3) NOT NULL,
  `title` varchar(3) NOT NULL,
  `upc` varchar(255) NOT NULL,
  `part_no` varchar(255) NOT NULL,
  `supplier` varchar(3) NOT NULL,
  `track_numb` varchar(3) NOT NULL,
  `asin_numb` varchar(3) NOT NULL,
  `quantity` varchar(3) NOT NULL,
  `size` varchar(3) NOT NULL,
  `service` varchar(3) NOT NULL,
  `cond` varchar(3) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `auths`
--

INSERT INTO `auths` (`auth_id`, `order_no`, `customer`, `date_order`, `received_date`, `status`, `descr`, `img`, `title`, `upc`, `part_no`, `supplier`, `track_numb`, `asin_numb`, `quantity`, `size`, `service`, `cond`) VALUES
(1, 'no', 'yes', 'yes', 'yes', 'yes', 'yes', 'yes', 'yes', 'yes', 'yes', 'yes', 'yes', 'yes', 'yes', 'yes', 'yes', 'yes');

-- --------------------------------------------------------

--
-- Table structure for table `invoices`
--

CREATE TABLE `invoices` (
  `id` int(11) NOT NULL,
  `orders_id` int(11) NOT NULL,
  `user_orders_id` int(11) NOT NULL,
  `user_id` int(11) NOT NULL,
  `datetime` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `invoices`
--

INSERT INTO `invoices` (`id`, `orders_id`, `user_orders_id`, `user_id`, `datetime`) VALUES
(13, 8, 5, 7, '2020-07-10 23:13:07'),
(14, 8, 5, 7, '2020-08-04 13:13:29'),
(15, 8, 5, 7, '2020-08-06 18:39:35'),
(16, 8, 5, 7, '2020-08-06 21:56:31'),
(17, 8, 5, 7, '2020-08-26 07:55:45'),
(18, 16, 6, 7, '2020-08-26 07:55:51');

-- --------------------------------------------------------

--
-- Table structure for table `orders`
--

CREATE TABLE `orders` (
  `id` int(11) NOT NULL,
  `order_number` varchar(255) NOT NULL,
  `user_id` int(11) NOT NULL,
  `date_ordered` date NOT NULL,
  `description` text NOT NULL,
  `status` enum('incoming','picked','received','prepared','packed','shipped','ordered') NOT NULL,
  `date_added` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP,
  `received_date` timestamp NULL DEFAULT NULL,
  `is_deleted` tinyint(1) NOT NULL,
  `is_archive` tinyint(4) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `orders`
--

INSERT INTO `orders` (`id`, `order_number`, `user_id`, `date_ordered`, `description`, `status`, `date_added`, `received_date`, `is_deleted`, `is_archive`) VALUES
(8, '1234abc', 7, '2020-07-11', 'asdklfjalsdfj', 'ordered', '2020-07-10 23:07:55', NULL, 0, 0),
(16, 'asdf', 7, '2020-07-17', 'asdfaf', 'ordered', '2020-07-12 20:35:19', NULL, 0, 0),
(33, '', 15, '2020-03-18', 'ST.CROIX Legend Trek 7ft MF 3pc Spinning Rod (LTS70MF3)', 'incoming', '2020-08-07 23:06:33', NULL, 0, 0),
(34, '', 15, '2019-12-20', 'ST.CROIX Tidemaster Inshore 7ft MLF 3pc Travel Rod (TIS70MLF3)', 'received', '2020-08-07 23:06:33', '2020-03-11 04:00:00', 0, 0),
(35, '', 15, '2019-12-20', 'ST.CROIX Tidemaster Inshore 7.6ft MF 3pc Travel Rod (TIS76MF3)', 'received', '2020-08-07 23:06:33', '2020-06-01 04:00:00', 0, 0),
(36, '', 15, '2020-03-18', 'ST.CROIX Premier 7ft HF 2pc Casting Rod (PC70HF2)', 'incoming', '2020-08-08 01:44:35', NULL, 0, 0),
(37, '', 15, '2020-03-18', 'ST.CROIX Avid 6.6ft MHF 2pc Spinning Rod (AVS66MHF2)', 'incoming', '2020-08-08 01:44:35', NULL, 0, 0),
(39, '', 15, '2020-05-20', 'COUNCIL TOOL Dayton Single 36in Curved Handle 3.5lb Bit Axe (35DR36C)', 'incoming', '2020-08-08 01:44:35', NULL, 0, 0),
(40, '', 15, '2020-05-20', 'COUNCIL TOOL Double Edge 30in Wooden Handle 12in Ditch Bank Blade (1230)', 'incoming', '2020-08-08 01:44:35', NULL, 0, 0),
(41, '', 15, '0000-00-00', 'COUNCIL TOOL Sledge Eye 36in Straight Handle 6lb Splitting Maul (PR60M)', 'incoming', '2020-08-08 01:44:35', NULL, 0, 0),
(42, '', 15, '0000-00-00', 'COUNCIL TOOL Dayton Miners 20in Straight Handle 3.5lb Axe (35MD20)', 'incoming', '2020-08-08 01:44:35', NULL, 0, 0),
(43, '', 15, '0000-00-00', 'ST.CROIX Premier 7ft HF 2pc Casting Rod (PC70HF2)', 'incoming', '2020-08-08 01:44:58', NULL, 0, 0),
(44, '', 15, '0000-00-00', 'ST.CROIX Avid 6.6ft MHF 2pc Spinning Rod (AVS66MHF2)', 'incoming', '2020-08-08 01:44:58', NULL, 0, 0),
(45, '', 15, '0000-00-00', 'COUNCIL TOOL Hudson Bay Camp 2lb 28in Curved Sport Utility Axe (SU20HB28C)', 'incoming', '2020-08-08 01:44:58', NULL, 0, 0),
(46, '', 15, '0000-00-00', 'COUNCIL TOOL Dayton Single 36in Curved Handle 3.5lb Bit Axe (35DR36C)', 'incoming', '2020-08-08 01:44:58', NULL, 0, 0),
(47, '', 15, '0000-00-00', 'COUNCIL TOOL Double Edge 30in Wooden Handle 12in Ditch Bank Blade (1230)', 'incoming', '2020-08-08 01:44:58', NULL, 0, 1),
(48, '', 15, '0000-00-00', 'COUNCIL TOOL Sledge Eye 36in Straight Handle 6lb Splitting Maul (PR60M)', 'incoming', '2020-08-08 01:44:58', NULL, 0, 1),
(49, '', 15, '0000-00-00', 'COUNCIL TOOL Dayton Miners 20in Straight Handle 3.5lb Axe (35MD20)', 'incoming', '2020-08-08 01:44:58', NULL, 0, 1),
(50, '', 13, '2020-08-11', 'sDAad', 'received', '2020-08-10 14:54:58', '2020-08-11 04:00:00', 0, 0),
(51, '', 7, '2020-08-10', 'dgdrgrdgrdgr', 'received', '2020-08-10 19:20:08', '2020-08-11 04:00:00', 0, 0),
(53, '', 7, '2020-08-12', 'my new test order', 'shipped', '2020-08-11 14:46:05', NULL, 0, 1),
(54, '', 7, '2020-08-11', 'asdfasf', 'ordered', '2020-08-11 14:51:13', '2020-08-11 04:00:00', 0, 0),
(57, '', 7, '2020-08-12', 'my new test order', 'incoming', '2020-08-26 09:56:02', NULL, 0, 1),
(58, '', 9, '2020-08-28', 'test', 'incoming', '2020-08-27 21:15:31', NULL, 0, 1),
(60, '', 9, '2020-08-28', 'test desciprtion', 'incoming', '2020-08-27 21:52:21', NULL, 0, 0);

-- --------------------------------------------------------

--
-- Table structure for table `orders_more`
--

CREATE TABLE `orders_more` (
  `order_more_id` int(11) NOT NULL,
  `order_id` int(11) NOT NULL,
  `upc` varchar(255) NOT NULL,
  `part_no` varchar(255) NOT NULL,
  `image` varchar(255) NOT NULL,
  `supplier` varchar(255) NOT NULL,
  `tracking_number` varchar(255) NOT NULL,
  `asin_number` varchar(255) NOT NULL,
  `qty` int(11) NOT NULL,
  `size_in_inches` int(11) NOT NULL,
  `services` text NOT NULL,
  `notes` text NOT NULL,
  `quality` varchar(5) DEFAULT NULL,
  `good_qty` int(11) NOT NULL,
  `bad_qty` int(11) NOT NULL,
  `location` varchar(225) NOT NULL
) ENGINE=MyISAM DEFAULT CHARSET=latin1;

--
-- Dumping data for table `orders_more`
--

INSERT INTO `orders_more` (`order_more_id`, `order_id`, `upc`, `part_no`, `image`, `supplier`, `tracking_number`, `asin_number`, `qty`, `size_in_inches`, `services`, `notes`, `quality`, `good_qty`, `bad_qty`, `location`) VALUES
(22, 16, '', '', '31851.jpg', 'asdf', 'asdf', '234', 324, 234, 'df', 'asasdfa', NULL, 0, 0, ''),
(23, 16, '', '', '6546logo.png', 'asdf', 'asd', 'sdfadf', 34, 234, 'asdf', 'asdfas', NULL, 0, 0, ''),
(72, 44, '', '', '76262.png2wbmp(pngname, wbmpname, dest_height, dest_width, threshold)', 'St.Croix Rod - ACH', '1Z5898480345033292', 'STCR-AVS66MHF2', 1, 0, 'FBA', '780647029663', '1', 0, 0, ''),
(81, 36, '', '', '5135han5.jpg', 'St.Croix Rod - ACH', '1Z5898480345033292', 'STCR-PC70HF2', 2, 0, 'FBA', '780647023142', NULL, 0, 0, ''),
(79, 37, '', '', '3844s-l1600.jpg', 'St.Croix Rod - ACH', '1Z5898480345033292', 'STCR-AVS66MHF2', 1, 0, 'FBA', '780647029663', NULL, 0, 0, ''),
(90, 51, '', '', '7775resale2logo.gif', 'gfdgdfg', 'gfdgdf', 'fgdfgdfg', 4, 123, 'gdfgdf', 'fdgdfgdfggfd', NULL, 0, 0, ''),
(84, 38, '', '', '9232SU20HB19C.jpg', 'Council Tool', 'N/A', 'COUT-SU20HB28C', 0, 0, 'FBA', '8298424065', NULL, 0, 0, ''),
(85, 50, '', '', '4029404.png', 'asdasd', '342', '343', 324, 23, 'asdasd', 'adfsdfsf', NULL, 34, 8, 'dfwefwef'),
(82, 39, '', '', '696841qAosAgFmL._AC_SL1111_.jpg', 'Council Tool', 'N/A', 'COUT-35DR36C', 24, 0, 'FBA', '8298254136', NULL, 0, 0, ''),
(91, 55, '', '', '7386Deadener_1.jpg', 'yrtyrty', 'rthrthrth', 'urtyrtyh', 34, 435, 'rthrth', 'rftyhrthrt', NULL, 0, 0, ''),
(83, 40, '', '', '478351ZO94wUqvL._AC_SL1500_.jpg', 'Council Tool', 'N/A', 'COUT-1230', 60, 0, 'FBA', '8298305197', NULL, 0, 0, ''),
(69, 41, '', '', '76262.png2wbmp(pngname, wbmpname, dest_height, dest_width, threshold)', 'Council Tool', 'N/A', 'COUT-PR60M', 20, 0, 'FBA', '8298601251', '20', 0, 0, ''),
(70, 42, '', '', '76262.png2wbmp(pngname, wbmpname, dest_height, dest_width, threshold)', 'Council Tool', 'N/A', 'COUT-35MD20', 20, 0, 'FBA', '8298203059', '20', 0, 0, ''),
(71, 43, '', '', '76262.png2wbmp(pngname, wbmpname, dest_height, dest_width, threshold)', 'St.Croix Rod - ACH', '1Z5898480345033292', 'STCR-PC70HF2', 2, 0, 'FBA', '780647023142', '2', 0, 0, ''),
(63, 33, '', '', '474241s-1RelIvL._AC_SL1200_.jpg', 'St.Croix Rod - ACH', 'backorders', 'STCR-LTS70MF3', 2, 0, 'FBA', 'N/A', NULL, 0, 0, ''),
(62, 34, '', '', '144741s-1RelIvL._AC_SL1200_.jpg', 'St.Croix Rod - ACH', 'backorders', 'STCR-TIS70MLF3', 2, 0, 'FBA', 'N/A', NULL, 2, 0, '5-c-875'),
(61, 35, '', '', '491041s-1RelIvL._AC_SL1200_.jpg', 'St.Croix Rod - ACH', '1Z5898480345033292', 'STCR-TIS76MF3', 2, 0, 'FBA', 'N/A', NULL, 2, 0, '8-A-436'),
(73, 45, '', '', '76262.png2wbmp(pngname, wbmpname, dest_height, dest_width, threshold)', 'Council Tool', 'N/A', 'COUT-SU20HB28C', 42, 0, 'FBA', '8298424065', '42', 0, 0, ''),
(74, 46, '', '', '76262.png2wbmp(pngname, wbmpname, dest_height, dest_width, threshold)', 'Council Tool', 'N/A', 'COUT-35DR36C', 24, 0, 'FBA', '8298254136', '24', 0, 0, ''),
(75, 47, '', '', '76262.png2wbmp(pngname, wbmpname, dest_height, dest_width, threshold)', 'Council Tool', 'N/A', 'COUT-1230', 60, 0, 'FBA', '8298305197', '60', 0, 0, ''),
(76, 48, '', '', '76262.png2wbmp(pngname, wbmpname, dest_height, dest_width, threshold)', 'Council Tool', 'N/A', 'COUT-PR60M', 20, 0, 'FBA', '8298601251', '20', 0, 0, ''),
(77, 49, '', '', '76262.png2wbmp(pngname, wbmpname, dest_height, dest_width, threshold)', 'Council Tool', 'N/A', 'COUT-35MD20', 20, 0, 'FBA', '8298203059', '20', 0, 0, ''),
(87, 52, '', '', '4302Deadener_1.jpg', 'drgdrg', 'rdgrdg', 'drgrd', 1, 34, 'grdgdrg', 'gretgerger', NULL, 1, 0, 'A-4(16546)'),
(89, 54, '', '', '4620WhatsApp_Image_2020-08-10_at_1.48.05_AM.jpeg', '123', '123', '123', 123, 12, '123', '123', NULL, 120, 3, '23'),
(93, 56, 'ameertest1', '12345', '94461552563771_10_bike.jpg', 'Fardeen', '12345', '12345', 2, 28, 'abc', 'Hello this is a very good product kindly use it carefully', NULL, 0, 0, ''),
(95, 53, 'testameer1', '54321', '8491404.png', 'sad', '23', '34', 4, 34, 'sad', 'sadasdad', NULL, 0, 0, ''),
(96, 57, 'testameer1', '54321', '8491404.png', 'sad', '23', '34', 8, 34, 'sad', 'sadasdadasasdas', NULL, 0, 0, ''),
(97, 58, 'test', 'test', '4870icon_2.png', 'tes', 'tes', '1234', 123, 123, 'test', 'asdfas', NULL, 0, 0, ''),
(98, 59, 'test', 'test', '4870icon_2.png', 'tes', 'tes', '1234', 123, 123, 'test', 'asdfas', NULL, 0, 0, ''),
(99, 60, 'test', 'test', '4870icon_2.png', 'tes', 'tes', '1234', 123, 123, 'test', 'asdfas notes', NULL, 0, 0, '');

-- --------------------------------------------------------

--
-- Table structure for table `suppliers`
--

CREATE TABLE `suppliers` (
  `id` int(11) NOT NULL,
  `supplier_name` varchar(255) DEFAULT NULL,
  `email` varchar(255) DEFAULT NULL,
  `website` varchar(255) DEFAULT NULL,
  `office_phone` varchar(255) DEFAULT NULL,
  `office_fax` varchar(255) DEFAULT NULL,
  `account_manager` varchar(255) DEFAULT NULL,
  `street_address` varchar(255) DEFAULT NULL,
  `city` varchar(255) DEFAULT NULL,
  `state` varchar(255) DEFAULT NULL,
  `zip_code` varchar(255) DEFAULT NULL,
  `is_deleted` tinyint(1) DEFAULT '0'
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

-- --------------------------------------------------------

--
-- Table structure for table `tickets`
--

CREATE TABLE `tickets` (
  `id` int(11) NOT NULL,
  `title` text NOT NULL,
  `issue` text NOT NULL,
  `user_id` int(11) NOT NULL,
  `ticket_number` varchar(255) NOT NULL,
  `datetime` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP,
  `status` enum('new','active','resolved') NOT NULL DEFAULT 'new',
  `resolved_by` int(11) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `tickets`
--

INSERT INTO `tickets` (`id`, `title`, `issue`, `user_id`, `ticket_number`, `datetime`, `status`, `resolved_by`) VALUES
(1, 'thsaklsdfjl', 'als;dkfjklasdfj;lasd fjas;ld fjas;d', 7, '590893', '2020-08-25 23:43:02', 'resolved', 7),
(3, 'asdfasdf', 'asdfasdf', 6, '407488', '2020-08-26 00:56:41', 'resolved', 6);

-- --------------------------------------------------------

--
-- Table structure for table `tickets_msgs`
--

CREATE TABLE `tickets_msgs` (
  `id` int(11) NOT NULL,
  `ticket_id` int(11) NOT NULL,
  `user_id` int(11) NOT NULL,
  `is_customer` tinyint(1) NOT NULL,
  `msg` text NOT NULL,
  `datetime` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `tickets_msgs`
--

INSERT INTO `tickets_msgs` (`id`, `ticket_id`, `user_id`, `is_customer`, `msg`, `datetime`) VALUES
(1, 1, 7, 1, 'asdfasdf', '2020-08-26 00:29:15'),
(2, 1, 7, 1, 'sadfasdf', '2020-08-26 00:29:20'),
(3, 1, 7, 1, 'asdfasdf', '2020-08-26 00:39:00'),
(4, 1, 6, 0, 'Hello sorry for your msg we will back to you asap', '2020-08-26 00:39:57'),
(8, 3, 7, 1, 'hi ', '2020-08-26 00:56:51'),
(9, 3, 7, 1, 'hwo are you', '2020-08-26 00:56:59'),
(10, 3, 6, 0, 'Hey sorry to bother you for that', '2020-08-26 00:58:27');

-- --------------------------------------------------------

--
-- Table structure for table `users`
--

CREATE TABLE `users` (
  `id` int(11) NOT NULL,
  `username` varchar(255) NOT NULL,
  `role` enum('admin','customer') NOT NULL,
  `email` varchar(255) NOT NULL,
  `password` varchar(255) NOT NULL,
  `created_on` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP ON UPDATE CURRENT_TIMESTAMP,
  `phone` varchar(255) NOT NULL,
  `customer_name` varchar(255) NOT NULL,
  `store_name` varchar(255) NOT NULL,
  `amazon_acc_name` varchar(255) DEFAULT NULL,
  `address` varchar(255) NOT NULL,
  `is_deleted` int(1) NOT NULL,
  `user_status` enum('active','inactive','blocked') NOT NULL DEFAULT 'active'
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `users`
--

INSERT INTO `users` (`id`, `username`, `role`, `email`, `password`, `created_on`, `phone`, `customer_name`, `store_name`, `amazon_acc_name`, `address`, `is_deleted`, `user_status`) VALUES
(6, 'admin', 'admin', 'admin@admin.com', 'fb8b6dc0c671624dfd238000488cada50077cec8606c8d8e819603434976181fd581a23ec21711c0d775a754a07bff5af2b65467636013271a54a857d54d1cf4HARZ9uwriDLijfzqYX1iEWnBeVF+B4PaxdMBLhRQmw8=', '2020-07-16 09:06:47', '', '', '', NULL, '', 0, 'active'),
(7, 'test', 'customer', 'test@email.com', '74184764531b37bd664cf21d48a1cd863e90811bc3d6a3980d27803c3d7e6be973fd031da1f087a68c0c281a7f5ad3850229485e7f27f86d53310fc106846f46MMzTnU0nnPKyP6CXkPfLleKyYXADvTE041/vyZBnNro=', '2020-08-12 01:44:44', '12341234', 'test', 'test', NULL, 'test', 0, 'active'),
(9, '123', 'customer', '123@email.com', '73b4b9ab37f51310db553396470d21460eff74e88566aaaec8b63fed39b8eb7a16925eb5fc3123c461a0312e149411d9e6ecd05333d4a3a1c28357ac9867f693wF0exsd+AY1XycSqGTqws1+aqrWkcWYfY6MtIbev6Sw=', '2020-07-16 09:06:47', 'asdf', '', '', NULL, '', 0, 'active'),
(10, 'new', 'customer', 'new@gmail.com', '7f8a6560956ba61648a9291b6923633650d6b66abefd21a89b403a5aa443f33d21bf37fa7f0e60ae65ec2b4211765b0281a43820ddda02c25c779f593d08d62ctvD3yDfTMCZwH1yGcnpzyucbLUtWzJWBLMC2MHfXiJM=', '2020-07-16 09:06:47', '555555', '', '', NULL, '', 0, 'active'),
(11, 'asf', 'admin', 'asfas@gmail.com', 'ac705511589e5520b8641a04135f137f4341e08e4f562937d6e5173c195f7657e92e7254c9c25000e23bee56dfbefb5dae26ba56dec51213c08036dfb6adf91fMAHz7DRJD58DBMFiLDV6IQAo3tAZE8LOCf05xcAQe8E=', '2020-07-16 09:06:47', 'safsa', 'asfas', 'safas', 'fsfsa', 'afsa', 0, 'active'),
(12, 'shj', 'admin', 'dsg#gmail.com', 'e446f70c94e76acb77177bf54e8c819afcd383efed511653ee4e4c9cf742f8d43dfb939815bfbe0be21d6c7dad7072fed358559824587702a48ca171924ba22duuTgDVuNtpqURBlus966wmnyJ4CgbskKOOGmRgREKdY=', '2020-07-16 09:10:37', '03073500573', 'ameer', 'asfasf', 'safasf', 'qasmabad', 0, 'active'),
(13, 'Dani', 'customer', 'test@test.com', 'ab86a175355c2b99f08041cd602bd1f3e393ec1b61e77f57f0b21dd4c9413a76551db13da5d2617dba660d3b48e45278a85f115215ec3a4141ba1b90436ebee9XwgjVBsd53JsuYiwOggolDrxNyNR2f1t/bLUZx/hMK0=', '2020-08-10 14:49:21', '8451651', 'test Yes', 'My store', NULL, 'USA', 0, 'active'),
(14, 'dfbvfdb', 'customer', 'fbfd@rgreg.com', 'c9b8da3639cdf667cd43fceaea6f5093a32cd3164c455084d7e56d3d1e4189bbdc5149be6d6447a483664c5e5dac2ec70fcb98dfcfadceb4ae0ec5cbaf540d306hXuyDBAb1KGRB80BuneMvGP9MnbIOBzobfAOmcwE7c=', '2020-08-07 15:23:08', '32435435435', 'sefgserrgseg', 'segsegseges', NULL, 'gesgesges', 0, 'active'),
(15, 'Weby', 'customer', 'N/A', '705a0f2cd4387eae6071fb3dfd7cb38443af039fa3d9da046b5431a8e5cba832a45f02cdeb31dd849e66a448984354cbfeafea977c5cc001c8258f1303becbc2iw0YyVGMwS9Re58tJfkfG1L0HSfvAIY0DRzUcA7/f8U=', '2020-08-11 19:03:46', 'N/A', 'Weby Corp', 'Weby Corp', NULL, 'N/A', 0, 'active');

-- --------------------------------------------------------

--
-- Table structure for table `user_orders`
--

CREATE TABLE `user_orders` (
  `id` int(11) NOT NULL,
  `order_id` int(11) NOT NULL,
  `datetime` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP,
  `user_id` int(11) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `user_orders`
--

INSERT INTO `user_orders` (`id`, `order_id`, `datetime`, `user_id`) VALUES
(5, 8, '2020-07-10 23:11:55', 7),
(6, 16, '2020-07-12 20:45:00', 7),
(7, 54, '2020-08-12 01:07:57', 7);

--
-- Indexes for dumped tables
--

--
-- Indexes for table `auths`
--
ALTER TABLE `auths`
  ADD PRIMARY KEY (`auth_id`);

--
-- Indexes for table `invoices`
--
ALTER TABLE `invoices`
  ADD PRIMARY KEY (`id`);

--
-- Indexes for table `orders`
--
ALTER TABLE `orders`
  ADD PRIMARY KEY (`id`);

--
-- Indexes for table `orders_more`
--
ALTER TABLE `orders_more`
  ADD PRIMARY KEY (`order_more_id`);

--
-- Indexes for table `suppliers`
--
ALTER TABLE `suppliers`
  ADD PRIMARY KEY (`id`);

--
-- Indexes for table `tickets`
--
ALTER TABLE `tickets`
  ADD PRIMARY KEY (`id`);

--
-- Indexes for table `tickets_msgs`
--
ALTER TABLE `tickets_msgs`
  ADD PRIMARY KEY (`id`);

--
-- Indexes for table `users`
--
ALTER TABLE `users`
  ADD PRIMARY KEY (`id`);

--
-- Indexes for table `user_orders`
--
ALTER TABLE `user_orders`
  ADD PRIMARY KEY (`id`);

--
-- AUTO_INCREMENT for dumped tables
--

--
-- AUTO_INCREMENT for table `auths`
--
ALTER TABLE `auths`
  MODIFY `auth_id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=2;

--
-- AUTO_INCREMENT for table `invoices`
--
ALTER TABLE `invoices`
  MODIFY `id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=19;

--
-- AUTO_INCREMENT for table `orders`
--
ALTER TABLE `orders`
  MODIFY `id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=61;

--
-- AUTO_INCREMENT for table `orders_more`
--
ALTER TABLE `orders_more`
  MODIFY `order_more_id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=100;

--
-- AUTO_INCREMENT for table `suppliers`
--
ALTER TABLE `suppliers`
  MODIFY `id` int(11) NOT NULL AUTO_INCREMENT;

--
-- AUTO_INCREMENT for table `tickets`
--
ALTER TABLE `tickets`
  MODIFY `id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=5;

--
-- AUTO_INCREMENT for table `tickets_msgs`
--
ALTER TABLE `tickets_msgs`
  MODIFY `id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=11;

--
-- AUTO_INCREMENT for table `users`
--
ALTER TABLE `users`
  MODIFY `id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=16;

--
-- AUTO_INCREMENT for table `user_orders`
--
ALTER TABLE `user_orders`
  MODIFY `id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=8;
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
