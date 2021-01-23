
function DisplayRand(Weapon, Headwear, Armor, Vest, Backpack, Extra, Map, Time, TacticName, Tactic, Author, Rating)
{
	document.getElementById("Weapon").innerHTML = "Weapon: " + Weapon;
	document.getElementById("Headwear").innerHTML = "Headwear: " + Headwear;
	document.getElementById("Armor").innerHTML = "Armor: " + Armor;
	document.getElementById("Vest").innerHTML = "Vest: " + Vest;
	document.getElementById("Backpack").innerHTML = "Backpack: " + Backpack;
	document.getElementById("Extra").innerHTML = 'Special Gear: ' + Extra;
	document.getElementById("Map").innerHTML = "Map: " + Map;
	document.getElementById("Time").innerHTML = "Time: " + Time;
	document.getElementById("TacticName").innerHTML = "Tactic name: " + TacticName;
	document.getElementById("Tactic").innerHTML = "Tactic: " + "<span style='font-size: 20;'>" + Tactic + "</span>";
	document.getElementById("Author").innerHTML = "Author: " + Author;
	document.getElementById("Rating").innerHTML = "Rating: " + Rating;
}
function DisplayPreset(Weapon, Headwear, Armor, vest, Backpack, Extra, Map, Time, TacticName, Tactic, Author, Rating)
{
	document.getElementById("Weapon").innerHTML = "Weapon: " + Weapon;
	document.getElementById("Headwear").innerHTML = "Headwear: " + Headwear;
	document.getElementById("Armor").innerHTML = "Armor: " + Armor;
	document.getElementById("Vest").innerHTML = "Vest: " + Vest;
	document.getElementById("Backpack").innerHTML = "Backpack: " + Backpack;
	document.getElementById("Extra").innerHTML = 'Special Gear: ' + Extra;
	document.getElementById("Map").innerHTML = "Map: " + Map;
	document.getElementById("Time").innerHTML = "Time: " + Time;
	document.getElementById("TacticName").innerHTML = "Tactic name: " + TacticName;
	document.getElementById("Tactic").innerHTML = "Tactic: " + Tactic;
	document.getElementById("Author").innerHTML = "Author: " + Author;
	document.getElementById("Rating").innerHTML = "Rating: " + Rating;
}
function RateUpRand(){
	location.href = "RateUpRand.php";
}
function RateDownRand(){
	location.href = "RateDownRand.php";
}
function RateUpPreset(){
	location.href = "RateUpPreset.php";
}
function RateDownPreset(){
	location.href = "RateDowmPreset.php";
}
