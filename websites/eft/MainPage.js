function Sticky()
{
	$(document).ready(function() {
		var NavY = $('#StickyHeader').offset().top;  
		var stickyNav = function(){
		var ScrollY = $(window).scrollTop();	   
		if (ScrollY > NavY) {
			$('#StickyHeader').addClass('stickyLogo');
			IncHeight();
		} else {
			$('#StickyHeader').removeClass('stickyLogo');
			DecHeight();
		} };
		stickyNav(); 
		$(window).scroll(function() {
		stickyNav(); }); });
}
function IncHeight()
{
	var height = document.getElementById("Content");
	height.style.marginTop = 250;
}
function DecHeight()
{
	var height = document.getElementById("Content");
	height.style.marginTop = 50;
}
function test()
{
	alert("testing");
}
function ResizeNav()
{
	var w = window.innerWidth;
	if(w <= 750)
	{
		document.getElementById("Navigation").style.display = "none";
		document.getElementById("SmallNavigation").style.display = "none";
		document.getElementById("NavButton").style.display = "inline-block";
		document.getElementById("StickyHeader").style.height = "150px";
	}
	else{
		document.getElementById("Navigation").style.display = "inline-block";
		document.getElementById("SmallNavigation").style.display = "none";
		document.getElementById("NavButton").style.display = "none";
		document.getElementById("StickyHeader").style.height = "200px";
	}
	if(w > 1920){
		document.getElementById("StickyHeader").style.backgroundSize = "auto";
		document.getElementById("StickyHeader").style.background = "linear-gradient(black, yellow)";
	}
	if(w > 1600 && w <= 1920){
		document.getElementById("StickyHeader").style.backgroundSize = "1920px 200px";
		document.getElementById("StickyHeader").style.backgroundImage = "url(graphics/EFTHeader1920.png)";
	}
	if(w > 1280 && w <= 1600){
		document.getElementById("StickyHeader").style.backgroundSize = "1600px 200px";
		document.getElementById("StickyHeader").style.backgroundImage = "url(graphics/EFTHeader1600.png)";
	}
	if(w > 750 && w <= 1280){
		document.getElementById("StickyHeader").style.backgroundSize = "1280px 200px";
		document.getElementById("StickyHeader").style.backgroundImage = "url(graphics/EFTHeader1280.png)";
	}
	if(w <= 750){
		document.getElementById("StickyHeader").style.backgroundSize = "750px 150px";
		document.getElementById("StickyHeader").style.backgroundImage = "url(graphics/EFTHeader750.png)";
	}
	
}
function ShowNav()
{
	var State = document.getElementById("SmallNavigation").style.display;
	if(State == "none"){
		document.getElementById("SmallNavigation").style.display = "inline-block";
	}
	else{
		document.getElementById("SmallNavigation").style.display = "none";
	}

	
	
}