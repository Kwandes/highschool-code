<?php
	session_start();
	
	$_SESSION['Displaychoice'] = 'join';
	header('Location: index.php');
?>