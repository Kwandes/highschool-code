-- phpMyAdmin SQL Dump
-- version 4.7.4
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Generation Time: Dec 25, 2017 at 11:39 PM
-- Server version: 10.1.29-MariaDB
-- PHP Version: 7.2.0

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
SET AUTOCOMMIT = 0;
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `eftstrats`
--

-- --------------------------------------------------------

--
-- Table structure for table `armor`
--

CREATE TABLE `armor` (
  `ID` int(11) NOT NULL,
  `Armor` text COLLATE utf8_polish_ci NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_polish_ci;

--
-- Dumping data for table `armor`
--

INSERT INTO `armor` (`ID`, `Armor`) VALUES
(1, 'None'),
(2, 'lvl 2'),
(3, 'FORT'),
(4, 'Any');

-- --------------------------------------------------------

--
-- Table structure for table `backpacks`
--

CREATE TABLE `backpacks` (
  `ID` int(11) NOT NULL,
  `Backpack` text COLLATE utf8_polish_ci NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_polish_ci;

--
-- Dumping data for table `backpacks`
--

INSERT INTO `backpacks` (`ID`, `Backpack`) VALUES
(1, 'None'),
(2, 'Any'),
(3, 'T-bag'),
(4, 'P2W Bag'),
(5, 'ScavBP'),
(6, 'Trizip'),
(7, 'Pilgrim');

-- --------------------------------------------------------

--
-- Table structure for table `extra`
--

CREATE TABLE `extra` (
  `ID` int(11) NOT NULL,
  `Extra` text COLLATE utf8_polish_ci NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_polish_ci;

--
-- Dumping data for table `extra`
--

INSERT INTO `extra` (`ID`, `Extra`) VALUES
(1, 'None'),
(2, 'Any'),
(3, 'NightVision');

-- --------------------------------------------------------

--
-- Table structure for table `headwear`
--

CREATE TABLE `headwear` (
  `ID` int(11) NOT NULL,
  `Headwear` text COLLATE utf8_polish_ci NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_polish_ci;

--
-- Dumping data for table `headwear`
--

INSERT INTO `headwear` (`ID`, `Headwear`) VALUES
(1, 'None'),
(2, 'Ushanka'),
(3, 'Kolpak'),
(4, 'Kiver'),
(5, 'Any');

-- --------------------------------------------------------

--
-- Table structure for table `maps`
--

CREATE TABLE `maps` (
  `ID` int(11) NOT NULL,
  `Map` text COLLATE utf8_polish_ci NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_polish_ci;

--
-- Dumping data for table `maps`
--

INSERT INTO `maps` (`ID`, `Map`) VALUES
(1, 'Factory'),
(2, 'Customs'),
(3, 'Shoreline'),
(4, 'Woods'),
(5, 'Any');

-- --------------------------------------------------------

--
-- Table structure for table `preset`
--

CREATE TABLE `preset` (
  `ID` int(11) NOT NULL,
  `Weapon` text COLLATE utf8_polish_ci NOT NULL,
  `Headwear` text COLLATE utf8_polish_ci NOT NULL,
  `Armor` text CHARACTER SET utf32 COLLATE utf32_polish_ci NOT NULL,
  `Vest` text COLLATE utf8_polish_ci NOT NULL,
  `Backpack` text COLLATE utf8_polish_ci NOT NULL,
  `Extra` text COLLATE utf8_polish_ci NOT NULL,
  `Map` text COLLATE utf8_polish_ci NOT NULL,
  `Time` text COLLATE utf8_polish_ci NOT NULL,
  `TacticName` text COLLATE utf8_polish_ci NOT NULL,
  `Tactic` text COLLATE utf8_polish_ci NOT NULL,
  `Author` text COLLATE utf8_polish_ci NOT NULL,
  `Rating` int(11) NOT NULL DEFAULT '0'
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_polish_ci COMMENT='A tactic with specific gear';

--
-- Dumping data for table `preset`
--

INSERT INTO `preset` (`ID`, `Weapon`, `Headwear`, `Armor`, `Vest`, `Backpack`, `Extra`, `Map`, `Time`, `TacticName`, `Tactic`, `Author`, `Rating`) VALUES
(1, 'Any AK', 'Ushanka', 'Any', 'Scav Vest', 'ScavBP', 'Nothing', 'Any', 'Doesn\'t matter', 'See the Scav. Feel the Scav. Be the Scav.', 'You are a Scav. You have to walk, act and shoot like a Scav and mumble from time to time.', 'Kwandes', 0),
(2, 'M4', 'Kiver', 'Fort', 'Alfa Rig', 'Pilgrim', 'NVGs', 'Any', 'Doesn\'t matter(still take those NVGs to show off)', 'Mommy\'s big Boy', 'Your Mom gave you nice clothes but deep inside you are still a little kid. Every time you get shot you have to use mumble and run into cover. Extract as soon as possible.', 'Kwandes', 2),
(3, 'Any', 'Any', 'Any', 'Any', 'Any', 'Any', 'Any', 'Any', 'Freedom', 'Bring whatever you want.', 'Kwandes', 0);

-- --------------------------------------------------------

--
-- Table structure for table `tactics`
--

CREATE TABLE `tactics` (
  `ID` int(11) NOT NULL,
  `TacticName` text COLLATE utf8_polish_ci NOT NULL,
  `Tactic` text COLLATE utf8_polish_ci NOT NULL,
  `Rating` int(11) NOT NULL DEFAULT '0',
  `Author` text CHARACTER SET utf32 COLLATE utf32_polish_ci NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_polish_ci COMMENT='Tactic which doesn''t include gear';

--
-- Dumping data for table `tactics`
--

INSERT INTO `tactics` (`ID`, `TacticName`, `Tactic`, `Rating`, `Author`) VALUES
(1, 'True Slav', 'Every time you see an enemy or are not moving, you have to squat.', 65, 'Kwandes'),
(2, 'Overly Happy', 'After every kill you have to jump until you run out of stamina.', 48, 'Kwandes'),
(3, 'Rambo', 'Don\'t stop shooting. Whenever you see an enemy you have to fire until your mag is empty', 0, 'Kwandes'),
(4, 'Call of Duty', 'Keep running. If you see someone either go prone and shoot or try to knife them', 0, 'Kwandes'),
(5, 'Crazy Granadier', 'Throw at least 1 nade per minute.', 0, 'Kwandes');

-- --------------------------------------------------------

--
-- Table structure for table `vestlist`
--

CREATE TABLE `vestlist` (
  `ID` int(11) NOT NULL,
  `Vest` text COLLATE utf8_polish_ci NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_polish_ci;

--
-- Dumping data for table `vestlist`
--

INSERT INTO `vestlist` (`ID`, `Vest`) VALUES
(1, 'None'),
(2, 'Scav Vest'),
(3, 'BlackRock'),
(4, 'AWS'),
(5, 'Scout Sniper'),
(6, 'Alpha Rig'),
(7, 'Any');

-- --------------------------------------------------------

--
-- Table structure for table `weapontypes`
--

CREATE TABLE `weapontypes` (
  `ID` int(11) NOT NULL,
  `Weapon` text COLLATE utf8_polish_ci NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_polish_ci COMMENT='Weapon types';

--
-- Dumping data for table `weapontypes`
--

INSERT INTO `weapontypes` (`ID`, `Weapon`) VALUES
(1, 'Melee'),
(2, 'Pistol'),
(3, 'Shotgun'),
(4, 'Submachine gun'),
(5, 'Semi-auto rifle'),
(6, 'Assault Rifle'),
(7, 'Sniper Rifle'),
(8, 'Grenades'),
(9, 'Any');

--
-- Indexes for dumped tables
--

--
-- Indexes for table `armor`
--
ALTER TABLE `armor`
  ADD PRIMARY KEY (`ID`);

--
-- Indexes for table `backpacks`
--
ALTER TABLE `backpacks`
  ADD PRIMARY KEY (`ID`);

--
-- Indexes for table `extra`
--
ALTER TABLE `extra`
  ADD PRIMARY KEY (`ID`);

--
-- Indexes for table `headwear`
--
ALTER TABLE `headwear`
  ADD PRIMARY KEY (`ID`);

--
-- Indexes for table `maps`
--
ALTER TABLE `maps`
  ADD PRIMARY KEY (`ID`);

--
-- Indexes for table `preset`
--
ALTER TABLE `preset`
  ADD PRIMARY KEY (`ID`);

--
-- Indexes for table `tactics`
--
ALTER TABLE `tactics`
  ADD PRIMARY KEY (`ID`);

--
-- Indexes for table `vestlist`
--
ALTER TABLE `vestlist`
  ADD PRIMARY KEY (`ID`);

--
-- Indexes for table `weapontypes`
--
ALTER TABLE `weapontypes`
  ADD PRIMARY KEY (`ID`);

--
-- AUTO_INCREMENT for dumped tables
--

--
-- AUTO_INCREMENT for table `armor`
--
ALTER TABLE `armor`
  MODIFY `ID` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=5;

--
-- AUTO_INCREMENT for table `backpacks`
--
ALTER TABLE `backpacks`
  MODIFY `ID` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=8;

--
-- AUTO_INCREMENT for table `extra`
--
ALTER TABLE `extra`
  MODIFY `ID` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=4;

--
-- AUTO_INCREMENT for table `headwear`
--
ALTER TABLE `headwear`
  MODIFY `ID` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=6;

--
-- AUTO_INCREMENT for table `maps`
--
ALTER TABLE `maps`
  MODIFY `ID` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=6;

--
-- AUTO_INCREMENT for table `preset`
--
ALTER TABLE `preset`
  MODIFY `ID` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=4;

--
-- AUTO_INCREMENT for table `tactics`
--
ALTER TABLE `tactics`
  MODIFY `ID` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=6;

--
-- AUTO_INCREMENT for table `vestlist`
--
ALTER TABLE `vestlist`
  MODIFY `ID` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=8;

--
-- AUTO_INCREMENT for table `weapontypes`
--
ALTER TABLE `weapontypes`
  MODIFY `ID` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=10;
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
