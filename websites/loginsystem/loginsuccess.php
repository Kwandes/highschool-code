<?php

	session_start();
	if($_SESSION['loggedin']!=true)
	{
		header('Location: index.php');
		exit();
	}
?>
	<link rel='stylesheet' href='loginsucc_style.css' text='text/css' />

<?php
	if($_SESSION['user']=='Admin')
	{
		echo "<body id='body_admin'>";
	}
	else
	{
	echo "<body>";
	}
	echo "User: ".$_SESSION['user'];
	echo "<br/>"."Permissions: ".$_SESSION['perm']."<br/>";
	
	if($_SESSION['perm']=='Root')
	{
		echo "Hello Admin"."<br/>";
	}
?>
	What can I do for you today?
	<br/>
	<a href='logout.php'><input type='submit' value='FUCK OFF' /></a>
	</body>
	
