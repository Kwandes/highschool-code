<?php
	session_start();
	
	$_SESSION['Displaychoice'] = 'gallery';
	header('Location: index.php');
?>