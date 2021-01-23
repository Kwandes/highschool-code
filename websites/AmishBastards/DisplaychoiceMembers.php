<?php
	session_start();
	
	$_SESSION['Displaychoice'] = 'members';
	header('Location: index.php');
?>