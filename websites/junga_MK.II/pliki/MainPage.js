function Sticky()
{
	$(document).ready(function() {
		var NavY = $('#StickyHeader').offset().top;  
		var stickyNav = function(){
		var ScrollY = $(window).scrollTop();	   
		if (ScrollY > NavY) { 
			$('#StickyHeader').addClass('stickyLogo');
		} else {
			$('#StickyHeader').removeClass('stickyLogo'); 
		} };
		stickyNav(); 
		$(window).scroll(function() {
		stickyNav(); }); });
}

function test()
{
	alert("test");
}

function MenuResize()
{
	var Width = window.innerWidth;
	//alert(Width);
	var Limit = 840;
	var BigMenu = document.getElementById('BigMenu');
	var SmallMenu = document.getElementById('SmallMenuOpen');
	if (Width < Limit)
	{
	//	alert("Small");
	//	alert(Menu.style.display);
		BigMenu.style.display = "none";
		SmallMenu.style.display = "inline-block";
	}
	if (Width >= Limit)
	{
	//	alert("Big");
	//	alert(Menu.style.display);
		BigMenu.style.display = "inline";
		SmallMenu.style.display = "none";
	}
	//alert("finished");
}
function OpenNavMenu()
{	
	var VisibleNavMenu = document.getElementById("NavigationMenu");
	var OpenNavIcon = document.getElementById('SmallMenuOpen');
	var HideNavIcon = document.getElementById('SmallMenuClose');
	VisibleNavMenu.style.display = "inline-block";
	OpenNavIcon.style.display = "none";
	HideNavIcon.style.display = "inline-block";
	
}
function HideNavMenu()
{	
	var VisibleNavMenu = document.getElementById("NavigationMenu");
	var OpenNavIcon = document.getElementById('SmallMenuOpen');
	var HideNavIcon = document.getElementById('SmallMenuClose');
	VisibleNavMenu.style.display = "none";
	OpenNavIcon.style.display = "inline-block";
	HideNavIcon.style.display = "none";
}
function WidthHeight()
{
	var width = window.innerWidth;
	var height = window.innerHeight;
	var InfoText = document.getElementById("InfoText");
	document.getElementById("InfoText").innerHTML = "Width:" + width + "</br>" + "Height:" + height;
}
function ClearContent()
{
	document.getElementById("MainContent").innerHTML = "</br></br></br></br></br></br>";
}
function ChangeLayout()
{
	var Information = document.getElementsByClassName("Information");
	var Width = window.innerWidth;
	var Limit = 1215;
	if (Width < Limit)
	{
		Information.style.float = "none";
	}
	else
	{
		Information.style.float = "left";
	}
}