<?php
	session_start();
	if((isset($_SESSION['loggedin'])) && ($_SESSION['loggedin']==true))
	{
		header('Location: loginsuccess.php');
		exit();
	}
?>
<!DOCTYPE HTML>
<html lang="pl">
<head>
	<meta charset="utf-8" />
	<meta http-equiv="X-UA-Compatible" content="IE=edge,chrome=1" />
	
	<title>Login test</title>
	
	<meta name="description" content="Kwandes's playground" />
	<meta name="keywords" content="Kwandes, kwandes, test" />
	<link rel='stylesheet' href='index_style.css' text='text/css' />
	
</head>

<body>
	
	<div >
	Log in system test
	<br/><br/>
	<form action="login.php" method="post">
	
	Login: <br/> <input type="text" name="login" /> <br/>
	Password: <br/> <input type="password" name="password" /> <br/><br/>
	<input type="submit" value="Log in" />
	</form>
	<?php
	if(isset($_SESSION['failedlogin'])) echo $_SESSION['failedlogin'];
	?>
	</div>
	
</body>
</html>