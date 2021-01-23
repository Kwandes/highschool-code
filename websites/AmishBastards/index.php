<?php

	
	session_start();
//$Display = "loremipsum.php";
	if(isset($_SESSION['WhoAreWe']));
	else
	{
		header('Location: Display.php');
		exit;
	}
		if(isset($_SESSION['Displaychoice']));
	else
	{
		header('Location: DisplaychoiceWho.php');
		exit;
	}
?>

<!DOCTYPE HTML>
<html lang="en">
<head>
	<meta charset="utf-8" />
	<meta http-equiv="X-UA-Compatible" content="IE=edge,chrome=1" />
	
	<title>Amish Bastards</title>
	
	<meta name="Ever heard of Amish Bastards, aka 'AB'? If not, here is some information about us!" content="Rust group Amish Bastards" />
	<meta name="keywords" content="AB, Amish Bastards, Rust, group, recruting, Kwandes" />
	<link rel="stylesheet" href="indexstyle.css" text="text/css"/>
	
</head>



<body>
	<div id="Page">
		<div id="Logo">Amish Bastards
		</div>
		<div id="Menu">
			<a style="text-decoration : none;" href="DisplaychoiceWho.php"><div class=" Menuoption"> Who are we? </div></a>
			<a style="text-decoration : none;" href="DisplaychoiceMembers.php"><div class="Menuoption"> Members </div></a>
			<a style="text-decoration : none;" href="DisplaychoiceGallery.php"><div class="Menuoption"> Gallery </div></a>
			<a style="text-decoration : none;" href="DisplaychoiceJoin.php"><div class="Menuoption"> Wanna join? </div></a>
		</div>
		<div id="Display" style="height:590px;"> 
		<?php
			if($_SESSION['Displaychoice'] == 'who')
				echo $_SESSION['WhoAreWe'];
			else if($_SESSION['Displaychoice'] == 'members')
				header('Location: Members.php');
			else if($_SESSION['Displaychoice'] == 'gallery')
				header('Location: Gallery.php');
			else if($_SESSION['Displaychoice'] == 'join')
				echo $_SESSION['JoinUs'];
		?>
		</div>
		<div style="clear-both"></div>
		<div id="Footer">
		</div>
	</div>
	
	
</body>
</html>