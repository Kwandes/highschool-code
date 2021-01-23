<?php

	session_start();
	if($_SESSION['loggedin']!=true)
	{
		header('Location: index.php');
		exit();
	}
	echo "<link rel='stylesheet' href='loginsucc_style.css' text='text/css' />";
	echo "<body>";
	echo "User: ".$_SESSION['user'];
	echo "<br/>"."Permissions: ".$_SESSION['perm']."<br/>";
	
	if($_SESSION['perm']=='Root')
	{
		echo "Hello Admin"."<br/>";
	}
	echo "What can I do for you today?"."<br/>";
	echo "<a href='logout.php'><input type='submit' value='FUCK OFF' /></a>";
	echo "</body>";
	

?>