<?php
	session_start();
	
	$_SESSION['Displaychoice'] = 'who';
	header('Location: index.php');
?>