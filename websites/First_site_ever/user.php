<!DOCTYPE HTML>
<html lang="en">
<head>
	<meta charset="utf-8" />
	<meta http-equiv="X-UA-Compatible" content="IE=edge,chrome=1" />
	
	<title>First serious website</title>
	
	<meta name="description" content="Kwandes's playground" />
	<meta name="keywords" content="Kwandes, kwandes, test" />
	<link rel="stylesheet" href="style.css" text="text/css" />
	
</head>

<body>
	<div id="page">
		<div id="maintitle">
			User stuff
		</div>
		
		<div id="menu">
			<a href="index.php"><div class="menuoption">Main page</div></a>
			<a href="Playground.php"><div class="menuoption">Playground</div></a>
			<a href="Contact.php"><div class="menuoption">Contact</div></a>
			<a href="user.php"><div class="menuoption">Log in</div></a>
			<div style="clear:both"></div>
		</div>
		
		<div id="login">
			<form action="login.php" method = "post">
			Login: <br/> <input type="text" name="login"/><br/>
			Password: <br/> <input type="password" name="password"/><br/><br/>
			<input type="submit" value="Log in" style="text-align:center;"/>
			</form>
		</div>
		
		<div id="footer">
			 Kwandes z.o.o &copy
		</div>
	</div>
</body>
</html>