function Sticky()
{
	$(document).ready(function() {
		var NavY = $('#header').offset().top;  
		var stickyNav = function(){
		var ScrollY = $(window).scrollTop();	   
		if (ScrollY > NavY) { 
			$('#header').addClass('stickyLogo');
		} else {
			$('#header').removeClass('stickyLogo'); 
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
	var Menu = document.getElementById('Menu');
	if (Width < Limit)
	{
	//	alert("Small");
	//	alert(Menu.style.display);
		Menu.style.display = "none";
	}
	else
	{
	//	alert("Big");
	//	alert(Menu.style.display);
		Menu.style.display = "inline";
	}
	//alert("finished");
}
function changeDisplay()
{
	var Width = window.innerWidth;
	alert(Width);
	var Limit = 840;
	var Menu = document.getElementById('Menu');
	//if (Width < Limit)
	//{
		alert("Small");
		alert(Menu.style.display);
		Menu.style.display = "inline";
	//}
	alert("finished");
}