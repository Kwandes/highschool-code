<!DOCTYPE HTML>
<html lang="en">
<head>
	<meta charset="utf-8" />
	<meta http-equiv="X-UA-Compatible" content="IE=edge,chrome=1" />
	
	<title>Upload your article!</title>
	
	<meta name="description" content="Upload your article!" />
	<meta name="keywords" content="Article, upload" />
	<link rel="stylesheet" href="style.css" text="text/css" />
	<script type="text/javascript" src="text.js"></script>
	
</head>

<body>

	<script src="text.js"></script>
	<div id="Logo">
			<a> <img style="margin-left:45%;" src="img/ArticleBrowse.png" class="LogoImage" /></a>
			<a> <img src="img/ArticleWrite.png" class="LogoImage" /></a>
			<div style ="float:clear;"></div>
	</div>

	<div id="Container">
		<div class="TextInsert">
			<form>
			Input text: </br>
				<textarea  id="TextInsert" ></textarea></br>
				<input type="submit" name="Add" onclick="Submit()" id="SubmitBtn"></input></br>
			</form>
		</div>
		</br>Result:</br>
		<div class="TextDisplay">
			<div id="TextDisplayMain">
				lorem ipsum
			</div>
		</div>
		
		<div class="Savebtn">
		</div>
		<div class="ClearBtn">
		</div>
		
		<div class="buffor">
		</div>
		<div class="buffor">
		</div>
		<div class="buffor">
		</div>
	
	</div>
	
	<div id="Footer">
	Trademark
	</div>
	
	<script src="jquery-3.1.1.min.js"></script>
	<script>
		$(document).ready(function() {
		var NavY = $('#Logo').offset().top;  
		var stickyNav = function(){
		var ScrollY = $(window).scrollTop();	   
		if (ScrollY > NavY) { 
			$('#Logo').addClass('stickyLogo');
		} else {
			$('#Logo').removeClass('stickyLogo'); 
		} };
		stickyNav(); 
		$(window).scroll(function() {
		stickyNav(); }); });
	</script>
	
</body>
</html>